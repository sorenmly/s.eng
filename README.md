# s.eng
Simple engine written in C++ with GLFW &amp; OpenGL

# Dev & Build

**Dependencies**:
- GLFW 3
- OpenGL (It comes with your PC!)
- _glad (It is technically a dependency, but you don't need to install since it comes in the vendor/ directory_

**Build**
With all the dependencies set up, run 
```bash
cmake -S . -B build
```
in the root directory. This will generate the `libengine.so` (`build/engine/`) and the `example` (`build/example`).
