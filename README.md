## Building and Running

1. **Compile:** Use a C++ compiler (like g++) to compile the source files. Example:
   ```bash
   cd chapter1
   g++ -o SimpleMCMain1 -Iinclude SimpleMCMain1.cpp ./include/Random1.cpp
   cd ..
   cd chapter2
   g++ -o SimpleMCMain2 -Iinclude SimpleMCMain2.cpp ./include/*.cpp
2. **Run**:
    ```bash
    ./SimpleMCMain1
    ./SimpleMCMain2