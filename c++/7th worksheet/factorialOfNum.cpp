// Print the factorial of a given number ‘n’
#include<iostream>
using namespace std;
int factorials(int num){
  if(num==1){
    return 1;
  }
  int fac = num * factorials(num - 1);
  return fac;
}
int main(){
  int num;
  cout << "enter the number: ";
  cin >> num;
  int factorial = factorials(num);
  cout << "the factorial obtained is :" << factorial;
  return 0;
}