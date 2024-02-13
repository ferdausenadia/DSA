#include<iostream>
using namespace std;
int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int mid = start+(end-start)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]<key){
            start = mid+1;
        }else{
            end = mid-1;

        }
        mid = start+(end-start)/2;
    }
    return -1;

}
int main(){
    int evenArray[6]={2,3,3,5,6};
    int oddArray[5]={2,3,4,5};
    cout<<binarySearch(evenArray, 6, 3);
    
}