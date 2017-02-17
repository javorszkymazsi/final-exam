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
      strOne[i] += SHIFT_FROM_UPPERCASE_TO_LOWERCASE;
    }
    if (isUppercase(strTwo[i]))
    {
      strTwo[i] += SHIFT_FROM_UPPERCASE_TO_LOWERCASE;
    }
  }  
  std::sort(strOne.begin(), strOne.end());
  std::sort(strTwo.begin(), strTwo.end());
  return strOne == strTwo;
}

bool isUppercase(char character)
{
  return (MIN_UPPERCASE_ASCII <= character && character <= MAX_UPPERCASE_ASCII);
}