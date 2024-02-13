#include<iostream>
using namespace std;
void largestElement(int arr[], int size){
    for(int i =0;i<size;i++){
        for(int j=0;j<size;j++){
            if(arr[i]<arr[j]){
                int temp= arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

        }
        
    }

    cout<<"The largest element is "<<arr[size-1];

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
    largestElement(arr,size);
}
