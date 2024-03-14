// WAP to count digits of a given number
#include <iostream>
using namespace std;

int main()
{
  int num, count = 0;
  cout << "enter the number: ";
  cin >> num;
  if (num == 0)
  {
    cout << "total number of digits = " << num+1;
  }
  else
  {
    while (num != 0)
    {
      int rem = num % 10;
      count++;
      num = (num - rem) / 10;
    }
    cout << "total number of digits = " << count;
  }

  return 0;
}
