//  write a function to calculate the 
// Combination and Permutation
#include<iostream>
using namespace std;
int factorial(int num){
  int fact = num;
  for (int i = 2; i < num;i++){
    fact *= i;
  }
  return fact;
}
int permutation(int n,int r){
  int nFact = factorial(n);
  int n_rFact = factorial(n-r);
  return nFact / n_rFact;
}
int combination(int n,int r){
  int nFact = factorial(n);
  int rFact = factorial(r);
  int n_rFact = factorial(n-r);
  return nFact / (n_rFact*rFact);
}
int main(){
  int n = 0,r=0;
  int fact=factorial(5);
  cout << "enter n and r: ";
  cin >> n >> r;
  cout << "permutation for n and r " << n <<" "<<r<< " is : " << permutation(n,r)<<endl;
  cout << "combination for n and r " << n <<" "<<r<< " is : " << combination(n,r);
  return 0;
}