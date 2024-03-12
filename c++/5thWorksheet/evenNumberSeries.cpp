// Print all the even numbers from 1 to 100
#include <iostream>
using namespace std;

int main()
{
  for (int i = 1; i <= 100 / 2; i++)
  {
    cout << i * 2 << ' ';
  }
  return 0;
}