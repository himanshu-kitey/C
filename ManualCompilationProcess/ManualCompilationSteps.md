GCC (GNU Compiler Collection
----------------------------
- GCC (GNU Compiler Collection) is a compiler driver that manages the entire compilation process automatically.
- It coordinates multiple tools to convert source code into an executable program.
- The tools used internally are:
    - Preprocessor (cpp)
    - Compiler (cc1)
    - Assembler (as)
    - Linker (ld)

- GCC Compilation Flow:
-----------------------
    program.c
        |
        | Preprocessing (cpp)
        v
    program.i
        |
        | Compilation (cc1)
        v
    program.s
        |
        | Assembly (as)
        v
    program.o
        |
        | Linking (ld)
        v
    a.out (Executable)

---------------------------------------------
1. Preprocessing
- Processes all preprocessor directives.
2. Compilation
- The compiler (cc1) converts preprocessed code into assembly language.
3. Assembly
- The assembler (as) converts assembly code into object code.
4. Linking
- The linker (ld) combines:
    - object files
    - libraries
- to produce the final executable file.
------------------------------------
- To Compiler .c File Step by Step:
------------------------------------
- Step 1: Create New .c File
- Step 2: Preprocess it using below command     [Preprocessor]
            - cpp test.c -o test.i
- Step 3: Compile it using below commands:      [Compiler]
            - /usr/libexec/gcc/x86_64-linux-gnu/13/cc1 ManualCompilation.i -o ManualCompilation.s
- Step 4: Give this .S file to 'as' Assembler tool:     [Assembler]
            - as ManualCompilation.s -o ManualCompilation.o
- Step 5: Give this .o file to Linker:                  [Linker]
            - ld ManualCompilation.o -o ManualCompilation -lc -dynamic-linker /lib64/ld-linux-x86-64.so.2 /usr/lib/x86_64-linux-gnu/crti.o /usr/lib/x86_64-linux-gnu/crt1.o -lc /usr/lib/x86_64-linux-gnu/crtn.o
---------------------------------------------



