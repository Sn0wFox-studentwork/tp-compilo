# TP Compilo
To learn the basics of how to create a compiler.

https://github.com/Sn0wFox-studentwork/tp-compilo

## Build and run
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

## About compilers for this compiler
Of course, this project will use Regex,
which are a little buggy with some versions of **gcc** and **g++**.

At first sight, **Visual C(++)** and **Clang** are fine.
