// WAP to check if a number is prime or not(use of break statement)
#include<iostream>
#include<cmath>
using namespace std;

  int main(){
    int num,valid=1;
    cout<<"enter the number to be checked for being prime: ";
    cin >> num;
    for (int i = 2; i <= sqrt(num);i++){
      if(num%i==0){
        valid = 0;
        cout << num<<" not a prime number";
        break;
      }
    }
    if(valid==1){
      cout << num << " is indeed a prime number";
    }

      return 0;
  }