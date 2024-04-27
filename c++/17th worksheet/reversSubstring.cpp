
// Input a string of length greater than 5 and
// reverse the substring from position 2 to 5 using
// inbuilt functions.
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  string str;
  cout << "input string of length atleast greater than 5: ";
  getline(cin, str);
  int i = 1;
  int j = 4;
  while (i < j)
  {
    swap(str[i], str[j]);
    i++;
    j--;
  }
  cout << str;
  return 0;
}