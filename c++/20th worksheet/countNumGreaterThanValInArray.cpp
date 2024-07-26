// Count number of elements in given array greater than a given number x
#include<iostream>
using namespace std;

int count(int *arr,int val,int len){
int greaterNums=0;
for(int i=0;i<len;i++){
    if(arr[i]>val){
        greaterNums++;
    }
}
return greaterNums;
}

int main(){
    int arr[]={2,4,6,2,8,12,9};
    int len=sizeof(arr)/sizeof (arr[0]);
    int num;
    cout<<"enter number greater than whom you wish to find the number of array elements";
    cin>>num;
    int value=count(arr,num,len);
    cout<<"number of array elements greater than given value: "<<value;
    return 0;
}