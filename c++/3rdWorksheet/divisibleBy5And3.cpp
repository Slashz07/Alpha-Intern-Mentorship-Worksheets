// Take positive integer input and tell if it is divisible by 5 or not

#include <iostream>
using namespace std;

int main()
{
  int num;
  cout << "enter a number";
  cin >> num;
  if (num % 5 == 0 && num % 3 == 0)
  {
    cout << "the entered number is divible by 5 and 3";
  }
  else
  {
    cout << "the entered number is not divible by 5 and 3 simultaneously";
  }
  return 0;
}