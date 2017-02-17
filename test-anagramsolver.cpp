#define CATCH_CONFIG_MAIN
#include "catch.h"
#include "anagramsolver.h"

TEST_CASE("Anagram") {
  std::string strOne = "abcde";
  std::string strTwo = "edacb";
  REQUIRE(isAnagram(strOne, strTwo));
}

TEST_CASE("Anagram with case sensitivity") {
  std::string strOne = "Debit card";
  std::string strTwo = "bad cRedit";
  REQUIRE(isAnagram(strOne, strTwo));
}

TEST_CASE("Not an anagram") {
  std::string strOne = "Voldemort";
  std::string strTwo = "Batman";
  REQUIRE_FALSE(isAnagram(strOne, strTwo));
}

TEST_CASE("Not anagram, words with same length") {
  std::string strOne = "honey";
  std::string strTwo = "money";
  REQUIRE_FALSE(isAnagram(strOne, strTwo));
}

TEST_CASE("Anagram sensitive for white space") {
  std::string strOne = "Batman";
  std::string strTwo = "man bat";
  REQUIRE(isAnagram(strOne, strTwo));
}