// WAP to print reverse of a given number.
#include<iostream>
using namespace std;

int main(){
  int num;
  cout << "enter the number: ";
  cin >> num;
  int rev = 0;
    while (num != 0)
    {
      int rem = num % 10;
      rev = rev * 10 + rem;
      num = (num - rem) / 10;
    }
    cout << "Number obtained by reversal of digits = " << rev;
  
  return 0;
}