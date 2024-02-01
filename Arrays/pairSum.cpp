#include<iostream>
using namespace std;
int pairSum(int arr[],int s, int size){
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]+arr[j]==s){
                cout<<arr[i]<<","<<arr[j]<<endl;
            }
        }

    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int s=5;
    pairSum(arr,s,5);
}