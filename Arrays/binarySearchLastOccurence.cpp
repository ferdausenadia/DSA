#include<iostream>
using namespace std;
int lastOccurence(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans = mid;
            start = mid+1;
        }else if(arr[mid]<key){
            start = mid+1;
        }else{
            end = mid-1;

        }
        mid = start+(end-start)/2;
    }
return ans;

}
int main(){
    int evenArray[6]={2,3,3,5,6,6};
    cout<<lastOccurence(evenArray, 6, 6);
    
}