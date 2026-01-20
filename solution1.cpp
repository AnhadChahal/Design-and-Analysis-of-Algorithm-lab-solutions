#include<iostream>
using namespace std;
void binarysearch(int arr[],int key,int left_index, int right_index){
    int mid_index=left_index+(right_index-left_index)/2;
    if(left_index>right_index){
        cout<<"\nElement not found in the array";
        return;
    }
    if(arr[mid_index]==key){
        cout<<"\nElement found at index : "<<mid_index;
        return;
    }
    if(arr[mid_index]>key){
        binarysearch(arr,key,left_index,mid_index-1);
    }
    else{
        binarysearch(arr,key,mid_index+1,right_index);
    }
}
int main(){
    int arr[]={2,5,8,12,16,23,28,38,56,72,91};
    int n=sizeof(arr[0])/sizeof(arr);
    cout<<"Given array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int key=23;
    cout<<"\nKey to be searched is : "<<key;
    binarysearch(arr,key,0,n-1);
    return 0;
}