// Input a string of length n and count all
// the vowels in the given string.
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
  string str;
  cout << "enter a string";
  getline(cin, str);
  string vowel = "aeiou";
  int count = 0,pos=0;
  for (int i = 0; i < vowel.length(); i++)
  {
    while (str.find(vowel[i], pos) && str.find(vowel[i], pos) < str.length())
    {
      count++;
      pos = str.find(vowel[i], pos) + 1;
    }
    pos = 0;
  }
  cout << "the number of vowels in given string are: " << count;
}