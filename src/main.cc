#include <cassert>
#include <iostream>

#include "factorial.hpp"

int main() {
  std::cout << Factorial(1) << std::endl;
  assert(Factorial(1) == 1);
  std::cout << Factorial(2) << std::endl;
  assert(Factorial(2) == 2);
  std::cout << Factorial(3) << std::endl;
  assert(Factorial(3) == 6);
}