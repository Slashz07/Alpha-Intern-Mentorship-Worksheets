// PRINT THE STAR CROSS PATTERN
// *       *
//  *     * 
//   *   *  
//    * *   
//     *    
//    * *   
//   *   *  
//  *     * 
// *       *
#include<iostream>
using namespace std;

int main(){
  int l;
  cout << "enter the length of the star cross pattern: ";
  cin >> l;
  for (int i = 1; i <= l;i++){
    for (int j = 1; j <= max(l - i + 1,i);j++){
      if(j==i||j==l-i+1){
        cout << '*';
      }else{
        cout << ' ';
      }
    }
    cout << endl;
  }
    return 0;
}