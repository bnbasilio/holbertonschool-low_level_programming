The following are what the scripts within this directory do:

0. C file through the preprocessor and save the result into another file
   * the C file name will be saved in the variable `$CFILE`
   * the output should be saved in the file `c`
1. compiles a C file but does not link
   * the C file name will be saved in the variable `$CFILE`
   * the output file should be named the same as the C file, but with the extension `.o` instead of `.c`
2. generates the assembly code of a C code and save it in an output file
   * the C file name will be saved in the variable `$CFILE`
   * the output file should be named the same as the C file, but with the extension `.s` instead of `.c`
3. compiles a C file and creates an executable named `cisfun`
   * the C file name will be saved in the variable `$CFILE`
4. prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line
   * use the function `puts`
   * you are not allowed to use `printf`
   * your program should end with the value `0`
5. prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line
   * use the function `printf`
   * you are not allowed to use the function `puts`
   * your program should return `0`
   * your program should compile without warning when using the `-Wall` `gcc` option
6. prints the size of various types on the computer it is compiled and run on
   * you should produce the exact same output as in the example
   * warnings are allowed
   * your program should return `0`
   * you might have to install the package `libc6-dev-i386` on your Linux (Vagrant) to test the `-m32 gcc` option