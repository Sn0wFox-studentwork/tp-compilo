# TP Compilo
To learn the basics of how to create a compiler.

https://github.com/Sn0wFox-studentwork/tp-compilo

## Prerequisites
* g++
* c++11
* make

## Build & run
### Windows

```shell
make
build\tp-compilo.exe
```

### *nix

```shell
make OS=unix
./build/tp-compilo.exe
```

### Others
Other OS are not supported.

## Make file targets & default
* **all** (default): create build directories and build the project
* **makedir**: creates
* **clean**: remove all .o files
* **mrproper**: remove build directory and all content
* **print-%**: print the value of a makefile variable. Example usage: `make print-CC` => `g++`.

Default OS: **WINDOWS**. To use any target with *nix, use `OS=unix`.

Default mode: **debug**. To compile in release mode: `make DEBUG=no`.

## About IDEs
### CLion
CLion natively uses CMake,
but you can easily tell CMake to make use of your local makefile
[like this](http://stackoverflow.com/questions/26918459/using-local-makefile-for-clion-instead-of-cmake).

### Visual studio
Visual studio doesn't let you use make directly in default projects,
but you can easily set it up to make it work.
[This link](https://msdn.microsoft.com/en-us/library/txcwa2xx.aspx) will surely help.

## About make
No, make **doesn't** only work with Unix bash.
You can perfectly use it in your Windows console, without anything like cygwin.
Take a look at [this link](http://gnuwin32.sourceforge.net/packages/make.htm).
