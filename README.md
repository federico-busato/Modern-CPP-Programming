# Modern C++ Programming #
## C++11 / C++14 / C++17 / (C++20) ##

## TOPICS ##

**[1. Introduction](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/01.Introduction.pdf)**

* **A Little History of C/C++ Programming Languages**
* **Areas of Application and Popularity**
* **C++ Philosophy**
* **Books and References**
* **The Course**

**[2. Basic Concepts I - Fundamental Types](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/02.Basic_Concepts_I.pdf)**

* **Preparation**: What compiler should I use?, What editor/IDE compiler should I use?, How to compile?
* **Hello World**: I/O Stream
* **C++ Fundamental Types Overview**: Arithmetic Types, Other Arithmetic Types, Pointer Type
* **Conversion Rules**
* **Math Operators**
* **Integral Data Types**: Fixed Width Integers, When Use Signed/Unsigned Integer?, Promotion, Truncation, Undefined Behavior
* **Floating-point Types and Arithmetic**: Normal/Denormal Values, Summary, Not a Number (`NaN`), Infinity, Properties
* **Floating-point Issues**: Floating-point Comparison, Catastrophic Cancellation

**[3. Basic Concepts II - Entities and Control Flow](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/03.Basic_Concepts_II.pdf)**

* **Enumerators**
* **`struct`, `union`, and Bitfield**
* **`using`, `decltype`, and `auto`**
* **Control Flow**: `if` Statement, `for` Loop, `switch`, `goto`

**[4. Basic Concepts III - Memory Management](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/04.Basic_Concepts_III.pdf)**

* **Heap and Stack**: Stack Memory, `new`, `delete`, Memory Leak
* **Initialization**: Uniform Initialization
* **Pointers and References**: Pointer, Address-of operator `&`, Reference
* **`const`, `constexpr`, `consteval`, `constinit`**
* **Explicit Type Conversion**: `static_cast`, `const_cast`, `reinterpret_cast`, Type Punning
* `sizeof` Operator

**[5. Basic Concepts IV - Functions and Preprocessing](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/05.Basic_Concepts_IV.pdf)**

* **Declaration and Definition**
* **Functions**: Pass by-Value, Pass by-Pointer, Pass by-Reference, Overloading, Default Parameters, Attributes
* **Function Objects and Lambda Expressions**: Function Pointer, Function Object (or Functor), Capture List, Other Features, Capture List and Classes
* **Preprocessing**: Preprocessors, Common Errors, Useful Macro, Stringizing Operator (`#`), `#pragma` and `#error`, Token-Pasting Operator (`##`), Variadic Macro

**[6. C++ Object Oriented Programming I](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/06.Object_Oriented_I.pdf)**

* **C++ Classes**
* **Class Hierarchy**:  Access specifiers, Inheritance Access Specifiers
* **Class Constructor**: Default Constructor, Initializer List, Uniform Initialization, Delegate Constructor, `explicit` Keyword
* **Copy Constructor**
* **Class Destructor**
* **Defaulted Members**: Defaulted Constructor
* **Class Keywords**: `this`, `static`, `const`, `mutable`, `using`, `friend`, `delete`

**[7. C++ Object Oriented Programming II](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/07.Object_Oriented_II.pdf)**

* **Polymorphism**: `virtual` Methods, Virtual Table, `override` Keyword, `final` Keyword, Common Errors, Pure Virtual Method, Abstract Class and Interface
* **Inheritance Casting and Run-time Type Identification**
* **Operator Overloading**: Overview, Subscript Operator, Comparison Operator, Function Call Operator, Conversion Operator, Increment and Decrement Operators, Assignment Operator, Stream Operator, Operator Notes
* **C++ Special Objects**: Aggregate, Trivial Class, Standard-Layout Class, Plain Old Data (POD), Hierarchy

**[8. C++ Templates and Meta-programming I](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/08.Templates_I.pdf)**

* **Function Templates**: Overview, Template Parameters, Template Parameter - Default Value, Specialization, Overloading, `auto` Deduction
* **Compile-Time Utilities**: `static_assert`, `decltype` Keyword, `using` Keyword
* **Type Traits**: Overview, Type Traits Library, Type Manipulation, Type Relation and Transformation
* **Template Parameters**: Overview, Special Cases

**[9. C++ Templates and Meta-programming II](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/9.Templates_II.pdf)**

* **Class Template**: Class Specialization, Class + Function - Specialization, `friend` Keyword, Dependent Names, Template Variable
* **Template Meta-Programming**
* **SFINAE: Substitution Failure Is Not An Error**: Function SFINAE, Class SFINAE, Class + Function SFINAE
* **Variadic Template**: Folding Expression, Variadic Class Template

**[10. Translation Units](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/10.Translation_Units.pdf)**

* **Basic Concepts**: Translation Unit, Local and Global Scopes
* **Linkage**: `static` and `extern` Keywords, Internal/External Linkage Example, Linkage of `const` and constexpr, Linkage of `inline` Functions/Variables
* **Variables Storage**: Storage Class, Storage Duration
* **Dealing with Multiple Translation Units**: One Definition Rule (ODR), Class in Multiple Translation Units, Global Constant
* **Function Template**
* **Class Template**
* **Undefined Behavior and Summary**
* **`#include` Issues**: Forward Declaration, Include Guard, Circular Dependencies, Common Linking Errors
* **Namespace**: Namespace Functions vs. `static` Methods, Namespace Alias, Anonymous Namespace, `inline` Namespace
* **How to Compile**: Compile Strategies, Compile with Libraries, Build Static/Dynamic Libraries, Find Dynamic Library Dependencies, Analyze Object/Executable Symbols

**[11. Code Conventions](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/11.Code_Convention.pdf)**

* **C++ Project Organization**: Project Directories, Project Files, `src/include` directories
* **Coding Styles and Conventions**
* **`#include`**
* **Macro and Preprocessing**
* **Namespace**
* **Variables**
* **Functions**
* **Structs and Classes**
* **Modern C++ Features**
* **Maintainability**
* **Naming and Formatting**
* **Code Documentation**

**[12. Ecosystem](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/12.Ecosystem.pdf)**

* **Debugging**: Assertion, Execution Debugging (`gdb`)
* **Memory Debugging**: `valgrind`
* **Sanitizers**: Address Sanitizer, Leak Sanitizer, Memory Sanitizers, Undefined Behavior Sanitizer
* **Debugging Summary**
* **Code Checking and Analysis**: Compiler Warnings, Static Analyzers
* **Code Testing**: Unit Test, Code Coverage, Fuzz Testing
* **Code Quality**: `clang-tidy`
* **CMake**
* **Code Documentation**: `doxygen`
* **Code Statistics**: Count Lines of Code, Cyclomatic Complexity Analyzer
* **Other Tools**: Code Formatting - `clang-format`, `Compiler Explorer`, Code Transformation - `CppInsights`, Code Autocompletion - `TabNine/Kite`, Local Code Search - `ripgrep`, Code Search Engine - `searchcode/grep.app`, Code Exploration - `SourceTrail`, Code Benchmarking - `Quick-Bench`, Font for Coding

**[13. Utilities](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/13.Utilities.pdf)**

* **I/O Stream**: Manipulator, `ofstream/ifstream`
* **Math Libraries**
* **Strings**: `std::string`, Conversion from/to Numeric Values, `std::string view`, `std::format`
* **Algorithm Library**
* **Random Number**: Basic Concepts, C++ `<random>`, Seed, PRNG Period and Quality, Distribution
  Quasi-random
* **Time Measuring**: Wall-Clock Time, User Time, System Time
* **Std Template Classes**: `std::pair`, `std::tuple`, `std::variant`, `std::optional`, `std::any`
* **Filesystem Library**: Query Methods, Modify Methods

**[14. Containers, Iterators, and Algorithms](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/14.Iterators_Containers_Alg.pdf)**

* **Containers and Iterators**
* **Sequence Containers**: `std::array`, `std::vector`, `std::list`, `std::deque`, `std::forward_list`
* **Associative Containers**: `std::set`, `std::map`
* **Container Adaptors**: `std::stack`, `std::queue`, `std::priority_queue`
* **Implement a Custom Iterator**: Semantic, Implement a Simple Iterator
* **Iterator Utility Methods**: `std::advance`, `std::next`, `std::prev`, `std::distance`, Range Access Methods, Iterator Traits
* **Algorithms Library**: `std::find_if`, `std::sort`, `std::accumulate`, `std::generate`, `std::remove_if`

**[15. Advanced Topics](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/15.Advanced_Topics.pdf)**

* **Move Semantic**: `lvalues` and `rvalues` references, Move Semantic, Compiler Implicitly Declared, `std::move`
* **Universal Reference and Perfect Forwarding**: Universal Reference, Reference Collapsing Rules, Perfect Forwarding
* **Value Categories**
* **Copy Elision and RVO**
* **Type Deduction**: Pass-by-Reference, Pass-by-Pointer, Pass-by-Value
* **`const` Correctness**
* **C++ Idioms**: Rule of Zero/Three/Five, Singleton, PIMPL, CRTP, Template Virtual Functions
* **Smart pointers**: `std::unique_ptr`, `std::shared_ptr`, `std::weak_ptr`
* **Concurrency**: Thread Methods, Mutex, Atomic, Task-based parallelism

**[16. Optimization I](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/16.Optimization_I.pdf)**

* **General Concepts**: Asymptotic Complexity, Optimization Cycle, Ahmdal Law, Performance Bounds, Arithmetic Intensity, Instruction-Level Parallelism, Little’s Law, Time-Memory Trade-off, Roofline Model
* **I/O Operations**: `printf`, Memory Mapped I/O, Speed Up Raw Data Loading
* **Locality and Memory Access Patterns**: Memory Hierarchy, Memory Locality, Internal Structure Alignment, External Structure Alignment
* **Arithmetic**: Data Types, Operations, Conversion, Floating-Point, Compiler Intrinsic Functions, Value in a Range, Lookup Table
* **Control Flow**: Loop Hoisting, Loop Unrolling, Branch Hints, Recursion
* **Functions**: Function Call Cost, Argument Passing, Function Optimizations, Inlining Constrains, Pointers Aliasing
* **C++ Objects**: C++ Objects Optimizations

**[17. Optimization II](https://github.com/federico-busato/Modern-CPP-Programming/blob/master/17.Optimization_II.pdf)**

* **Compiler Optimizations**: About the Compiler, Architecture Flags, Optimization Flags, Help the Compiler to Produce Better Code, Profile Guided Optimization (PGO)
* **Compiler Transformation Techniques**
* **Libraries and Data Structures**: External Libraries, Std Library
* **Profiling**: `gprof`, `uftrace`, `callgrind`, `cachegrind`, `perf` Linux profiler
* **Performance Benchmarking**: What to Test?, Workload/Dataset Quality, Cache Behavior, Stable CPU Performance, Program Memory Layout
* **Parallel Computing**: Concurrency vs. Parallelism, Performance Scaling, Gustafson’s Law, Parallel Programming Languages

### Essential Tool ###

Online compiler and execution: [CompilerExplorer](https://godbolt.org/)

* for code execution: [Add new..] -> [execution only]

### Reporting bugs and contributing ###

If you find any typos, conceptual errors, or sections to improve, please report them by writing directly to me or by using the `issue` panel

## Author ##

`Federico Busato`

- Nvidia Corporation ([fbusato@nvidia.com](mailto:fbusato@nvidia.com))
- Dept. of Computer Science, University of Verona (Italy) [federico.busato@univr.it](mailto:federico.busato@univr.it)
- https://twitter.com/fedebusato
- https://www.linkedin.com/in/federico-busato/

