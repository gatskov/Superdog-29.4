cmake_minimum_required (VERSION 3.24)


set(MY_INCLUDE_DIR ${CMAKE_SOURCE_DIR}/include)

add_executable (Superdog  "main.cpp ""dog.cpp"" ${MY_INCLUDE_DIR}/talent.h" " ${MY_INCLUDE_DIR}/dog.h")
target_include_directories(Superdog PUBLIC ${MY_INCLUDE_DIR})
