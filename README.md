# CSE-324 Compiler Design Lab

This repository contains solutions to various lab assignments for the Compiler Design course (CSE-324). Each assignment is implemented in C++ and includes programs for lexical analysis, syntax analysis, and other compiler design tasks.

## Lab Assignments

1. **Identifier Validation**: Program to identify whether the given lexeme is a valid identifier.
2. **Floating Point Validation**: Program to identify whether the given lexeme is a valid floating point.
3. **Exponential Number Validation**: Program to identify whether the given lexeme is a valid exponential number.
4. **Token Identification**: Program to identify all tokens from a given block of code.
5. **String Pattern Matching**: Program to identify strings under `abb`, `a*b+`, and `a.` patterns.
6. **Flex Token Identification**: Flex program to identify all tokens.
7. **LL(1) Parsing**: Program to construct LL(1) parsing.
8. **Recursive Descent Parsing**: Program to construct Recursive Descent Parsing.
9. **Yacc Calculator**: Yacc program to implement a calculator and recognize a valid arithmetic expression.

## Instructions

### Running the C++ Programs

Each C++ program is in a separate file. To compile and run these programs, follow these steps:

1. Open a terminal.
2. Navigate to the directory containing the desired C++ file.
3. Compile the program using `g++`:
   ```sh
   g++ -o program_name program_file.cpp
4. Run the compiled program:
   ```sh
   ./program_name

### Running the Flex & Yacc Programs

For programs using Flex and Yacc, follow these instructions:

1. **Flex Program**: To compile and run a Flex program:
   ```sh
   flex -o lex.yy.c file_name.l
   gcc -o executable_name lex.yy.c -lfl
   ./executable_name
   ```

2. **Yacc Program**: To compile and run a Yacc program along with Flex:
   ```sh
   yacc -d file_name.y
   flex file_name.l
   gcc -o executable_name y.tab.c lex.yy.c -ly -lfl
   ./executable_name
   ```

Replace `file_name` with the name of your Flex or Yacc file, and `executable_name` with the desired name for the compiled program.

This setup should allow you to compile and run Flex and Yacc programs directly from your terminal, provided you have the necessary tools installed.


