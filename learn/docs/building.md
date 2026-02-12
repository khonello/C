# Building & Running

## Prerequisites

- GCC (or any C11-compatible compiler)
- Python 3.10+ and development headers (for cpython examples)
- Linux/macOS recommended (some examples use POSIX APIs)

## Compiling a single file

```
gcc -Wall -Wextra -std=c11 -o program intro/src/01-basics/hello_world.c
./program
```

## Using the intro Makefile

```
cd intro
make SRC=src/01-basics/hello_world.c
./program
make clean
```

Pass any source file path to `SRC`:

```
make SRC=src/04-structs/binary_tree.c
make SRC=src/09-io/fgets.c
```

## Including custom headers

For files that use headers from `include/`:

```
gcc -Wall -Wextra -std=c11 -Iintro/include -o program <file.c>
```

## CPython embedding

Requires Python development headers and the shared library:

```
cd cpython/01-embedding
make
./program
```

## CPython extension

```
cd cpython/02-extending
bash setup.sh
python3 -c "import module; print(module)"
```

## Platform notes

| File | Platform |
|------|----------|
| `fork_exec.c` | Linux/macOS only (`fork`, `execvp`) |
| `realpath.c` | POSIX (`realpath`) |
| `getline.c` | POSIX (`getline`) |
| `stack_alloca.c` | Cross-platform (`alloca` / `_malloca`) |
| `mkdtemp_mkstemp.c` | POSIX (`mkdtemp`, `mkstemp`) |

Most other files are portable C11.
