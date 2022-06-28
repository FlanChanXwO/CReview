cmake_minimum_required(VERSION 3.21)
project(CReview)

set(CMAKE_CXX_STANDARD 11)

add_executable(CReview Main.c)
add_executable(CReview1 Algorithms/Search.c)
add_executable(CReview2 Algorithms/Sort.c)
add_executable(CReview3 Algorithms/inputAndOutput.c)
add_executable(CReview4 Algorithms/MathFunc.c)
add_executable(CReview5 Algorithms/BaseGrammar.c)
add_executable(CReview6 Algorithms/Point.c)

add_executable(CReview7 App.c)