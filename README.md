# s.eng
Simple engine written in C++ with GLFW &amp; OpenGL

## Documentation 

The documentation is available at https://sorenmly.github.io/s.eng. Please, if you can, contribute!

## Dev & Build

**Dependencies**:
- [cmake](https://cmake.org/download/)
- GLFW 3
- OpenGL (It comes with your PC!)

**Build**:
- With all the dependencies set up, run 
```bash
cmake -S . -B build
```
in the root directory.

This will generate the `libengine.so` (`build/engine/`) and the `example` binary (`build/example`).
