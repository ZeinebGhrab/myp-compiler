# MyP Compiler

A compiler for **MyP**, a Pascal-inspired imperative programming language, developed as part of the Compilation Project at **ENSEIRB-MATMECA – Bordeaux INP (2026–2027)**.

The compiler translates MyP source code into **P-Code**, which is then compiled using GCC to produce an executable.

## Implemented Features

The current implementation covers the following phases:

### Phase I – Arithmetic Expressions
- Integer arithmetic expressions.
- Floating-point arithmetic expressions.
- Support for arithmetic operators and constants.
- Generation of P-Code instructions for expression evaluation.

### Phase II – Type Management and Conversions
- Type checking for integer and floating-point expressions.
- Support for mixed integer and floating-point operations.
- Automatic conversion from integer to floating-point when required.
- Detection of incompatible type assignments.

### Phase III – Global Variables
- Declaration of typed global variables.
- Storage of global variables on the P-Code stack.
- Symbol table management, including variable types and stack offsets.
- Access to global variables in expressions.
- Type checking during variable assignments.
- Detection of invalid assignments, such as assigning a floating-point value to an integer variable.

## Technologies

- **C** – Compiler implementation
- **Flex** – Lexical analysis
- **Bison** – Syntax analysis
- **P-Code** – Target intermediate code
- **GCC** – Compilation of generated P-Code

## Project Structure

```text
myp-compiler/
├── src/          # Compiler source files
├── test/         # MyP test programs
├── Makefile      # Build configuration
└── README.md
```

## Build and Run

Build the compiler:

```bash
make
```

Compile a MyP source file:

```bash
./myp test/test1.myp
```

The compiler generates the corresponding P-Code file and a native executable.

Run the generated executable:

```bash
./test1
```

## Academic Context

**Institution:** ENSEIRB-MATMECA – Bordeaux INP  
**Academic Year:** 2026–2027  
**Project:** Compilation – MyP to P-Code Compiler

---

*This project is progressively developed through the implementation of the different compiler phases.*