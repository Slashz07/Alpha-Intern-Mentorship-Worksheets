//  Given two strings s and t, return true if t is an
// anagram of s, and false otherwise.
#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str1 = "William Shakespeare";
  string str2 = "I'll make a wise phrase";
  int arr1[26] = {0};
  int arr2[26] = {0};
  for (int i = 0; i < str1.length(); i++)
  {
    arr1[tolower(str1[i]) - 'a']++;
  }
  for (int i = 0; i < 26; i++)
  {
    cout << arr1[i] << ' ';
  }
  cout << endl;
  for (int i = 0; i < str2.length(); i++)
  {
    arr2[tolower(str2[i]) - 'a']++;
  }
  for (int i = 0; i < 26; i++)
  {
    cout << arr2[i] << ' ';
  }

  for (int i = 0; i < 26; i++)
  {
    if (arr1[i] != arr2[i])
    {
      cout << "second string is not an anagram of the first string";
      exit(0);
    }
  }
  cout << "second string is the anagram of the first string";
  return 0;
}