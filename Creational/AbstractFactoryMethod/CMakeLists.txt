# CMakeList.txt : CMake project for CMakeProject1, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (AbstractFactoryMethod "main.cpp" "BaseProduct.h" "BaseProduct.cpp" "ConcreteProduct1.h" "ConcreteProduct1.cpp" "BaseFactory.h" "BaseFactory.cpp" "ConcreteFactory1.h" "ConcreteFactory1.cpp")

# TODO: Add tests and install targets if needed.
