cmake_minimum_required(VERSION 3.16)
project(Chip8)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(MSVC)
    # Compiler flags for Visual Studio
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4 /WX /O2")
else()
    # Compiler flags for other compilers (e.g., GCC, Clang)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror -O2 -pedantic")
endif()


include(FetchContent)

# Make the dependency available

# Now you can link against it

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(
  app_test
  test/app_test.cpp
)

add_executable(
  app
  src/main.cpp
)

FetchContent_Declare(
  SDL3
  GIT_REPOSITORY https://github.com/libsdl-org/SDL.git
  GIT_TAG release-3.2.12
)

FetchContent_MakeAvailable(SDL3)
target_link_libraries(app SDL3::SDL3)

target_link_libraries(
  app_test
  GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(app_test)
