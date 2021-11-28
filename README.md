# Modern C++ Programming #
<img src="other/cpp_logo.png" style="zoom:8%;" />

## C++11 / C++14 / C++17 / (C++20) ##

This *open-access* course is directed at those who are already familiar with C and object-oriented programming towards a proficiency level of C++ programming. The course covers the basics of C++ programming and moves on to advanced C++ semantics and concepts.

**Key features**:

- *Free and frequently updated*
- Include the *last language standard* concepts and features
- *Practical teaching*: small structured descriptions associated to code
- *Minimal code examples* for showing just a specific feature or issue without digressing
- *Complementary language aspects*: tools, coding conventions, project organization, and code optimization
- *Experience-based*: many aspects, examples, and problems come from real-world cases faced during my work as software engineer

If you enjoy the course or you find it useful, please add a **Star**

 [![stars - Modern-CPP-Programming](https://img.shields.io/github/stars/federico-busato/Modern-CPP-Programming?style=social)](https://github.com/federico-busato/Modern-CPP-Programming)

## CHAPTERS ##

|        | TITLE                                                        | MAIN FOCUS                                                   |
| ------ | ------------------------------------------------------------ | ------------------------------------------------------------ |
| **1**  | **[Introduction](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/01.Introduction.pdf)** | History of C/C++, Areas of Applications, Course introduction |
| **2**  | **[Basic Concepts I - Fundamental Types](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/02.Basic_Concepts_I.pdf)** | Integral data types, floating-point, operators, and conversion |
| **3**  | **[Basic Concepts II - Entities and Control Flow](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/03.Basic_Concepts_II.pdf)** | Enumerators, structures, control flow statements             |
| **4**  | **[Basic Concepts III - Memory Management](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/04.Basic_Concepts_III.pdf)** | Heap, Stack, pointers, references, const property, conversion operators |
| **5**  | **[Basic Concepts IV - Functions and Preprocessing](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/05.Basic_Concepts_IV.pdf)** | Functions, lambda expressions, preprocessing directives      |
| **6**  | **[C++ Object Oriented Programming I](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/06.Object_Oriented_I.pdf)** | Class hierarchy, constructor, destructor, class keywords     |
| **7**  | **[C++ Object Oriented Programming II](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/07.Object_Oriented_II.pdf)** | Polymorphism, operators overloading                          |
| **8**  | **[C++ Templates and Meta-programming I](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/08.Templates_I.pdf)** | Function template, type traits                               |
| **9**  | **[C++ Templates and Meta-programming II](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/9.Templates_II.pdf)** | Class template, SFINAE                                       |
| **10** | **[Translation Units](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/10.Translation_Units.pdf)** | Dealing with multiple translation units and files, namespace |
| **11** | **[Code Conventions](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/11.Code_Convention.pdf)** | Project organization and main code conventions               |
| **12** | **[Ecosystem](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/12.Ecosystem.pdf)** | Debugging, testing, building, documenting tools              |
| **13** | **[Utilities](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/13.Utilities.pdf)** | Main `std` libraries                                         |
| **14** | **[Containers, Iterators, and Algorithms](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/14.Iterators_Containers_Alg.pdf)** | Containers, iterators, algorithms                            |
| **15** | **[Advanced Topics](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/15.Advanced_Topics.pdf)** | Move semantics, error handling, C++ idioms                   |
| **16** | **[Optimization I](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/16.Optimization_I.pdf)** | Code optimizations, e.g. arithmetic, memory, etc.            |
| **17** | **[Optimization II](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/17.Optimization_II.pdf)** | Compiler optimizations, profiling and benchmarking tools     |

## TOPICS

**[1. Introduction](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/01.Introduction.pdf)**

* **A Little History of C/C++ Programming Languages**
* **Areas of Application and Popularity**
* **C++ Philosophy**
* **Books and References**
* **The Course**

**[2. Basic Concepts I - Fundamental Types](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/02.Basic_Concepts_I.pdf)**

* **Preparation**: What compiler should I use?, What editor/IDE compiler should I use?, How to compile?
* **Hello World**: I/O Stream
* **C++ Fundamental Types Overview**: Arithmetic types, Non-standard arithmetic types, `void` type, Pointer type and `nullptr`
* **Conversion Rules**
* **C++ Operators**: Operators precedence, Prefix/Postfix increment/decrement, Assignment, Compound , and comma operators, Spaceship operator `<=>` 
* **Integral Data Types**: Fixed width integers, When use signed/unsigned integer? Promotion, Truncation, Undefined behavior
* **Floating-point Types and Arithmetic**: Normal/Denormal values, Not a Number (`NaN`), Infinity, Properties
* **Floating-point Issues**: Floating-point comparison, Catastrophic cancellation

**[3. Basic Concepts II - Entities and Control Flow](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/03.Basic_Concepts_II.pdf)**

* **Enumerators**
* **`struct`, `union`, and Bitfield**
* **`using`, `decltype`, and `auto`**
* **Control Flow**: `if` Statement, `for` Loop, `switch`, `goto`

**[4. Basic Concepts III - Memory Management](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/04.Basic_Concepts_III.pdf)**

* **Heap and Stack**: Stack Memory, `new`, `delete`, Memory Leak
* **Initialization**: Variable initialization, Uniform initialization, Structure initialization, Fixed-size array initialization, Dynamic array initialization
* **Pointers and References**: Pointer, Address-of operator `&`, Reference
* **`const`, `constexpr`, `consteval`, `constinit`**
* **Explicit Type Conversion**: `static_cast`, `const_cast`, `reinterpret_cast`, Type punning
* `sizeof` Operator

**[5. Basic Concepts IV - Functions and Preprocessing](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/05.Basic_Concepts_IV.pdf)**

* **Declaration and Definition**
* **Functions**: Pass by-value, Pass by-pointer, Pass by-reference, Overloading, Default parameters, Attributes
* **Function Objects and Lambda Expressions**: Function pointer, Function object (or Functor), Capture list, Other features, Capture list and classes
* **Preprocessing**: Preprocessors, Common errors, Useful macro, Stringizing operator (`#`), `#pragma` and `#error`, Token-Pasting Operator (`##`), Variadic Macro

**[6. C++ Object Oriented Programming I](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/06.Object_Oriented_I.pdf)**

* **C++ Classes**
* **Class Hierarchy**:  Access specifiers, Inheritance access specifiers
* **Class Constructor**: Default constructor, Initializer list, Uniform initialization, Delegate constructor, `explicit` keyword
* **Copy Constructor**
* **Class Destructor**
* **Defaulted Members** (`= default`)
* **Class Keywords**: `this`, `static`, `const`, `mutable`, `using`, `friend`, `delete`

**[7. C++ Object Oriented Programming II](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/07.Object_Oriented_II.pdf)**

* **Polymorphism**: `virtual` methods, Virtual table, `override` keyword, `final` keyword, Common errors, Pure virtual method, Abstract class and interface
* **Inheritance Casting and Run-time Type Identification**
* **Operator Overloading**: Overview, Subscript operator `[]`, Comparison operator `<`, Spaceship operator `<=>` Function call operator `()`, Conversion operator `T()`, Increment and decrement operators `++`/`--`, Assignment operator `=`, Stream operator `<<`, Operator Notes
* **C++ Special Objects**: Aggregate, Trivial class, Standard-layout class, Plain old data (POD), Hierarchy

**[8. C++ Templates and Meta-programming I](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/08.Templates_I.pdf)**

* **Function Template**: Overview, Template parameters, Template parameter - default value, Specialization, Overloading, `auto` deduction
* **Compile-Time Utilities**: `static_assert`, `decltype` Keyword, `using` Keyword
* **Type Traits**: Overview, Type traits library, Type manipulation, Type relation and transformation
* **Template Parameters**: Overview, Special cases

**[9. C++ Templates and Meta-programming II](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/9.Templates_II.pdf)**

* **Class Template**: Class specialization, Class + Function - specialization, `friend` keyword, Dependent names, Template variable
* **Template Meta-Programming**
* **SFINAE: Substitution Failure Is Not An Error**: Function SFINAE, Class SFINAE, Class + Function SFINAE
* **Variadic Template**: Folding Expression, Variadic Class Template

**[10. Translation Units](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/10.Translation_Units.pdf)**

* **Basic Concepts**: Translation unit, Local and global scope, Linkage
* **Storage Class and Duration**: Storage duration, Storage class, `static` and `extern` keywords, Internal/External linkage examples, Linkage of `const` and `constexpr`, Static Initialization Order Fiasco
* **Dealing with Multiple Translation Units**: One Definition Rule (ODR), `inline` functions/variables, Class in multiple translation units, Global variable issues
* **Function Template**
* **Class Template**
* **ORD and Undefined Behavior**
* **`#include` Issues**: Forward declaration, Include guard, Circular dependencies, Common linking errors
* **Namespace**: Namespace functions vs. `static` methods, Namespace alias, Anonymous namespace, `inline` namespace
* **How to Compile**: Compile strategies, Deal with libraries, Build static/dynamic libraries, Find dynamic library dependencies, Analyze object/executable symbols

**[11. Code Conventions](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/11.Code_Convention.pdf)**

* **C++ Project Organization**: Project directories, Project files, `src/include` directories
* **Coding Styles and Conventions**
* **`#include`**
* **Macro and Preprocessing**
* **Namespace**
* **Variables**
* **Functions**
* **Structs and Classes**
* **Control Flow**
* **Modern C++ Features**
* **Maintainability**
* **Naming and Formatting**
* **Code Documentation**

**[12. Ecosystem](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/12.Ecosystem.pdf)**

* **Debugging**: Assertion, Execution debugging (`gdb`)
* **Memory Debugging**: `valgrind`, Stack protection
* **Sanitizers**: Address sanitizer, Leak sanitizer, Memory sanitizers, Undefined behavior sanitizer
* **Debugging Summary**
* **Code Checking and Analysis**: Compiler warnings, Static analyzers
* **Code Testing**: Unit test, Code coverage, Fuzz testing
* **Code Quality**: `clang-tidy`
* **CMake**: `cmake` and `ctest`
* **Code Documentation**: `doxygen`
* **Code Statistics**: Count lines of code, Cyclomatic complexity analyzer
* **Other Tools**: Code formatting - `clang-format`, `Compiler Explorer`, Code transformation - `CppInsights`, Code autocompletion - `TabNine/Kite`, Local code search - `ripgrep`, Code search engine - `searchcode/grep.app`, Code exploration - `SourceTrail`, Code benchmarking - `Quick-Bench`, Font for Coding

**[13. Utilities](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/13.Utilities.pdf)**

* **I/O Stream**: Manipulator, `ofstream/ifstream`
* **Math Libraries**
* **Strings**: `std::string`, Conversion from/to numeric balues, `std::string view`, `std::format`
* **Random Number**: Basic Concepts, C++ `<random>`, Seed, PRNG period and quality, Distribution, Quasi-random
* **Time Measuring**: Wall-Clock time, User time, System time
* **Std Template Classes**: `std::pair`, `std::tuple`, `std::variant`, `std::optional`, `std::any`
* **Filesystem Library**: Query methods, Modify methods

**[14. Containers, Iterators, and Algorithms](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/14.Iterators_Containers_Alg.pdf)**

* **Containers and Iterators**
* **Sequence Containers**: `std::array`, `std::vector`, `std::list`, `std::deque`, `std::forward_list`
* **Associative Containers**: `std::set`, `std::map`, `std::multiset`
* **Container Adaptors**: `std::stack`, `std::queue`, `std::priority_queue`
* **View**: `std::span`
* **Implement a Custom Iterator**: Semantic, Implement a simple Iterator
* **Iterator Utility Methods**: `std::advance`, `std::next`, `std::prev`, `std::distance`, Range access methods, Iterator traits
* **Algorithms Library**: `std::find_if`, `std::sort`, `std::accumulate`, `std::generate`, `std::remove_if`

**[15. Advanced Topics](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/15.Advanced_Topics.pdf)**

* **Move Semantic**: `lvalues` and `rvalues` references, Move semantic, Compiler implicitly declared, `std::move`
* **Universal Reference and Perfect Forwarding**: Universal reference, Reference collapsing rules, Perfect forwarding
* **Value Categories**
* **`&`, `&&` Overloading - Ref-qualifiers**
* **Copy Elision and RVO**
* **Type Deduction**: Pass by-reference, Pass by-pointer, Pass by-value
* **`const` Correctness**
* **Undefined Behavior**
* **Error Handling**: C++ Exceptions, Defining custom exceptions, `noexcept` keyword, Memory allocation issues, Alternative error handling approaches
* **C++ Idioms**: Rule of zero/three/five, Singleton, PIMPL, CRTP, Template Virtual Functions
* **Smart pointers**: `std::unique_ptr`, `std::shared_ptr`, `std::weak_ptr`
* **Concurrency**: Thread Methods, Mutex, Atomic, Task-based parallelism

**[16. Optimization I](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/16.Optimization_I.pdf)**

* **General Concepts**: Asymptotic complexity, Optimization cycle, Ahmdal's Law, Throughput, Bandwidth, Latency, Performance Bounds, Arithmetic Intensity
* **Basic Architecture Concepts**: Instruction-level parallelism, Little’s Law, Data-level parallelism, thread-level parallelism, RISC, CISC Instruction sets
* **I/O Operations**: `printf`, Memory Mapped I/O, Speed up raw data loading
* **Locality and Memory Access Patterns**: Memory hierarchy, Memory locality, Internal structure alignment, External structure alignment
* **Arithmetic**: Data types, Operations, Conversion, Floating-point, Compiler intrinsic functions, Value in a Range, Lookup Table
* **Control Flow**: Loop hoisting, Loop unrolling, Branch hints, Recursion
* **Functions**: Function call cost, Argument passing, Function optimizations, Function inlining, Pointers Aliasing
* **C++ Objects**: C++ Objects Optimizations

**[17. Optimization II](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/17.Optimization_II.pdf)**

* **Compiler Optimizations**: About the compiler, Architecture flags, Optimization flags, Help the Compiler to produce better code, Profile guided optimization (PGO)
* **Compiler Transformation Techniques**
* **Libraries and Data Structures**: External libraries, Std library
* **Profiling**: `gprof`, `uftrace`, `callgrind`, `cachegrind`, `perf` Linux profiler
* **Performance Benchmarking**: What to test?, Workload/Dataset quality, Cache behavior, Stable CPU performance, Program memory layout
* **Parallel Computing**: Concurrency vs. Parallelism, Performance scaling, Gustafson’s Law, Parallel programming languages

### Roadmap

1. Complete C++20 topics
2. Software Design Chapter
3. Build Aspects Chapter (e.g. reducing build time)

### Essential Tool ###

Online compiler and execution: [CompilerExplorer](https://godbolt.org/)

* for code execution: [Add new..] -> [execution only]

### Reporting bugs and contributing ###

If you find any typos, conceptual errors, or sections to improve, please report them by writing directly to me or by using the `issue` panel

## Author ##

`Federico Busato`

- Nvidia Corporation [fbusato@nvidia.com](mailto:fbusato@nvidia.com)
- Dept. of Computer Science, University of Verona, Italy [federico.busato@univr.it](mailto:federico.busato@univr.it)
- Twitter: [twitter.com/fedebusato](https://twitter.com/fedebusato)
- Linkedin: [www.linkedin.com/in/federico-busato/](https://www.linkedin.com/in/federico-busato/)
