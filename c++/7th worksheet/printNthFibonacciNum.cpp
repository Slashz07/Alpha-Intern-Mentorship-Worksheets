// Print the nth fibonacci number
#include<iostream>
using namespace std;

int main(){
  int num;
  cout << "enter the fibonacci number position you wish to access: ";
  cin >> num;
  int f0 = 0, f1 = 1;
  int f = f0 + f1;
  if(num==1){
    cout <<num<< " position value : " << f0;
  }else if(num==2){
    cout <<num<< " position value : " << f1;
  }else{
    for (int i = 3; i <= num;i++){
      f = f0 + f1;
      f0 = f1;
      f1 = f;
    }
    cout <<num<< " position value: " << f;
  }

  return 0;
}