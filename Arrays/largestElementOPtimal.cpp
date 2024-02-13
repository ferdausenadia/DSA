#include<iostream>
#include <climits>

using namespace std;
int largestElement(int arr[], int size){
    int largestElement = INT_MIN;
    for(int i=0;i<size; i++){
        if(arr[i]>largestElement){
            largestElement= arr[i];
        }
    }
    return largestElement;


}
int main(){
    int arr[10];
    int size;
    cout<<"Enter your array size";
    cin>>size;
    cout<<"enter elements: ";
    for(int i =0; i<size; i++){
        cin>>arr[i];

    }
   cout<<"The largest element is: "<< largestElement(arr,size);

}