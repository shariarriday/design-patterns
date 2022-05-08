# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.8)

project ("Design-Pattern")

# Include sub-projects.
add_subdirectory ("Creational/FactoryMethod")
add_subdirectory ("Creational/AbstractFactoryMethod")
add_subdirectory ("Creational/Singleton")
add_subdirectory ("Creational/Builder")