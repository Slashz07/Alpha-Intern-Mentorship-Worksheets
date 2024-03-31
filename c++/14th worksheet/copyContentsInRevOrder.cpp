// Write a program to copy the contents of one 
// array into another in the reverse order. 
#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector<int> v1 = {23, 5, 7, 4, 32, 1, 87};
  vector<int> v2;
  for (int i = v1.size(); i >= 0;i--){
    v2.push_back(v1[i]);
  }
  cout << "the reverse copied array is: ";
  for(int i:v2){
    cout << i << ' ';
  }
  return 0;
}