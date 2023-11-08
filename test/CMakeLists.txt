set(BINARY ${CMAKE_PROJECT_NAME}_test)
file(GLOB_RECURSE TEST_SOURCES LIST_DIRECTORIES false *.h *.cpp)
set(SOURCES ${TEST_SOURCES})
add_executable(${BINARY} ${TEST_SOURCES})
add_test(NAME ${BINARY} COMMAND ${BINARY})

include_directories("${PROJECT_SOURCE_DIR}/src/include/")

# Esse comando aqui fala para o test importar a biblioteca gerada no src deste projeto
target_link_libraries(${BINARY} PUBLIC ${CMAKE_PROJECT_NAME})

enable_testing()
find_package(GTest CONFIG REQUIRED)
target_link_libraries(${BINARY} PRIVATE GTest::gtest GTest::gtest_main GTest::gmock GTest::gmock_main)

find_package(EASTL CONFIG REQUIRED)
target_link_libraries(${BINARY} PRIVATE EASTL)

