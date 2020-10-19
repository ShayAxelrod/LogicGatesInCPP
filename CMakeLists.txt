cmake_minimum_required(VERSION 3.17)

# set the project name
project(LogicGates)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(${PROJECT_SOURCE_DIR})

add_executable(LogicGates LogicGatesInCPP.cpp)  # be sure there's exactly one main() function in the source files

install(TARGETS LogicGates DESTINATION bin)
install(FILES "{PROJECT_BINARY_DIR}" DESTINATION include)

# > mkdir build
# > cd build
# > cmake ..
# > cmake --build .
# > cmake --install .