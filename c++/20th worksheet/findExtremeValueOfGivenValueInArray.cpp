// Given an unsorted array arr[] of n integers and a key which is present in this array. You need to write a program to find the start index( index where the element is first found from left in the array ) and end index( index where the element is first found from right in the array
#include<iostream>
using namespace std;

void findExtremes(int *arr,int key,int len){
    int startIndex=-1;
    int endIndex=-1;
    int i=0;
    int j=len-1;

    while(true){
        // cout<<"I:"<<i<<"j: "<<j;
        if(arr[i]==key){
        startIndex=i;
        }else{
            i++;
        }
        if(arr[j]==key){
            endIndex=j;
        }else{
            j--;
        }
        if(arr[i]==key&&arr[j]==key){
            startIndex=i;
            endIndex=j;
            break;
        }

        if(i>j){
            break;
        }
    }

    cout<<"startIndex: "<<startIndex<<endl;
    cout<<"EndIndex: "<<endIndex;
}

int main(){
       int arr[]={4,6,8,12,9};
       int len=sizeof(arr)/sizeof (arr[0]);
       int num;
    cout<<"enter number whose extremes are to be found";
    cin>>num;
findExtremes(arr,num,len);
    return 0;
}