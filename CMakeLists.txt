cmake_minimum_required (VERSION 3.10)

# compatibilty
set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>")
set(CMAKE_MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Release>:Release>")


project (ChessEngine)
set(CMAKE_CXX_STANDARD 20)

# add executables for the project
file(GLOB_RECURSE MY_SOURCES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/source/*.cpp")
add_executable(ChessEngine "${MY_SOURCES}")

# include header files
target_include_directories(ChessEngine PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include/")