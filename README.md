# SOLID fun with GTest

A spare time project to experiment with some SOLID principles and testing them with GTest/GMock. Ended up also being a crash course in VSCode tasks and launch configurations.

## Install dependencies

* Follow the official guide to setup [MinGW and GCC in VSCode](https://code.visualstudio.com/docs/cpp/config-mingw)
* Using MSYS, also [install GDB](https://packages.msys2.org/packages/mingw-w64-x86_64-gdb)
* Install the recommended plugins in the MinGW tutorial
* Install the [tasks in status bar plugin](https://marketplace.visualstudio.com/items?itemName=actboy168.tasks) (for convenience)

## Setup, build, and run

1. Open this directory in VSCode.
2. Open `settings.json` and update `"project.gdbPath"` to point to your gdb installation (if necessary).
3. Run the task 'build (debug)'.
4. Set a breakpoint somewhere in the main.cpp file.
5. Go to the run menu, run the launch configuration 'Run (Debug)'.
6. Watch it launch and catch at the breakpoint.
7. Try again with 'Run Tests (Debug).

You can also build a release version by using the task 'build' and run it with 'Run (Release)'
