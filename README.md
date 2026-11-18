# CMPT 1010

C++ coursework and practice programs for CMPT 1010.

## Repository layout

- `assignments/` — numbered assignments
- `midterm-2/` — Midterm 2 practice and review programs
- `practice/` — lecture, pointer, array, and algorithm exercises

Each `.cpp` file is a standalone program with its own `main()` function.

## Compile a program

```bash
g++ -std=c++17 path/to/program.cpp -o program
./program
```

The GitHub Actions workflow also checks that every C++ source file compiles.