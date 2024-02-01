#include<iostream>
using namespace std;
int printArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int sortZeroOne(int arr[], int n){
    int left =0;
    int right = n-1;
    while(left<right){
        if(arr[left]==0 && arr[right]==1){
            left++;
            right--;
        }else if(arr[left]==0 && arr[right]==0){
            left++;
        }else if(arr[left]==1 && arr[right]==1){
            right--;

        }else{
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }



}
int main(){
    int arr[9]={0,1,1,0,1,0,0,1,1};
    int size = 9;
    sortZeroOne(arr,size);
    printArray(arr,size);
}