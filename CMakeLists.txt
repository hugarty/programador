cmake_minimum_required(VERSION 3.20.0)

set(CMAKE_TOOLCHAIN_FILE "/home/hpca/game/vcpkg/scripts/buildsystems/vcpkg.cmake")

project(First)
add_subdirectory(src)
add_subdirectory(test)

