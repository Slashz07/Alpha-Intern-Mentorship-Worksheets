// Input a string of even length and
// reverse the first half of the string.
#include<iostream>
#include<cstring>
using namespace std;

int main(){
  string str = "this is even length string";
  int i = 0;
  int j = (str.length() / 2) - 1;
  while(i<j){
    swap(str[i], str[j]);
    i++;
    j--;
  }
  cout << str;
  return 0;
}