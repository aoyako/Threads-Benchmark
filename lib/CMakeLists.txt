project(libname CXX)

set(CMAKE_CXX_STANDARD 17)

set(SRC_LIST
    input.hpp
)

add_library(${PROJECT_NAME} INTERFACE)
target_sources(${PROJECT_NAME} INTERFACE ${SRC_LIST})

target_include_directories (${PROJECT_NAME}
  INTERFACE
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:libsort>
)
