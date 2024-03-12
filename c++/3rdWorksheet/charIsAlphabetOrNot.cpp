#include<iostream>
using namespace std;

int main(){
  char ch;
  cout << "enter the character to be verified";
  cin >> ch;
  if((ch>=65&&ch<=90)||(ch>=97&&ch<=122)){
    cout << "entered character is indeed an alphabet";
  }else{
    cout << "entered character is not an alphabet";
  }
  return 0;
}