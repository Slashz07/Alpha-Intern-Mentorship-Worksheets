// Input n strings and write a program to find
// the longest common prefix string of all the strings.
#include <iostream>
#include <cstring>
using namespace std;

void getLongestPrefix(string str1, string str2, string &longestPrefix)
{
  string commonStr = "";
  for (int i = 0; i < str1.length() && i < str2.length(); i++)
  {
    if (str1[i] == str2[i])
    {
      commonStr += str1[i];
      if ((i == str1.length() - 1 || i == str2.length() - 1))
      {
        if (commonStr.length() > longestPrefix.length())
        {
          longestPrefix = commonStr;
        }
  
      }
    }

    else
    {
      if (commonStr.length() > longestPrefix.length())
      {
        longestPrefix = commonStr;
      }
      break;
    }
  }
}

int main()
{
  string str1 = "hellow ";
  string str2 = "hellow ";
  string str3 = "howdyda";
  string str4 = "howdyd";

  string longestPrefix = "";

  getLongestPrefix(str1, str2, longestPrefix);
  getLongestPrefix(str2, str3, longestPrefix);
  getLongestPrefix(str1, str3, longestPrefix);
  getLongestPrefix(str1, str4, longestPrefix);
  getLongestPrefix(str2, str4, longestPrefix);
  getLongestPrefix(str3, str4, longestPrefix);
  cout << "the longest common prefix in various strings is : " << longestPrefix;
  return 0;
}