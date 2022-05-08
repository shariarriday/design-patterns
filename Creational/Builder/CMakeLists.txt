# CMakeList.txt : CMake project for CMakeProject1, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (Builder "main.cpp"  "BuilderBase.h" "ConcreteBuilder1.h" "ConcreteBuilder1.cpp" "Director.h" "Product1.h" "Product1.cpp" "ProductBase.h" "Director.cpp")

# TODO: Add tests and install targets if needed.
