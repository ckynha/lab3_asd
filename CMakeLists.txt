project(lab3-asd)
cmake_minimum_required(VERSION 3.12)   
option(BUILD_TESTS "Build test" ON)

add_executable(main main.cpp "second_part.cpp" "second_part.h"  ) # ����������� main.exe

if(BUILD_TESTS)
  enable_testing()
  add_executable(test1 test.cpp   catch.hpp "second_part.cpp" "second_part.h"  ) # ����������� test1.exe
  add_test(test1 test1) # ��������� test1.exe ��� �������� ���������. ���� �������, ���� ��� ���������� ��� 0.
endif()
