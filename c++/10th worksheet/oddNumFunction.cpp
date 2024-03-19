// Given two numbers a and b, write a 
// function to print all odd numbers between them.
#include<iostream>
using namespace std;
void oddNum(int a,int b){
  for (int i = a + 1; i < b;i++){
    if(i%2!=0){
      cout << i << ' ';
    }
  }
}
int main(){
  int a, b;
  cout << "enter the numbers to find odd numbers between: ";
  cin >> a >> b;
  cout << "\nodd numbers between " << a << " and " << b << " are: " << oddNum(a, b);
  return 0;
}