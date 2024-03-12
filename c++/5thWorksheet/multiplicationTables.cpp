// Print the table of ‘n’.Here ‘n’ is an integer which the user will input
#include<iostream>
    using namespace std;

int main(){
  int num;
  cout << "enter the number whose table is to be printed";
  cin >> num;
  for (int i = 1; i <= 10; i ++)
  {
    cout << i*num << ' ';
  }
  return 0;
}