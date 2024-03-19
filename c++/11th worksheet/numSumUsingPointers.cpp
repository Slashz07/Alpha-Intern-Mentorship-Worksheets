// Write a program to find the sum of two numbers using pointers
#include<iostream>
using namespace std;

int main(){
  int *num1, *num2;
  int a, b;
  cout << "enter the 2 numbers: ";
  cin >> a >> b;
  num1 = &a;
  num2 = &b;
  cout << "Sum of numbers : " << (*num1) + (*num2);
  return 0;
  return 0;
}