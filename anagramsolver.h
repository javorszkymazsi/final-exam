#pragma once;
#include <iostream>

const int SHIFT_FROM_UPPERCASE_TO_LOWERCASE = 32;
const int MIN_UPPERCASE_ASCII = 65;
const int MAX_UPPERCASE_ASCII = 90;

bool isAnagram(std::string, std::string);
bool isUppercase(char);
std::string removeWhiteSpace(std::string);