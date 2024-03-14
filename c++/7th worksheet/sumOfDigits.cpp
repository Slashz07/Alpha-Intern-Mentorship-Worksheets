// WAP to print sum of digits of a given number.
#include <iostream>
using namespace std;

int main()
{
  int num, sum = 0;
  cout << "enter the number: ";
  cin >> num;
  if (num == 0)
  {
    cout << "sum = " << num;
  }
  else
  {
    while (num != 0)
    {
      int rem = num % 10;
        sum += abs(rem);
      num = (num - rem) / 10;
    }
    cout << "sum = " << sum;
  }

  return 0;
}
