// Input a string and return the
// number of times the neighbouring characters are
// different from each other.

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  string str;
  int count = 0;
  cout << "Enter a string: ";
  getline(cin, str);
  for (int i = 1; i < str.length()-1; i++)
  {
    if (str[i-1]!=str[i+1])
    {
      count++;
    }
  }
  cout << "number of times neigbouring characters are different: "<<count;
  return 0;
}