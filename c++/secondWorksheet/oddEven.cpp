// Take positive integer input and tell if it is even or odd.
#include<iostream>
using namespace std;

int main(){
  int num;
  cout << "enter a number";
  cin >> num;
  if(num%2==0){
    cout << "the entered number is even";
  }else{
    cout << "the entered number is odd";
  }
  return 0;
}