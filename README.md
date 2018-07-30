# Building on Apple with Unix Makefiles

```bash
git clone git@github.com:dtnnguyen/MathLib.git
cd MathLib
mkdir build
cd build
cmake .. 
make -j4

# Run GTest Code
test/testapp
```

# Build on Apple with XCode Project

```bash
git clone git@github.com:dtnnguyen/MathLib.git
cd MathLib
mkdir build
cd build
cmake .. -G Xcode
# Open in Xcode
```

# Build on Windows with Visual Studio Solution

```bash
git clone git@github.com:dtnnguyen/MathLib.git
cd MathLib
mkdir build
cd build
cmake .. -G "Visual Studio 14 2015 Win64"
# Open in Visual Studio
```
