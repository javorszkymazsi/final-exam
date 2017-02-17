#include <algorithm>
#include "anagramsolver.h"

bool isAnagram(std::string str_one, std::string str_two)
{
  if (str_one.size() != str_two.size())
  {
    return false;
  }
  std::sort(str_one.begin(), str_one.end());
  std::sort(str_two.begin(), str_two.end());
  return str_one == str_two;
}