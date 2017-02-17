#include <algorithm>
#include "anagramsolver.h"

bool isAnagram(std::string strOne, std::string strTwo)
{
  std::string tempOne = removeWhiteSpace(strOne);
  std::string tempTwo = removeWhiteSpace(strTwo);
  if (tempOne.size() != tempTwo.size())
  {
    return false;
  }
  for (unsigned int i = 0; i < strOne.size(); ++i)
  {
    if (isUppercase(tempOne[i]))
    {
      tempOne[i] += SHIFT_FROM_UPPERCASE_TO_LOWERCASE;
    }
    if (isUppercase(tempTwo[i]))
    {
      tempTwo[i] += SHIFT_FROM_UPPERCASE_TO_LOWERCASE;
    }
  }  
  std::sort(tempOne.begin(), tempOne.end());
  std::sort(tempTwo.begin(), tempTwo.end());
  return tempOne == tempTwo;
}

bool isUppercase(char character)
{
  return (MIN_UPPERCASE_ASCII <= character && character <= MAX_UPPERCASE_ASCII);
}

std::string removeWhiteSpace(std::string str)
{
  std::string noWhiteSpaceStr = "";
  for (unsigned int i = 0; i < str.size(); ++i)
  {
    if (str[i] != ' ')
    {
      noWhiteSpaceStr.push_back(str[i]);
    }
  }
  return noWhiteSpaceStr;
}