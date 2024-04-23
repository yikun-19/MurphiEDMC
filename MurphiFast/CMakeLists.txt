cmake_minimum_required(VERSION 3.20)
project(murphi_fast)

set(CMAKE_CXX_STANDARD 11)

add_executable(murphi_fast
        test/test.cpp)

include_directories ("${PROJECT_SOURCE_DIR}/include")

target_link_libraries(murphi_fast m)  # g++ -lm: link math library

#add_library(murphi-algorithms
#        include/murphi.original/mu_hash.hpp
#        include/murphi.original/mu_hash.cpp
#        include/murphi.original/mu_io.hpp
#        include/murphi.original/mu_io.cpp
#        include/murphi.original/mu_real.hpp
#        include/murphi.original/mu_real.cpp
#        include/murphi.original/mu_state.hpp
#        include/murphi.original/mu_state.cpp
#        include/murphi.original/mu_statecl.hpp
#        include/murphi.original/mu_sym.hpp
#        include/murphi.original/mu_sym.cpp
#        include/murphi.original/mu_system.hpp
#        include/murphi.original/mu_system.cpp
#        include/murphi.original/mu_util.hpp
#        include/murphi.original/mu_util.cpp
#        include/murphi.original/mu_util_dep.hpp
#        include/murphi.original/mu_verifier.hpp
#        include/murphi.original/mu_verifier.cpp)
#
#target_link_libraries(murphi_fast murphi-algorithms)

