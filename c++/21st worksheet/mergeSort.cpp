#include<iostream>
using namespace std;

void merge(int *arr,int lb,int mid,int ub){
    int x=lb;
    int y=mid+1;
    int n=lb;
    int *tempArr=(int *)malloc((ub+1)*sizeof(int));
    while(x<=mid&&y<=ub){
        if(arr[x]<=arr[y]){
            tempArr[n]=arr[x];
            n++;
            x++;
        }else{
            tempArr[n]=arr[y];
            n++;
            y++;
        }
    }
    while(x<=mid){
        tempArr[n]=arr[x];
        x++;
        n++;
    }
    while(y<=ub){
        tempArr[n]=arr[y];
        y++;
        n++;
    }

    for(int i=lb;i<=ub;i++){
        arr[i]=tempArr[i];
    }
}

void mergeSort(int *arr,int lb,int ub){
    if(lb<ub){
        int mid=lb+(ub-lb)/2;
        mergeSort(arr,lb,mid);
        mergeSort(arr,mid+1,ub);
        merge(arr,lb,mid,ub);
    }
}

int main(){
    int arr[]={4,4,0,-4};
    int len=sizeof(arr)/sizeof(arr[0]);
    cout<<"sorted array: ";
    mergeSort(arr,0,len-1);
        for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}