// Given an array of marks of students, if the
// mark of any student is less than 35 print its roll
// number. [roll number here refers to the index of the
// array.]
#include<iostream>
using namespace std;

void failStd(int marks[],int len){
  cout << "Roll no. of failed students: ";
  for (int i = 0; i < len;i++){
    if(marks[i]<35){
      cout << i << ' ';
    }
  }
}
int main(){
  int stdMarks[] = {56, 25, 34, 90, 56, 76, 12, 67, 23, 81};
  failStd(stdMarks,sizeof(stdMarks)/sizeof(stdMarks[0]));
  return 0;
}