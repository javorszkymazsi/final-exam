#include <algorithm>
#include "anagramsolver.h"

bool isAnagram(std::string strOne, std::string strTwo)
{
  if (strOne.size() != strTwo.size())
  {
    return false;
  }
  for (unsigned int i = 0; i < strOne.size(); ++i)
  {
    if (isUppercase(strOne[i]))
    {
      strOne[i] += 32;
    }
    if (isUppercase(strTwo[i]))
    {
      strTwo[i] += 32;
    }
  }  
  std::sort(strOne.begin(), strOne.end());
  std::sort(strTwo.begin(), strTwo.end());
  return strOne == strTwo;
}

bool isUppercase(char character)
{
  return (64 < character && character < 91);
}