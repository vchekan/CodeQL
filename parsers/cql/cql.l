// 
//  cql.l
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

newline		[\r\n\u0085\u2028\u2029]

%%
{newline}	{/* ignore newlines */}
--(-)*[^\n]*		{ /* ignore single-line comment */}
[[:IsWhiteSpace:]]	{/* ignore spaces*/}

select		{return (int)Tokens.SELECT;}
from		{return (int)Tokens.FROM;}
where		{return (int)Tokens.WHERE;}
join		{return (int)Tokens.JOIN;}
left		{return (int)Tokens.LEFT;}
right		{return (int)Tokens.RIGHT;}
'<='		{return (int)Tokens.LE;}
'>='		{return (int)Tokens.GE;}
'!='|'<>'	{return (int)Tokens.NE;}
is			{return (int)Tokens.IS;}
used		{return (int)Tokens.USED;}
in			{return (int)Tokens.IN;}
public		{return (int)Tokens.PUBLIC;}
internal	{return (int)Tokens.INTERNAL;}
protected	{return (int)Tokens.PROTECTED;}
private		{return (int)Tokens.PRIVATE;}
as			{return (int)Tokens.AS;}

[0-9]+		{return (int)Tokens.NUMBER ;}
[a-zA-Z][_0-9a-zA-Z]*	{Console.WriteLine("debug name: '{0}'",yytext); return (int)Tokens.NAME;}
//[_a-zA-Z][_a-zA-Z0-9]?	{return (int)Tokens.NAME;}

[\.\(\)\<\>=;]	{return (int)yytext[0];}


.	{Console.WriteLine("Unknown character:"+yytext);}

%%