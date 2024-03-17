// Print the following pattern
// Input: n = 5
// Output:
// 1
// A B
// 1 2 3
// A B C D
// 1 2 3 4 5

#include<iostream>
using namespace std;

int main(){
  int len;
  cout << "enter the length of mixed pyramid :";
  cin >> len;
  for (int i = 1; i <= len;i++){
    char ch = 'A';
    for (int j = 1; j <= i;j++){
      if(i%2==0){
        cout << ch << ' ';
        ch++;
      }else{
        cout << j << ' ';
      }
    }
    cout << endl;
  }
    return 0;
}