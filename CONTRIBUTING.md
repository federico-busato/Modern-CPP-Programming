# Contributing to Modern C++ Programming

Thank you for your interest in contributing to **Modern C++ Programming**! This course is open-access and welcomes contributions from the community.

## How to Contribute

### Reporting Issues

If you find any **typos**, **conceptual errors**, **broken links**, or **sections to improve**, please open an issue using the [Issues](https://github.com/federico-busato/Modern-CPP-Programming/issues) panel. Include:

- The chapter and slide number (or topic).
- A clear description of the problem.
- A suggested fix, if you have one.

### Direct Contributions via Pull Requests (preferred)

The course slides are authored in [Typst](https://typst.app/). You can contribute directly by modifying the Typst source files and submitting a pull request.

## Project Structure

The Typst sources are located in the [`typst/`](https://github.com/federico-busato/Modern-CPP-Programming/tree/main/typst) directory of the [Modern-CPP-Programming](https://github.com/federico-busato/Modern-CPP-Programming) repository:

```
typst/
├── config.typ                  # Shared macros and theme configuration
├── 01.Introduction.typ         # Chapter 1 source
├── 02.Preparation.typ          # Chapter 2 source
├── ...                         # Other chapters
├── 01.Introduction/            # Assets (images) for Chapter 1
├── 02.Preparation/             # Assets (images) for Chapter 2
├── ...
└── common/                     # Shared assets
```

Each chapter consists of:

- A **`.typ` file** (e.g., `01.Introduction.typ`) containing the slide content.
- A **directory** with the same base name (e.g., `01.Introduction/`) containing images and other assets used by that chapter.

## Setting Up the Environment

### Install Typst

Install Typst by following the [official instructions](https://github.com/typst/typst#installation). You can install it via:

- **CLI**: `cargo install typst-cli` (requires Rust), or download a prebuilt binary from [releases](https://github.com/typst/typst/releases).
- **Web app**: [typst.app](https://typst.app/) for quick editing (no local setup needed).

### Required Fonts

The following fonts must be installed on your system for local compilation:

- [Latin Modern Sans](https://www.fontsquirrel.com/fonts/Latin-Modern-Sans)
- [Latin Modern Mono](https://www.fontsquirrel.com/fonts/Latin-Modern-Mono)
- [Latin Modern Roman Caps](https://www.fontsquirrel.com/fonts/TeX-Gyre-Cursor) (part of the Latin Modern family)
- [Font Awesome 7 Free](https://fontawesome.com/download) (`Free-Regular-400.otf`)

### Typst Packages

The project uses several Typst packages which are automatically resolved on compilation. The presentation framework used for draw the slides is [`touying`](https://typst.app/universe/package/touying).

### Editor Setup (VS Code / Cursor)

The recommended way to work with Typst sources is through [VS Code](https://code.visualstudio.com/) or [Cursor](https://www.cursor.com/) with the [Tinymist](https://myriad-dreamin.github.io/tinymist/frontend/vscode.html) extension:

1. Install Typst (see [Install Typst](#install-typst) above) — Tinymist requires a local Typst installation.
2. Install the **Tinymist Typst** extension from the [Visual Studio Marketplace](https://marketplace.visualstudio.com/items?itemName=myriad-dreamin.tinymist) (also available on [Open VSX](https://open-vsx.org/extension/myriad-dreamin/tinymist) for Cursor).
3. Open any `.typ` file to get syntax highlighting, autocompletion, error diagnostics, and live preview.

Tinymist provides:

- **Live PDF preview** directly in the editor.
- **Autocompletion** for Typst syntax, symbols, and packages.
- **Error diagnostics** and linting as you type.
- **Outline view** for navigating the document structure.
- **Content view** with slide thumbnails (useful for this project).

See the [Tinymist documentation](https://myriad-dreamin.github.io/tinymist/) for full configuration options.

### Compiling from the Command Line

To compile a chapter to PDF:

```bash
typst compile 01.Introduction.typ
```

To watch for changes and recompile automatically:

```bash
typst watch 01.Introduction.typ
```

## Contribution Guidelines

### Content Changes

- **Fix typos and grammar**: straightforward corrections are always welcome.
- **Improve explanations**: if a concept could be explained more clearly, feel free to rephrase.
- **Update for new standards**: contributions that cover new C++ standard features (C++23, C++26) are appreciated.
- **Add examples**: minimal, focused code examples that illustrate a specific feature or pitfall.
- **Include references**: when adding or improving content, cite authoritative sources (e.g., the C++ standard, cppreference.com, official papers, well-known books) to strengthen the argument, improve reliability, and give proper attribution.

### Style Conventions

- Keep slides **concise and non-verbose** - use short, structured descriptions paired with code.
- Code examples should be **minimal** - demonstrate one feature or issue without digressing.
- Place images in the corresponding chapter directory (e.g., images for Chapter 3 go in `03.Basic_Concepts_I/`).
- Use consistent naming: `snake_style` for all file names, except for `.typ` files. Descriptive names for images.

### Pull Request Process

1. **Fork** the [Modern-CPP-Programming](https://github.com/federico-busato/Modern-CPP-Programming) repository.
2. **Create a branch** with a descriptive name (e.g., `fix/ch03-typo-integral-types` or `add/ch11-cpp26-feature`).
3. **Make your changes** to the Typst source files.
4. **Verify** that the modified chapter compiles without errors.
5. **Submit a pull request** with a clear description of what you changed and why.

### What We Look For in PRs

- Changes compile cleanly with `typst compile`.
- Slide content remains concise and follows the existing style.
- Code examples are correct and compile with a modern C++ compiler.
- New images are placed in the correct chapter directory.

## AI / LLM Policy

**AI-generated content is not allowed.** All contributed text, code examples, explanations, and images must be authored by the contributor. This applies to content produced by ChatGPT, Copilot, Claude, or any other generative AI tool.

AI tools **may** be used for:

- Reviewing and proofreading (spelling, grammar, typos).
- Evaluating code examples. Compilation must be verified with a C++ compiler. The expected behavior must be verified by executing the code. We suggest using [Compiler Explorer](https://cpp.godbolt.org/) for these purposes.
- Suggesting improvements that the contributor then rewrites in their own words.

Contributors must **understand and be able to explain** every change they submit. Pull requests that appear to be bulk AI-generated content will be rejected.

## License

By contributing, you agree that your contributions will be licensed under the same terms as the project:

- **Course content** (slides, text, images): [CC BY 4.0](LICENSE-CC-BY-SA.md)
- **Code examples**: [MIT License](LICENSE-MIT.md)
