// 
//  cql.y
//  
//  Author:
//       Vadim Chekan <kot.begemot@gmail.com>
// 
//  Copyright (c) 2009 Vadim Chekan
// 
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation; either version 2 of the License, or
//  (at your option) any later version.
// 
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
//  GNU General Public License for more details.
//  
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
// 

%namespace CodeQL.parsers.cql
%partial

%token SELECT FROM WHERE JOIN LEFT RIGHT  LE GE NE IS USED IN PUBLIC INTERNAL PROTECTED PRIVATE AS
%token <Number> NUMBER
%token <Name> NAME
%right NOT
%left AND
%left OR 

%YYSTYPE CqlValueType
%union {
	public StatementNode Statement;
	public SelectNode Select;
	public List<SelectExpressionNode> SelectExprs;
	public SelectExpressionNode SelectExpr;
	public ExpressionNode Expression;
	public ColumnExpressionNode ColumnExpression;
	//
	public string Name;
	public int Number;
}

%type <Statement> statement
%type <Select> select
%type <SelectExprs> selectExprs
%type <SelectExpr> selectExpr
%type <Expression> expr
%type <ColumnExpression> column

%%

batch
	: statement			{ this.Batch = new BatchNode(); this.Batch.Statements.Add($1); }
	| batch ';' statement	{ this.Batch.Statements.Add($3); }
	;
	
statement
	: select	{ $$=$1; }
	;
	
select
	: SELECT selectExprs FROM NAME NAME joinsOpt whereOpt		{ $$ = new SelectNode { SelectExpressions=$2 }; }
	;
	
selectExprs
	: selectExpr				{ $$ = new List<SelectExpressionNode>(); $$.Add($1); }
	| selectExprs selectExpr	{ $$.Add($2); }
	;
	
selectExpr
	: expr			{ $$ = new SelectExpressionNode {Expression=$1}; }
	| expr AS NAME	{ $$ = new SelectExpressionNode {Expression=$1, ImplicitAlias=$3}; }
	;

column
	: NAME '.' NAME		{$$ = new ColumnExpressionNode {Name=$3, TableAlias=$1}; }
	;

joinsOpt
	:
	| joins
	;
	
joins
	: join
	| joins join
	;

join
	: JOIN
	| LEFT JOIN
	| RIGHT JOIN
	;
	
whereOpt
	:
	| WHERE boolExpr
	;

boolExpr
	: expr comparison expr
	| boolExpr OR boolExpr
	| boolExpr AND boolExpr
	| NOT boolExpr
	| '(' boolExpr ')'
	| NAME IS visibility
	| NAME IS USED IN
		;

expr
	: NUMBER	{$$ = new ConstNode {Constant=$1}; }
	| column	{$$ = $1; }
	;

comparison
	: '<'
	| '>'
	| '='
	| LE
	| GE
	| NE
	;

visibility
	: PUBLIC
	| INTERNAL
	| PROTECTED
	| PRIVATE
	;
	

%%
