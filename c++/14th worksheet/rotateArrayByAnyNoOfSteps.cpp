// Rotate the given array ‘a’ by k steps, where k is non-negative. 
#include<iostream>
#include<vector>
using namespace std;

vector<int> rotate(vector<int> vec, int step, int len)
{
  vector<int>temp(len);
  for (int i = 0; i < len;i++){
    temp[(i + step)%len] = vec[i];
  }
  for (int i = 0; i < len;i++){
    vec[i] = temp[i];
  }
  return vec;
}
int main(){
  vector<int>v = {2, 5, 3, 1, 8, 9, 12, 15, 21, 51};
  int len = v.size();
  int step;
  cout << "enter by how many steps you wish to rotate the array: ";
  cin >>step;
  v=rotate(v,step,len);
  cout << "rotated array: ";

  for (int i : v)
  {
    cout << i << ' ';
  }

  return 0;
}