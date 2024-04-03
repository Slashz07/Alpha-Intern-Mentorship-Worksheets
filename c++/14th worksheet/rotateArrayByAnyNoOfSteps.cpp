// Rotate the given array ‘a’ by k steps, where k is 
//stepon-negative. 
#include<iostream>
#include<vector>
using namespace std;

vector<int> rotate(vector<int> vec, int step, int len)
{
  if(step==0){
    return vec;
  }else{
    for (int i = step; i < len; i += step)
    {
      swap(vec[0], vec[i]);
    }
    return vec;
  }
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