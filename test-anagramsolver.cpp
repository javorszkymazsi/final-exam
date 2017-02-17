#define CATCH_CONFIG_MAIN
#include "catch.h"
#include "anagramsolver.h"

TEST_CASE("Anagram") {
  std::string strOne = "Debit card";
  std::string strTwo = "bad cRedit";
  REQUIRE(isAnagram(strOne, strTwo));
}

TEST_CASE("Not an anagram") {
  std::string strOne = "aabbcdddcdd";
  std::string strTwo = "bbddccaa";
  REQUIRE_FALSE(isAnagram(strOne, strTwo));
}