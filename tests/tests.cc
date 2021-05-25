/*
 * Framework Set-up
 */

#ifndef CATCH_CONFIG_MAIN
#  define CATCH_CONFIG_MAIN
#endif

#include "catch.hpp"

/*
 * Necessary user header files and library includes
 */

#include "factorial.hpp"

/*
 * Helpers/Constants
 */

// nothing to see here (right now)...

/*
 * Test cases
 */

TEST_CASE("Factorials are computed for general cases (positive numbers > 0)",
          "[factorial-positive]") {
  REQUIRE(Factorial(1) == 1);
  REQUIRE(Factorial(2) == 2);
  REQUIRE(Factorial(3) == 6);
  REQUIRE(Factorial(10) == 3628800);
}

TEST_CASE("Factorial is computed for edge case Factorial(0)", "[factorial-0]") {
  REQUIRE(Factorial(0) == 1);
}