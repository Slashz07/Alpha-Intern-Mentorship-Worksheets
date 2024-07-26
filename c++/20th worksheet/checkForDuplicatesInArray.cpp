// Given an array, predict if the array contains duplicates or not.
#include<iostream>
using namespace std;

bool checkDuplicateVal(int *arr,int len){

    for(int i=0;i<len-1;i++){
        for(int j=i+1;j<len;j++){
            if(arr[i]==arr[j])
            return true;
        }
    }
    return false;
}

int main(){

    int arr[]={2,4,6,8,12,9};
    int len=sizeof(arr)/sizeof (arr[0]);
    bool containDuplicates=checkDuplicateVal(arr,len);
    if(containDuplicates)
    cout<<"Array contains duplicate values ";
    else
    cout<<"Array doesn't contain duplicate values";
    return 0;
}