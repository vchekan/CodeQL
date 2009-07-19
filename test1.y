%token T1 T2

%%

a1:
    t1_opt t2_opt
    ;

t1_opt
    :
    | T1
    ;
    
t2_opt
    :
    | T2
    ;

%%