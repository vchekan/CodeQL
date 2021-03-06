%output=parser.cs

%token ABSTRACT AS BASE BOOL BREAK BYTE CASE CATCH CHAR CHECKED CLASS CONST 
%token CONTINUE DECIMAL DEFAULT DELEGATE DO DOUBLE ELSE ENUM EVENT EXPLICIT 
%token EXTERN FALSE FINALLY FIXED FLOAT FOR FOREACH GOTO IF IMPLICIT IN 
%token INT INTERFACE INTERNAL IS LOCK LONG NAMESPACE NEW NULL OBJECT OPERATOR 
%token OUT OVERRIDE PARAMS PRIVATE PROTECTED PUBLIC READONLY REF RETURN 
%token SBYTE SEALED SHORT SIZEOF STACKALLOC STATIC STRING STRUCT SWITCH 
%token THIS THROW TRUE TRY TYPEOF UINT ULONG UNCHECKED UNSAFE USHORT USING 
%token VIRTUAL VOID VOLATILE WHILE REF OUT NEW YIELD ALIAS PARTIAL ADD 
%token REMOVE EXTERN GET SET WHERE STAR_EQ SLASH_EQ SEMI_SEMI RIGHT_SHIFT_ASSIGNMENT 
%token RIGHT_SHIFT QM_QM PLUS_PLUS PLUS_EQ PERCENT_EQ NE MINUS_MINUS MINUS_EQ 
%token LT_LT_EQ LT_LT LITERAL LE IDENTIFIER GE EQ_EQ CARET_EQ BAR_EQ BAR_BAR 
%token AMP_EQ AMP_AMP 

%%
// A.2.1 Basic concepts
compilation_unit:
	extern_alias_directivesopt using_directivesopt global_attributesopt
	|namespace_member_declarationsopt
	;

namespace_name:
	namespace_or_type_name
	;

type_name:
	namespace_or_type_name
	;

namespace_or_type_name:
	IDENTIFIER type_argument_listopt
	|qualified_alias_member
	|namespace_or_type_name '.' IDENTIFIER type_argument_listopt
;
// A.2.2 Types
type:
	value_type
	|reference_type
	|type_parameter
	;

value_type:
	struct_type
	|enum_type
	;

struct_type:
	type_name
	|simple_type
	|nullable_type
	;

simple_type:
	numeric_type
	|BOOL
	;

numeric_type:
	integral_type
	|floating_point_type
	|DECIMAL
	;

integral_type:
	SBYTE
	|BYTE
	|SHORT
	|USHORT
	|INT
	|UINT
	|LONG
	|ULONG
	|CHAR
	;

floating_point_type:
	FLOAT
	|DOUBLE
	;

enum_type:
	type_name
	;

nullable_type:
	non_nullable_value_type '?'
	;

non_nullable_value_type:
	enum_type
	|type_name
	|simple_type
	;

reference_type:
	class_type
	|interface_type
	|array_type
	|delegate_type
	;

class_type:
	type_name
	|OBJECT
	|STRING
	;

interface_type:
	type_name
	;

array_type:
	non_array_type rank_specifiers
	;

non_array_type:
	value_type
	|class_type
	|interface_type
	|delegate_type
	|type_parameter
	;

rank_specifiers:
	rank_specifier
	|rank_specifiers rank_specifier
	;

rank_specifier:
	'[' dim_separatorsopt ']'
	;

dim_separators:
	','
	|dim_separators ','
	;

delegate_type:
	type_name
;
// A.2.3 Variables
variable_reference:
	expression
;
// A.2.4 Expressions
argument_list:
	argument
	|argument_list ',' argument
	;

argument:
	expression
	|REF variable_reference
	|OUT variable_reference
	;

primary_expression:
	array_creation_expression
	|primary_no_array_creation_expression
	;

primary_no_array_creation_expression:
	LITERAL
	|simple_name
	|parenthesized_expression
	|member_access
	|invocation_expression
	|element_access
	|this_access
	|base_access
	|post_increment_expression
	|post_decrement_expression
	|object_creation_expression
	|delegate_creation_expression
	|typeof_expression
	|checked_expression
	|unchecked_expression
	|default_value_expression
	|anonymous_method_expression
	;

simple_name:
	IDENTIFIER type_argument_listopt
	;

parenthesized_expression:
	'(' expression ')'
	;

member_access:
	primary_expression '.' IDENTIFIER type_argument_listopt
	|predefined_type '.' IDENTIFIER type_argument_listopt
	|qualified_alias_member '.' IDENTIFIER type_argument_listopt
	;

predefined_type: 
	BOOL | BYTE | CHAR | DECIMAL | DOUBLE | FLOAT | INT | LONG
	|OBJECT | SBYTE | SHORT | STRING | UINT | ULONG | USHORT
	;

invocation_expression:
	primary_expression '(' argument_listopt ')'
	;

element_access:
	primary_no_array_creation_expression '[' expression_list ']'
	;

expression_list:
	expression
	|expression_list ',' expression
	;

this_access:
	THIS
	;

base_access:
	BASE '.' IDENTIFIER type_argument_listopt
	|BASE '[' expression_list ']'
	;

post_increment_expression:
	primary_expression PLUS_PLUS
	;

post_decrement_expression:
	primary_expression MINUS_MINUS
	;

object_creation_expression:
	NEW type '(' argument_listopt ')'
	;

array_creation_expression:
	NEW non_array_type '[' expression_list ']' rank_specifiersopt array_initializeropt
	|NEW array_type array_initializer
	;

delegate_creation_expression:
	NEW delegate_type '(' expression ')'
	;

typeof_expression:
	TYPEOF '(' type ')'
	|TYPEOF '(' unbound_type_name ')'
	|TYPEOF '(' VOID ')'
	;

unbound_type_name:
	IDENTIFIER generic_dimension_specifieropt
	|IDENTIFIER SEMI_SEMI IDENTIFIER generic_dimension_specifieropt
	|unbound_type_name '.' IDENTIFIER generic_dimension_specifieropt
	;

generic_dimension_specifier:
	'<' commasopt '>'
	;

commas:
	','
	|commas ','
	;

checked_expression:
	CHECKED '(' expression ')'
	;

unchecked_expression:
	UNCHECKED '(' expression ')'
	;

default_value_expression:
	DEFAULT '(' type ')'
	;

anonymous_method_expression:
	DELEGATE anonymous_method_signatureopt block
	;

anonymous_method_signature:
	'(' anonymous_method_parameter_listopt ')'
	;

anonymous_method_parameter_list:
	anonymous_method_parameter
	|anonymous_method_parameter_list ',' anonymous_method_parameter
	;

anonymous_method_parameter:
	parameter_modifieropt type IDENTIFIER
	;

unary_expression:
	primary_expression
	|'+' unary_expression
	|'-' unary_expression
	|'!' unary_expression
	|'~' unary_expression
	|pre_increment_expression
	|pre_decrement_expression
	|cast_expression
	;

pre_increment_expression:
	PLUS_PLUS unary_expression
	;

pre_decrement_expression:
	MINUS_MINUS unary_expression
	;

cast_expression:
	'(' type ')' unary_expression
	;

multiplicative_expression:
	unary_expression
	|multiplicative_expression '*' unary_expression
	|multiplicative_expression '/' unary_expression
	|multiplicative_expression '%' unary_expression
	;

additive_expression:
	multiplicative_expression
	|additive_expression '+' multiplicative_expression
	|additive_expression '-' multiplicative_expression
	;

shift_expression:
	additive_expression
	|shift_expression LT_LT additive_expression
	|shift_expression RIGHT_SHIFT additive_expression
	;

relational_expression:
	shift_expression
	|relational_expression '<' shift_expression
	|relational_expression '>' shift_expression
	|relational_expression LE shift_expression
	|relational_expression GE shift_expression
	|relational_expression IS type
	|relational_expression AS type
	;

equality_expression:
	relational_expression
	|equality_expression EQ_EQ relational_expression
	|equality_expression NE relational_expression
	;

and_expression:
	equality_expression
	|and_expression '&' equality_expression
	;

exclusive_or_expression:
	and_expression
	|exclusive_or_expression '^' and_expression
	;

inclusive_or_expression:
	exclusive_or_expression
	|inclusive_or_expression '|' exclusive_or_expression
	;

conditional_and_expression:
	inclusive_or_expression
	|conditional_and_expression AMP_AMP inclusive_or_expression
	;

conditional_or_expression:
	conditional_and_expression
	|conditional_or_expression BAR_BAR conditional_and_expression
	;

null_coalescing_expression:
	conditional_or_expression
	|conditional_or_expression QM_QM null_coalescing_expression
	;

conditional_expression:
	null_coalescing_expression
	|null_coalescing_expression '?' expression ':' expression
	;

assignment:
	unary_expression assignment_operator expression
	;

assignment_operator: 
	'=' | PLUS_EQ | MINUS_EQ | STAR_EQ | SLASH_EQ | PERCENT_EQ | AMP_EQ | BAR_EQ | CARET_EQ | LT_LT_EQ | RIGHT_SHIFT_ASSIGNMENT
	;

expression:
	conditional_expression
	|assignment
	;

constant_expression:
	expression
	;

boolean_expression:
	expression
;
// A.2.5 Statements
statement:
	labeled_statement
	|declaration_statement
	|embedded_statement
	;

embedded_statement:
	block
	|empty_statement
	|expression_statement
	|selection_statement
	|iteration_statement
	|jump_statement
	|try_statement
	|checked_statement
	|unchecked_statement
	|lock_statement
	|using_statement
	|yield_statement
	;

block:
	'{' statement_listopt '}'
	;

statement_list:
	statement
	|statement_list statement
	;

empty_statement:
	';'
	;

labeled_statement:
	IDENTIFIER ':' statement
	;

declaration_statement:
	local_variable_declaration ';'
	|local_constant_declaration ';'
	;

local_variable_declaration:
	type local_variable_declarators
	;

local_variable_declarators:
	local_variable_declarator
	|local_variable_declarators ',' local_variable_declarator
	;

local_variable_declarator:
	IDENTIFIER
	|IDENTIFIER '=' local_variable_initializer
	;

local_variable_initializer:
	expression
	|array_initializer
	;

local_constant_declaration:
	CONST type constant_declarators
	;

constant_declarators:
	constant_declarator
	|constant_declarators ',' constant_declarator
	;

constant_declarator:
	IDENTIFIER '=' constant_expression
	;

expression_statement:
	statement_expression ';'
	;

statement_expression:
	invocation_expression
	|object_creation_expression
	|assignment
	|post_increment_expression
	|post_decrement_expression
	|pre_increment_expression
	|pre_decrement_expression
	;

selection_statement:
	if_statement
	|switch_statement
	;

if_statement:
	IF '(' boolean_expression ')' embedded_statement
	|IF '(' boolean_expression ')' embedded_statement ELSE embedded_statement
	;

switch_statement:
	SWITCH '(' expression ')' switch_block
	;

switch_block:
	'{' switch_sectionsopt '}'
	;

switch_sections:
	switch_section
	|switch_sections switch_section
	;

switch_section:
	switch_labels statement_list
	;

switch_labels:
	switch_label
	|switch_labels switch_label
	;

switch_label:
	CASE constant_expression ':'
	|DEFAULT ':'
	;

iteration_statement:
	while_statement
	|do_statement
	|for_statement
	|foreach_statement
	;

while_statement:
	WHILE '(' boolean_expression ')' embedded_statement
	;

do_statement:
	DO embedded_statement WHILE '(' boolean_expression ')' ';'
	;

for_statement:
	FOR '(' for_initializeropt ';' for_conditionopt ';' for_iteratoropt ')' embedded_statement
	;

for_initializer:
	local_variable_declaration
	|statement_expression_list
	;

for_condition:
	boolean_expression
	;

for_iterator:
	statement_expression_list
	;

statement_expression_list:
	statement_expression
	|statement_expression_list ',' statement_expression
	;

foreach_statement:
	FOREACH '(' type IDENTIFIER IN expression ')' embedded_statement
	;

jump_statement:
	break_statement
	|continue_statement
	|goto_statement
	|return_statement
	|throw_statement
	;

break_statement:
	BREAK ';'
	;

continue_statement:
	CONTINUE ';'
	;

goto_statement:
	GOTO IDENTIFIER ';'
	|GOTO CASE constant_expression ';'
	|GOTO DEFAULT ';'
	;

return_statement:
	RETURN expressionopt ';'
	;

throw_statement:
	THROW expressionopt ';'
	;

try_statement:
	TRY block catch_clauses
	|TRY block catch_clausesopt finally_clause
	;

catch_clauses:
	specific_catch_clauses
	|specific_catch_clausesopt general_catch_clause
	;

specific_catch_clauses:
	specific_catch_clause
	|specific_catch_clauses specific_catch_clause
	;

specific_catch_clause:
	CATCH '(' class_type identifieropt ')' block
	;

general_catch_clause:
	CATCH block
	;

finally_clause:
	FINALLY block
	;

checked_statement:
	CHECKED block
	;

unchecked_statement:
	UNCHECKED block
	;

lock_statement:
	LOCK '(' expression ')' embedded_statement
	;

using_statement:
	USING '(' resource_acquisition ')' embedded_statement
	;

resource_acquisition:
	local_variable_declaration
	|expression
	;

yield_statement:
	YIELD RETURN expression ';'
	|YIELD BREAK ';'
	;

namespace_declaration:
	NAMESPACE qualified_identifier namespace_body SemicolonOpt
	;

qualified_identifier:
	IDENTIFIER
	|qualified_identifier '.' IDENTIFIER
	;

namespace_body:
	'{' extern_alias_directivesopt using_directivesopt namespace_member_declarationsopt '}'
	;

extern_alias_directives:
	extern_alias_directive
	|extern_alias_directives extern_alias_directive
	;

extern_alias_directive:
	EXTERN ALIAS IDENTIFIER ';'
	;

using_directives:
	using_directive
	|using_directives using_directive
	;

using_directive:
	using_alias_directive
	|using_namespace_directive
	;

using_alias_directive:
	USING IDENTIFIER '=' namespace_or_type_name ';'
	;

using_namespace_directive:
	USING namespace_name ';'
	;

namespace_member_declarations:
	namespace_member_declaration
	|namespace_member_declarations namespace_member_declaration
	;

namespace_member_declaration:
	namespace_declaration
	|type_declaration
	;

type_declaration:
	class_declaration
	|struct_declaration
	|interface_declaration
	|enum_declaration
	|delegate_declaration
	;

qualified_alias_member:
	IDENTIFIER SEMI_SEMI IDENTIFIER type_argument_listopt
;
// A.2.6 Classes
class_declaration:
	attributesopt class_modifiersopt partialopt CLASS IDENTIFIER type_parameter_listopt
	|class_baseopt type_parameter_constraints_clausesopt class_body SemicolonOpt
	;

class_modifiers:
	class_modifier
	|class_modifiers class_modifier
	;

class_modifier:
	NEW
	|PUBLIC
	|PROTECTED
	|INTERNAL
	|PRIVATE
	|ABSTRACT
	|SEALED
	|STATIC
	;

class_base:
	':' class_type
	|':' interface_type_list
	|':' class_type ',' interface_type_list
	;

interface_type_list:
	interface_type
	|interface_type_list ',' interface_type
	;

class_body:
	'{' class_member_declarationsopt '}'
	;

class_member_declarations:
	class_member_declaration
	|class_member_declarations class_member_declaration
	;

class_member_declaration:
	constant_declaration
	|field_declaration
	|method_declaration
	|property_declaration
	|event_declaration
	|indexer_declaration
	|operator_declaration
	|constructor_declaration
	|finalizer_declaration
	|static_constructor_declaration
	|type_declaration
	;

constant_declaration:
	attributesopt constant_modifiersopt CONST type constant_declarators ';'
	;

constant_modifiers:
	constant_modifier
	|constant_modifiers constant_modifier
	;

constant_modifier:
	NEW
	|PUBLIC
	|PROTECTED
	|INTERNAL
	|PRIVATE
	;

constant_declarators:
	constant_declarator
	|constant_declarators ',' constant_declarator
	;

constant_declarator:
	IDENTIFIER '=' constant_expression
	;

field_declaration:
	attributesopt field_modifiersopt type variable_declarators ';'
	;

field_modifiers:
	field_modifier
	|field_modifiers field_modifier
	;

field_modifier:
	NEW
	|PUBLIC
	|PROTECTED
	|INTERNAL
	|PRIVATE
	|STATIC
	|READONLY
	|VOLATILE
	;

variable_declarators:
	variable_declarator
	|variable_declarators ',' variable_declarator
	;

variable_declarator:
	IDENTIFIER
	|IDENTIFIER '=' variable_initializer
	;

variable_initializer:
	expression
	|array_initializer
	;

method_declaration:
	method_header method_body
	;

method_header:
	attributesopt method_modifiersopt return_type member_name type_parameter_listopt
	|'(' formal_parameter_listopt ')' type_parameter_constraints_clausesopt
	;

method_modifiers:
	method_modifier
	|method_modifiers method_modifier
	;

method_modifier:
	NEW
	|PUBLIC
	|PROTECTED
	|INTERNAL
	|PRIVATE
	|STATIC
	|VIRTUAL
	|SEALED
	|OVERRIDE
	|ABSTRACT
	|EXTERN
	;

return_type:
	type
	|VOID
	;

member_name:
	IDENTIFIER
	|interface_type '.' IDENTIFIER
	;

method_body:
	block
	|';'
	;

formal_parameter_list:
	fixed_parameters
	|fixed_parameters ',' parameter_array
	|parameter_array
	;

fixed_parameters:
	fixed_parameter
	|fixed_parameters ',' fixed_parameter
	;

fixed_parameter:
	attributesopt parameter_modifieropt type IDENTIFIER
	;

parameter_modifier:
	REF
	|OUT
	;

parameter_array:
	attributesopt PARAMS array_type IDENTIFIER
	;

property_declaration:
	attributesopt property_modifiersopt type member_name '{' accessor_declarations '}'
	;

property_modifiers:
	property_modifier
	|property_modifiers property_modifier
	;

property_modifier:
	NEW
	|PUBLIC
	|PROTECTED
	|INTERNAL
	|PRIVATE
	|STATIC
	|VIRTUAL
	|SEALED
	|OVERRIDE
	|ABSTRACT
	|EXTERN
	;

accessor_declarations:
	get_accessor_declaration set_accessor_declarationopt
	|set_accessor_declaration get_accessor_declarationopt
	;

get_accessor_declaration:
	attributesopt accessor_modifieropt GET accessor_body
	;

set_accessor_declaration:
	attributesopt accessor_modifieropt SET accessor_body
	;

accessor_modifier:
	PROTECTED
	|INTERNAL
	|PRIVATE
	|PROTECTED INTERNAL
	|INTERNAL PROTECTED
	;

accessor_body:
	block
	|';'
	;

event_declaration:
	attributesopt event_modifiersopt EVENT type variable_declarators ';'
	|attributesopt event_modifiersopt EVENT type member_name
	|'{' event_accessor_declarations '}'
	;

event_modifiers:
	event_modifier
	|event_modifiers event_modifier
	;

event_modifier:
	NEW
	|PUBLIC
	|PROTECTED
	|INTERNAL
	|PRIVATE
	|STATIC
	|VIRTUAL
	|SEALED
	|OVERRIDE
	|ABSTRACT
	|EXTERN
	;

event_accessor_declarations:
	add_accessor_declaration remove_accessor_declaration
	|remove_accessor_declaration add_accessor_declaration
	;

add_accessor_declaration:
	attributesopt ADD block
	;

remove_accessor_declaration:
	attributesopt REMOVE block
	;

indexer_declaration:
	attributesopt indexer_modifiersopt indexer_declarator '{' accessor_declarations '}'
	;

indexer_modifiers:
	indexer_modifier
	|indexer_modifiers indexer_modifier
	;

indexer_modifier:
	NEW
	|PUBLIC
	|PROTECTED
	|INTERNAL
	|PRIVATE
	|VIRTUAL
	|SEALED
	|OVERRIDE
	|ABSTRACT
	|EXTERN
	;

indexer_declarator:
	type THIS '[' formal_parameter_list ']'
	|type interface_type '.' THIS '[' formal_parameter_list ']'
	;

operator_declaration:
	attributesopt operator_modifiers operator_declarator operator_body
	;

operator_modifiers:
	operator_modifier
	|operator_modifiers operator_modifier
	;

operator_modifier:
	PUBLIC
	|STATIC
	|EXTERN
	;

operator_declarator:
	unary_operator_declarator
	|binary_operator_declarator
	|conversion_operator_declarator
	;

unary_operator_declarator:
	type OPERATOR overloadable_unary_operator '(' type IDENTIFIER ')'
	;

overloadable_unary_operator: 
	'+' | '-' | '!' | '~' | PLUS_PLUS | MINUS_MINUS | TRUE | FALSE
	;

binary_operator_declarator:
	type OPERATOR overloadable_binary_operator '(' type IDENTIFIER ',' type IDENTIFIER ')'
	;

overloadable_binary_operator: 
	'+' | '-' | '*' | '/' | '%'
	|'&' | '|' | '^'
	|LT_LT | RIGHT_SHIFT
	|EQ_EQ | NE | '>' | '<' | GE | LE
	;

conversion_operator_declarator:
	IMPLICIT OPERATOR type '(' type IDENTIFIER ')'
	|EXPLICIT OPERATOR type '(' type IDENTIFIER ')'
	;

operator_body:
	block
	|';'
	;

constructor_declaration:
	attributesopt constructor_modifiersopt constructor_declarator constructor_body
	;

constructor_modifiers:
	constructor_modifier
	|constructor_modifiers constructor_modifier
	;

constructor_modifier:
	PUBLIC
	|PROTECTED
	|INTERNAL
	|PRIVATE
	|EXTERN
	;

constructor_declarator:
	IDENTIFIER '(' formal_parameter_listopt ')' constructor_initializeropt
	;

constructor_initializer:
	':' BASE '(' argument_listopt ')'
	|':' THIS '(' argument_listopt ')'
	;

constructor_body:
	block
	|';'
	;

static_constructor_declaration:
	attributesopt static_constructor_modifiers IDENTIFIER '(' ')' static_constructor_body
	;

static_constructor_modifiers:
	externopt STATIC
	|STATIC externopt
	;

static_constructor_body:
	block
	|';'
	;

finalizer_declaration:
	attributesopt externopt '~' IDENTIFIER '(' ')' finalizer_body
	;

finalizer_body:
	block
	|';'
;
// A.2.7 Structs
struct_declaration:
	attributesopt struct_modifiersopt partialopt STRUCT IDENTIFIER type_parameter_listopt
	|struct_interfacesopt type_parameter_constraints_clausesopt struct_body  SemicolonOpt
	;

struct_modifiers:
	struct_modifier
	|struct_modifiers struct_modifier
	;

struct_modifier:
	NEW
	|PUBLIC
	|PROTECTED
	|INTERNAL
	|PRIVATE
	;

struct_interfaces:
	':' interface_type_list
	;

struct_body:
	'{' struct_member_declarationsopt '}'
	;

struct_member_declarations:
	struct_member_declaration
	|struct_member_declarations struct_member_declaration
	;

struct_member_declaration:
	constant_declaration
	|field_declaration
	|method_declaration
	|property_declaration
	|event_declaration
	|indexer_declaration
	|operator_declaration
	|constructor_declaration
	|static_constructor_declaration
	|type_declaration
;
// A.2.8 Arrays
array_type:
	non_array_type rank_specifiers
	;

non_array_type:
	value_type
	|class_type
	|interface_type
	|delegate_type
	|type_parameter
	;

rank_specifiers:
	rank_specifier
	|rank_specifiers rank_specifier
	;

rank_specifier:
	'[' dim_separatorsopt ']'
	;

dim_separators:
	','
	|dim_separators ','
	;

array_initializer:
	'{' variable_initializer_listopt '}'
	|'{' variable_initializer_list ',' '}'
	;

variable_initializer_list:
	variable_initializer
	|variable_initializer_list ',' variable_initializer
	;

variable_initializer:
	expression
	|array_initializer
;
// A.2.9 Interfaces
interface_declaration:
	attributesopt interface_modifiersopt partialopt INTERFACE IDENTIFIER type_parameter_listopt
	|interface_baseopt type_parameter_constraints_clausesopt interface_body SemicolonOpt
	;

interface_modifiers:
	interface_modifier
	|interface_modifiers interface_modifier
	;

interface_modifier:
	NEW
	|PUBLIC
	|PROTECTED
	|INTERNAL
	|PRIVATE
	;

interface_base:
	':' interface_type_list
	;

interface_body:
	'{' interface_member_declarationsopt '}'
	;

interface_member_declarations:
	interface_member_declaration
	|interface_member_declarations interface_member_declaration
	;

interface_member_declaration:
	interface_method_declaration
	|interface_property_declaration
	|interface_event_declaration
	|interface_indexer_declaration
	;

interface_method_declaration:
	attributesopt newopt return_type IDENTIFIER type_parameter_listopt
	|'(' formal_parameter_listopt ')' type_parameter_constraints_clausesopt ';'
	;

interface_property_declaration:
	attributesopt newopt type IDENTIFIER '{' interface_accessors '}'
	;

interface_accessors:
	attributesopt GET ';'
	|attributesopt SET ';'
	|attributesopt GET ';' attributesopt SET ';'
	|attributesopt SET ';' attributesopt GET ';'
	;

interface_event_declaration:
	attributesopt newopt EVENT type IDENTIFIER ';'
	;

interface_indexer_declaration:
	attributesopt newopt type THIS '[' formal_parameter_list ']' '{' interface_accessors '}'
;
// A.2.10 Enums
enum_declaration:
	attributesopt enum_modifiersopt ENUM IDENTIFIER enum_baseopt enum_body SemicolonOpt
	;

enum_base:
	':' integral_type
	;

enum_body:
	'{' enum_member_declarationsopt '}'
	|'{' enum_member_declarations ',' '}'
	;

enum_modifiers:
	enum_modifier
	|enum_modifiers enum_modifier
	;

enum_modifier:
	NEW
	|PUBLIC
	|PROTECTED
	|INTERNAL
	|PRIVATE
	;

enum_member_declarations:
	enum_member_declaration
	|enum_member_declarations ',' enum_member_declaration
	;

enum_member_declaration:
	attributesopt IDENTIFIER
	|attributesopt IDENTIFIER '=' constant_expression
;
// A.2.11 Delegates
delegate_declaration:
	attributesopt delegate_modifiersopt DELEGATE return_type IDENTIFIER type_parameter_listopt
	|'(' formal_parameter_listopt ')' type_parameter_constraints_clausesopt ';'
	;

delegate_modifiers:
	delegate_modifier
	|delegate_modifiers delegate_modifier
	;

delegate_modifier:
	NEW
	|PUBLIC
	|PROTECTED
	|INTERNAL
	|PRIVATE
;
// A.2.12 Attributes
global_attributes:
	global_attribute_sections
	;

global_attribute_sections:
	global_attribute_section
	|global_attribute_sections global_attribute_section
	;

global_attribute_section:
	'[' global_attribute_target_specifier attribute_list ']'
	|'[' global_attribute_target_specifier attribute_list ',' ']'
	;

global_attribute_target_specifier:
	global_attribute_target ':'
	;

global_attribute_target:
	IDENTIFIER
	|keyword
	;

attributes:
	attribute_sections
	;

attribute_sections:
	attribute_section
	|attribute_sections attribute_section
	;

attribute_section:
	'[' attribute_target_specifieropt attribute_list ']'
	|'[' attribute_target_specifieropt attribute_list ',' ']'
	;

attribute_target_specifier:
	attribute_target ':'
	;

attribute_target:
	IDENTIFIER
	|keyword
	;

attribute_list:
	attribute
	|attribute_list ',' attribute
	;

attribute:
	attribute_name attribute_argumentsopt
	;

attribute_name:
	type_name
	;

attribute_arguments:
	'(' positional_argument_listopt ')'
	|'(' positional_argument_list ',' named_argument_list ')'
	|'(' named_argument_list ')'
	;

positional_argument_list:
	positional_argument
	|positional_argument_list ',' positional_argument
	;

positional_argument:
	attribute_argument_expression
	;

named_argument_list:
	named_argument
	|named_argument_list ',' named_argument
	;

named_argument:
	IDENTIFIER '=' attribute_argument_expression
	;

attribute_argument_expression:
	expression
;
// A.2.13 Generics
type_parameter_list:
	'<' type_parameters '>'
	;

type_parameters:
	attributesopt type_parameter
	|type_parameters ',' attributesopt type_parameter
	;

type_parameter:
	IDENTIFIER
	;

type_argument_list:
	'<' type_arguments '>'
	;

type_arguments:
	type_argument
	|type_arguments ',' type_argument
	;

type_argument:
	type
	;

type_parameter_constraints_clauses:
	type_parameter_constraints_clause
	|type_parameter_constraints_clauses type_parameter_constraints_clause
	;

type_parameter_constraints_clause:
	WHERE type_parameter ':' type_parameter_constraints
	;

type_parameter_constraints:
	primary_constraint
	|secondary_constraints
	|constructor_constraint
	|primary_constraint ',' secondary_constraints
	|primary_constraint ',' constructor_constraint
	|secondary_constraints ',' constructor_constraint
	|primary_constraint ',' secondary_constraints ',' constructor_constraint
	;

primary_constraint:
	class_type
	|CLASS
	|STRUCT
	;

secondary_constraints:
	interface_type
	|type_parameter
	|secondary_constraints ',' interface_type
	|secondary_constraints ',' type_parameter
	;

constructor_constraint:
	NEW '(' ')'
	;

keyword: ABSTRACT | AS | BASE | BOOL | BREAK | BYTE | CASE | CATCH | CHAR | CHECKED | CLASS | CONST | CONTINUE | DECIMAL | DEFAULT | DELEGATE | DO | DOUBLE | ELSE | ENUM | EVENT | EXPLICIT | EXTERN | FALSE | FINALLY | FIXED | FLOAT | FOR | FOREACH | GOTO | IF | IMPLICIT | IN | INT | INTERFACE | INTERNAL | IS | LOCK | LONG | NAMESPACE | NEW | NULL | OBJECT | OPERATOR | OUT | OVERRIDE | PARAMS | PRIVATE | PROTECTED | PUBLIC | READONLY | REF | RETURN | SBYTE | SEALED | SHORT | SIZEOF | STACKALLOC | STATIC | STRING | STRUCT | SWITCH | THIS | THROW | TRUE | TRY | TYPEOF | UINT | ULONG | UNCHECKED | UNSAFE | USHORT | USING | VIRTUAL | VOID | VOLATILE | WHILE | REF | OUT | NEW | YIELD | ALIAS | PARTIAL | ADD | REMOVE | EXTERN | GET | SET | WHERE;

//
// OPTIONAL declarations
//
extern_alias_directivesopt:
	|extern_alias_directives
	;

using_directivesopt:
	|using_directives
	;

global_attributesopt:
	|global_attributes
	;

namespace_member_declarationsopt:
	|namespace_member_declarations
	;

type_argument_listopt:
	|type_argument_list
	;

dim_separatorsopt:
	|dim_separators
	;

argument_listopt:
	|argument_list
	;

rank_specifiersopt:
	|rank_specifiers
	;

array_initializeropt:
	|array_initializer
	;

generic_dimension_specifieropt:
	|generic_dimension_specifier
	;

commasopt:
	|commas
	;

anonymous_method_signatureopt:
	|anonymous_method_signature
	;

anonymous_method_parameter_listopt:
	|anonymous_method_parameter_list
	;

parameter_modifieropt:
	|parameter_modifier
	;

statement_listopt:
	|statement_list
	;

switch_sectionsopt:
	|switch_sections
	;

for_initializeropt:
	|for_initializer
	;

for_conditionopt:
	|for_condition
	;

for_iteratoropt:
	|for_iterator
	;

expressionopt:
	|expression
	;

catch_clausesopt:
	|catch_clauses
	;

specific_catch_clausesopt:
	|specific_catch_clauses
	;

identifieropt:
	|IDENTIFIER
	;

attributesopt:
	|attributes
	;

class_modifiersopt:
	|class_modifiers
	;

partialopt:
	|PARTIAL
	;

type_parameter_listopt:
	|type_parameter_list
	;

class_baseopt:
	|class_base
	;

type_parameter_constraints_clausesopt:
	|type_parameter_constraints_clauses
	;

class_member_declarationsopt:
	|class_member_declarations
	;

constant_modifiersopt:
	|constant_modifiers
	;

field_modifiersopt:
	|field_modifiers
	;

method_modifiersopt:
	|method_modifiers
	;

formal_parameter_listopt:
	|formal_parameter_list
	;

property_modifiersopt:
	|property_modifiers
	;

set_accessor_declarationopt:
	|set_accessor_declaration
	;

get_accessor_declarationopt:
	|get_accessor_declaration
	;

accessor_modifieropt:
	|accessor_modifier
	;

event_modifiersopt:
	|event_modifiers
	;

indexer_modifiersopt:
	|indexer_modifiers
	;

constructor_modifiersopt:
	|constructor_modifiers
	;

constructor_initializeropt:
	|constructor_initializer
	;

externopt:
	|EXTERN
	;

struct_modifiersopt:
	|struct_modifiers
	;

struct_interfacesopt:
	|struct_interfaces
	;

struct_member_declarationsopt:
	|struct_member_declarations
	;

variable_initializer_listopt:
	|variable_initializer_list
	;

interface_modifiersopt:
	|interface_modifiers
	;

interface_baseopt:
	|interface_base
	;

interface_member_declarationsopt:
	|interface_member_declarations
	;

newopt:
	|NEW
	;

enum_modifiersopt:
	|enum_modifiers
	;

enum_baseopt:
	|enum_base
	;

enum_member_declarationsopt:
	|enum_member_declarations
	;

delegate_modifiersopt:
	|delegate_modifiers
	;

attribute_target_specifieropt:
	|attribute_target_specifier
	;

attribute_argumentsopt:
	|attribute_arguments
	;

positional_argument_listopt:
	|positional_argument_list
	;

SemicolonOpt:
  | ';'
  ;

%%
