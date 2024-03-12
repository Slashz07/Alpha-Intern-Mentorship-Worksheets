// Take positive integer input and tell if it is a three digit number or not
#include<iostream>
using namespace std;

int main(){
  int num;
  cout << "enter the number: ";
  cin >> num;
  int div = 10;
  int count = 1;
  while(div<=num){
    int rem = num % div;
    num -= rem;
    num /= div;
    count++;
  }
  if(count==3){
    cout << "its a 3 digit number";
  }else{
    cout << "its not a 3 digit number but a " << count << " digit number";
  }

  return 0;
}