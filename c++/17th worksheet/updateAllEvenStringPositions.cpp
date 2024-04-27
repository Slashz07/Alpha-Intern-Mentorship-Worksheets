//  Input a string of size n and Update all
// the even positions in the string to character
// ‘a’. Consider 0-based indexing.

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  string str;
  cout << "Enter a string: ";
  getline(cin, str);
  for (int i = 0; i < str.length(); i++)
  {
    if (i % 2 == 0)
    {
      str[i] = 'a';
    }
  }
  cout << str;
  return 0;
}