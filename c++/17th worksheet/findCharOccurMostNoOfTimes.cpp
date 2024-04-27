// Given n strings consisting of lowercase
// English alphabets. Print the character that is
// occurring most number of times.
#include <iostream>
#include <string>
using namespace std;

int main()
{
  string str = "Clint Eastwood";
  int arr[26] = {0};
  int max = 0;

  for (int i = 0; i < str.length(); i++)
  {
    arr[tolower(str[i]) - 'a']++;
  }


  for (int i = 1; i < 26; i++)
  {
    if (arr[max] < arr[i])
    {
      max = i;
    }
  }

  cout << "Character that was repeated maximum times in the string is: "<<char(max+(int)'a');
  return 0;
}