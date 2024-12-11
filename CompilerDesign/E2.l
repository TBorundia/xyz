%{
#include <stdio.h>
#include <stdlib.h>
FILE *outFile; 
%}
%%
\/\/.*               { /* Ignore single-line comments */ }
\/\*([^*]|\*+[^*/])*\*\/ { /* Ignore multi-line comments */ }
.|\n { fprintf(outFile, "%s", yytext); }
%%
int yywrap() {
    return 1;
}
int main(int argc, char *argv[]) {
    if (argc != 3) {
        fprintf(stderr, "Usage: %s <input_file> <output_file>\n", argv[0]);
        return 1;
    }
    FILE *inFile = fopen(argv[1], "r");
    if (!inFile) {
        perror("Error opening input file");
        return 1;
    }
    outFile = fopen(argv[2], "w");
    if (!outFile) {
        perror("Error opening output file");
        fclose(inFile);
        return 1;
    }
    yyin = inFile;
    yylex();
    fclose(inFile);
    fclose(outFile);
    printf("Comments removed and output written to %s\n", argv[2]);
    return 0;
}
