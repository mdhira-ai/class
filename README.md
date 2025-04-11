or add

To add all files from the include and lib folders to your CMake project, you'll need to modify your CMakeLists.txt to include those directories and their files. Here's how you can modify your CMakeLists.txt:



# Add include directory
include_directories(${CMAKE_SOURCE_DIR}/include)

# Find all header files in include directory
file(GLOB HEADER_FILES 
    "${CMAKE_SOURCE_DIR}/include/*.h"
    "${CMAKE_SOURCE_DIR}/include/*.hpp"
)

# Find all source files in lib directory
file(GLOB LIB_SOURCE_FILES 
    "${CMAKE_SOURCE_DIR}/lib/*.cpp"
    "${CMAKE_SOURCE_DIR}/lib/*.c"
)

# Update PROJECT_SOURCES to include the new files
set(PROJECT_SOURCES
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    ${HEADER_FILES}
    ${LIB_SOURCE_FILES}
)

# The rest of your CMakeLists.txt remains the same...
