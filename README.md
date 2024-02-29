
# C++ Compiler

This is a simple C++ compiler script written in C++. It compiles a given C++ source file and runs the resulting executable.

## Usage

Ensure you have `g++` installed on your system. If not, you can install it using:

```bash
sudo apt-get install g++
```

To compile and run a C++ file, use the following command:

```bash
./cpp_compiler.cpp <cpp_file_to_run.cpp>
```

Replace `<cpp_file_to_run.cpp>` with the path to your C++ source file.

If you're asking about compiling the C++ compiler script itself and always using the compiled executable instead of the script, you can follow these steps:

1. **Compile the C++ Compiler Script:**
   First, compile the `cpp_compiler.cpp` file to create an executable. You can do this using the `g++` compiler.

   ```bash
   g++ -o cpp_compiler cpp_compiler.cpp
   ```

   This command will generate an executable named `cpp_compiler` in the same directory.

2. **Move the Executable to a Directory in the System Path:**
   It's a good practice to move the compiled executable to a directory that is included in the system's PATH environment variable. This ensures that you can run the compiler from any directory without specifying its full path.

   For example, you can move it to `/usr/local/bin`:

   ```bash
   sudo mv cpp_compiler /usr/local/bin
   ```

   Now, you can run the compiler by simply typing `cpp_compiler` in the terminal.

3. **Usage:**
   After moving the executable to a directory in the system path, you can use it to compile and run your C++ programs as follows:

   ```bash
   cpp_compiler <cpp_file_to_run.cpp>
   ```

   Replace `<cpp_file_to_run.cpp>` with the path to your C++ source file.

4. **Optional: Rename the Executable:**
   If you prefer a different name for the executable, you can rename it before moving it to the system path. For example:

   ```bash
   mv cpp_compiler cpp
   ```

   Then, move it to the desired directory in the system path.

By following these steps, you'll have a compiled executable of your C++ compiler script that you can use without needing to compile it every time. Make sure to update the system's PATH environment variable if you move the executable to a different directory. Let me know if you need further clarification or assistance!

## How It Works

The script takes a C++ file as input, compiles it using `g++`, and then executes the resulting executable.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

C++ Compiler is a lightweight C++ script designed to simplify the compilation and execution of C++ source files. It automates the process of compiling and running C++ programs, eliminating the need for manual compilation steps. With this tool, developers can quickly test and run their C++ code without dealing with the complexities of the compilation process.

Key Features:
- Easy-to-use: Simply provide the path to your C++ source file, and the script handles the rest.
- Error Handling: Provides informative error messages in case of compilation or execution failures.
- Portable: Compatible with Unix-like systems where `g++` is available.

This project is ideal for C++ developers seeking a streamlined workflow for compiling and testing their code. Whether you're a beginner learning C++ or an experienced developer prototyping new ideas, this tool can save you time and effort in the development process.

Get started with C++ Compiler today and simplify your C++ development workflow!
