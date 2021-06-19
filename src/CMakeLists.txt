cmake_minimum_required(VERSION 2.8.12 FATAL_ERROR)

project(linalg CXX)

file(GLOB SRC_FILES "main.cpp")

add_executable(${PROJECT_NAME} ${SRC_FILES})

target_compile_options(${PROJECT_NAME} PRIVATE -Wall -Wno-long-long -pedantic -Werror)

set(ARMA_USE_LAPACK     true)
set(ARMA_USE_BLAS       true)

find_package(LAPACK REQUIRED)
target_link_libraries(${PROJECT_NAME} ${LAPACK_LIB})

find_package(BLAS REQUIRED)
target_link_libraries(${PROJECT_NAME} ${BLAS_LIBRARIES})

find_path(ARMADILLO REQUIRED)
target_include_directories(${PROJECT_NAME} PUBLIC ${ARMADILLO_LIBRARIES})


