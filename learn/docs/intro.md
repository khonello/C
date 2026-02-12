# C Intro

A collection of standalone C programs organized by topic.
Each file is self-contained and can be compiled individually.

```
gcc -Wall -Wextra -std=c11 -o program <file.c>
```

Or use the Makefile:

```
make SRC=src/01-basics/hello_world.c
```

## Topics

### 01-basics
Core language fundamentals: types, variables, control flow, and operators.

| File | Covers |
|------|--------|
| `hello_world.c` | Minimal program with `main` |
| `comprehensive_tutorial.c` | Variables, arrays, structs, unions, memory, file I/O |
| `comment_patterns.c` | Multi-line comment documentation style |
| `while_loop.c` | Loop with variable declaration |
| `data_type_sizes.c` | `sizeof` for char, short, int, long, float |
| `type_modifiers.c` | `long`, `short`, `signed`, `unsigned` |
| `type_qualifiers.c` | `const`, `volatile`, `restrict`, `inline` |
| `static_variables.c` | Persistence across function calls |
| `operators.c` | Postfix and unary operator reference |

### 02-pointers
Pointer arithmetic, dereferencing, and function pointers.

| File | Covers |
|------|--------|
| `pointer_arithmetic.c` | Summing array elements via pointer iteration |
| `swap_by_reference.c` | Swapping values through pointer parameters |
| `array_sum.c` | Array sum using pointer arithmetic in a while loop |
| `const_pointers.c` | `const` pointer initialization patterns |
| `array_subscript_commutativity.c` | `a[i] == i[a]` and pointer aliasing |
| `array_length.c` | Calculating array length with pointer math |
| `function_pointers.c` | Signal handling and pointer-to-function declarations |

### 03-arrays
Multi-dimensional arrays and dynamic allocation.

| File | Covers |
|------|--------|
| `2d_traversal.c` | Nested loop traversal with pointer arithmetic |
| `2d_pointer_alloc.c` | Multi-dimensional pointer allocation |
| `2d_dynamic_malloc.c` | `malloc` for rows and columns |
| `2d_dereference.c` | Element access via pointer dereference notation |
| `2d_trigraphs.c` | Pointer notation and trigraph/digraph escapes |

### 04-structs
Structs, unions, and data structure patterns.

| File | Covers |
|------|--------|
| `struct_function_pointers.c` | Storing and calling functions via struct members |
| `finite_state_machine.c` | Air conditioner FSM with function pointers and bit fields |
| `binary_tree.c` | Tree node structure with pointer-based children |
| `linked_list.c` | Self-referential struct with NULL initialization |
| `object_pattern.c` | Object creation with malloc, function pointers, cleanup |

### 05-preprocessor
Macros, conditional compilation, and X-macros.

| File | Covers |
|------|--------|
| `platform_detection.c` | `#ifdef` for Windows/Unix detection |
| `line_directive.c` | `#line` to override reported file/line |
| `variadic_macros.c` | `__VA_ARGS__` and digraph syntax |
| `debug_macro.c` | DEBUG macro with `_Pragma` |
| `va_opt.c` | `__VA_OPT__` for optional comma handling |
| `digraph_syntax.c` | `%:`, `<%`, `%>` alternative tokens |
| `xmacro_stringify.c` | X-macro with `#name` stringify operator |
| `xmacro_struct_fields.c` | X-macro for generating struct fields |
| `xmacro_enums.c` | X-macro with enums and structs |
| `xmacro_external_def.c` | X-macro with external `.def` file |

### 06-gcc-attributes
GCC-specific `__attribute__` extensions.

| File | Covers |
|------|--------|
| `aligned_packed.c` | `aligned`, `packed` for memory layout control |
| `constructor_destructor.c` | Functions that run before/after `main` |
| `weak_alias.c` | Weak function aliasing and redirection |
| `weakref.c` | `weakref` and `alias` to alias `printf` |
| `goto_error_cold.c` | `goto` error handling with `cold` attribute |
| `pragma_warning.c` | `_Pragma` to disable warnings |
| `inline_static.c` | `inline` restrictions and static file scope |
| `always_inline.c` | `always_inline` attribute usage |

### 07-functions
Function patterns and algorithms.

| File | Covers |
|------|--------|
| `variadic_stdarg.c` | `stdarg.h` variadic sum function |
| `variadic_debug.c` | Variadic function with DEBUG printing macro |
| `static_recursive.c` | Static variable in recursion; retry logic |
| `binary_search.c` | Binary search with pointer arithmetic |

### 08-memory
Allocation strategies and lifetime management.

| File | Covers |
|------|--------|
| `stack_alloca.c` | `alloca` (Unix) vs `_malloca` (Windows) |
| `atexit_cleanup.c` | `atexit` for registering cleanup handlers |

### 09-io
File and stream I/O operations.

| File | Covers |
|------|--------|
| `feof_clearerr.c` | `feof()`, `clearerr()`, character-by-character input |
| `setvbuf_buffering.c` | `setvbuf` with `_IOLBF` line-buffered mode |
| `fgetpos_fsetpos.c` | `fgetpos`/`fsetpos` for file position |
| `fgets.c` | `fgets` for reading lines with size limit |
| `getline.c` | POSIX `getline` with automatic allocation |
| `sscanf_parsing.c` | `sscanf` for parsing strings |
| `tmpnam.c` | `tmpnam` for temporary file names |
| `mkdtemp_mkstemp.c` | Secure temp directory and file creation |

### 10-strings
String and character handling.

| File | Covers |
|------|--------|
| `wide_characters.c` | `wchar_t` with Unicode literals |

### 11-bitwise
Bit manipulation operations.

| File | Covers |
|------|--------|
| `shift_rotate.c` | Right/left shift and bit rotation |

### 12-system
OS-level operations.

| File | Covers |
|------|--------|
| `realpath.c` | Absolute path resolution with `realpath()` |
| `fork_exec.c` | Process forking with `fork()` and `execvp()` |

### 13-standard-headers
Exploring C standard library headers.

| File | Covers |
|------|--------|
| `locale.c` | `<locale.h>` stub |
| `setjmp.c` | `setjmp`/`longjmp` non-local jumps |
| `signal.c` | `signal()` and `raise()` with `SIGTERM` |
| `stdint.c` | `uint8_t`, `uint16_t`, `UINT_FAST8_MAX` |
| `time.c` | `<time.h>` stub |

## Headers (include/)

| File | Purpose |
|------|---------|
| `grandparent.h` | Include guard example with `struct child` |
| `parent.h` | Includes `grandparent.h` for include chain demo |
| `test.h` | `calc()` function prototype |
| `hash.h` | Hash union for name/index mapping |
| `info.h` | Bit field struct for personal info |
| `payroll.h` | Payroll record with nested date structs |
| `sports.h` | Sports and product enums |

## Configs (configs/)

| File | Purpose |
|------|---------|
| `test.ini` | INI file with server/client sections |
| `xmacro.def` | X-macro function name definitions |
