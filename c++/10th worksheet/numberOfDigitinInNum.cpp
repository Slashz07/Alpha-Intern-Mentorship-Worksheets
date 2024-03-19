// Write a function to count the number
// of digits in a number and then print the square of this number
#include <iostream>
#include <cmath>
using namespace std;

int numOfDigits(int num){
  int count = 0;
  while (num != 0)
  {
    int rem = num % 10;
    count++;
    num = (num - rem) / 10;
  }
  return count;
}
int main()
{
  int num,digits=0;
  cout << "enter the number: ";
  cin >> num;
  if (num == 0)
  {
    cout << "total number of digits = " << num + 1;
  }
  else
  {
     digits = numOfDigits(num);
    cout << "total number of digits = " << digits;
  }
  cout << "\nsquare of number of digits in "<<num<<": "<< pow(digits, 2);
  return 0;
}
