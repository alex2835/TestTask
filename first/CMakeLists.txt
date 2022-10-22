cmake_minimum_required(VERSION 3.0.0)
project(TestTask VERSION 0.1.0)

include(CTest)
enable_testing()

set( SOURCES
   "src/main.cpp"
)

add_executable(TestTask ${SOURCES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
