%{
#include <stdio.h>
%}

DIGIT [0-9]
ID [a-zA-Z_][a-zA-Z0-9_]*

%%
{DIGIT}+        { printf("NUMBER: %s\n", yytext); }
{ID}            { printf("IDENTIFIER: %s\n", yytext); }
"+"|"-"|"*"|"/" { printf("OPERATOR: %s\n", yytext); }
"="             { printf("ASSIGNMENT: %s\n", yytext); }
\n              { /* Ignore new lines */ }
.               { printf("OTHER: %s\n", yytext); }
%%

int main() {
    yylex();
    return 0;
}
