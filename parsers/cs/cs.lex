// =================================================================
%namespace CodeQL
%option parser, classes minimize, stack

%{
  int _line=1;
%}

// =================================================================

identifier_or_keyword	[[:IdentifierStartCharacter:]][[:IdentifierPartCharacter:]]*
newline		[\r\n\u0085\u2028\u2029]
dot_chr		[^\r\n\u0085\u2028\u2029]
// =================================================================

%%
{newline}	{/* ignore newlines */ _line++;}
\/\/[^\n]*		{ /* ignore single-line comment */}
[[:IsWhiteSpace:]]	{/* ignore spaces*/}

/* keywords */

abstract	 {return (int)Tokens.ABSTRACT;}
as	 {return (int)Tokens.AS;}
base	 {return (int)Tokens.BASE;}
bool	 {return (int)Tokens.BOOL;}
break	 {return (int)Tokens.BREAK;}
byte	 {return (int)Tokens.BYTE;}
case	 {return (int)Tokens.CASE;}
catch	 {return (int)Tokens.CATCH;}
char	 {return (int)Tokens.CHAR;}
checked	 {return (int)Tokens.CHECKED;}
class	 {return (int)Tokens.CLASS;}
const	 {return (int)Tokens.CONST;}
continue	 {return (int)Tokens.CONTINUE;}
decimal	 {return (int)Tokens.DECIMAL;}
default	 {return (int)Tokens.DEFAULT;}
delegate	 {return (int)Tokens.DELEGATE;}
do	 {return (int)Tokens.DO;}
double	 {return (int)Tokens.DOUBLE;}
else	 {return (int)Tokens.ELSE;}
enum	 {return (int)Tokens.ENUM;}
event	 {return (int)Tokens.EVENT;}
explicit	 {return (int)Tokens.EXPLICIT;}
extern	 {return (int)Tokens.EXTERN;}
false	 {return (int)Tokens.FALSE;}
finally	 {return (int)Tokens.FINALLY;}
fixed	 {return (int)Tokens.FIXED;}
float	 {return (int)Tokens.FLOAT;}
for	 {return (int)Tokens.FOR;}
foreach	 {return (int)Tokens.FOREACH;}
get	{return (int)Tokens.GET;}
goto	 {return (int)Tokens.GOTO;}
if	 {return (int)Tokens.IF;}
implicit	 {return (int)Tokens.IMPLICIT;}
in	 {return (int)Tokens.IN;}
int	 {return (int)Tokens.INT;}
interface	 {return (int)Tokens.INTERFACE;}
internal	 {return (int)Tokens.INTERNAL;}
is	 {return (int)Tokens.IS;}
lock	 {return (int)Tokens.LOCK;}
long	 {return (int)Tokens.LONG;}
namespace	 {return (int)Tokens.NAMESPACE;}
new	 {return (int)Tokens.NEW;}
null	 {return (int)Tokens.NULL;}
object	 {return (int)Tokens.OBJECT;}
operator	 {return (int)Tokens.OPERATOR;}
out	 {return (int)Tokens.OUT;}
override	 {return (int)Tokens.OVERRIDE;}
params	 {return (int)Tokens.PARAMS;}
private	 {return (int)Tokens.PRIVATE;}
protected	 {return (int)Tokens.PROTECTED;}
public	 {return (int)Tokens.PUBLIC;}
readonly	 {return (int)Tokens.READONLY;}
ref	 {return (int)Tokens.REF;}
return	 {return (int)Tokens.RETURN;}
sbyte	 {return (int)Tokens.SBYTE;}
sealed	 {return (int)Tokens.SEALED;}
set	{return (int)Tokens.SET;}
short	 {return (int)Tokens.SHORT;}
sizeof	 {return (int)Tokens.SIZEOF;}
stackalloc	 {return (int)Tokens.STACKALLOC;}
static	 {return (int)Tokens.STATIC;}
string	 {return (int)Tokens.STRING;}
struct	 {return (int)Tokens.STRUCT;}
switch	 {return (int)Tokens.SWITCH;}
this	 {return (int)Tokens.THIS;}
throw	 {return (int)Tokens.THROW;}
true	 {return (int)Tokens.TRUE;}
try	 {return (int)Tokens.TRY;}
typeof	 {return (int)Tokens.TYPEOF;}
uint	 {return (int)Tokens.UINT;}
ulong	 {return (int)Tokens.ULONG;}
unchecked	 {return (int)Tokens.UNCHECKED;}
unsafe	 {return (int)Tokens.UNSAFE;}
ushort	 {return (int)Tokens.USHORT;}
using	 {return (int)Tokens.USING;}
virtual	 {return (int)Tokens.VIRTUAL;}
void	 {return (int)Tokens.VOID;}
volatile	 {return (int)Tokens.VOLATILE;}
while	 {return (int)Tokens.WHILE;}
[0-9]+	{return (int)Tokens.DECIMAL_DIGITS;}
[0-9]+[uUlL]	{return (int)Tokens.DECIMAL_DIGITS_WITH_SUFFIX;}
0[xX][0-9a-fA-F]+	{ return (int)Tokens.HEX_DIGITS;}
0[xX][0-9a-fA-F]+[uUlL]	{ return (int)Tokens.HEX_DIGITS_WITH_SUFFIX;}

// TODO: the next 3 are incorect:
'{dot_chr}'			{return (int)Tokens.SINGLE_CHARACTER;}
'\\['"\\0abfnrtv]'	{return (int)Tokens.SIMPLE_ESCAPE_SEQUENCE;}
'\\x[0-9a-fA-F]{1,4}'	{return (int)Tokens.HEXADECIMAL_ESCAPE_SEQUENCE;}

//"({dot_chr}|(\\['"\\0abfnrtv])|(\\x[0-9a-fA-F]{1,4})|(\\u[0-9a-zA-Z]{4})|(\\u[0-9a-zA-Z]{8}))*" { return (int)Tokens.REGULAR_STRING_LITERAL;}

// TODO:
{identifier_or_keyword}		{return (int)Tokens.IDENTIFIER;}

[;.'!@%^&*()-=+|<>\{}0-9]|\[|\]	{return (int)yytext[0];}

.	{Console.WriteLine("Unknown character:"+yytext);}
// =================================================================
%%
public override void yyerror(string fmt, params object[] args)
{
	//yyhdlr.AddError(fmt, yylloc);
	string error = args.Length == 0 ? fmt : string.Format(fmt, args);
	error += "\n line:"+_line;
	throw new ApplicationException(error+
		string.Format(" endColumn:{0} endLine:{1} startColumn:{2} startLine:{3}", 
		yylloc.EndColumn, yylloc.EndLine, yylloc.StartColumn, yylloc.StartLine)
	);
}
