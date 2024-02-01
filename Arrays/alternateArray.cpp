#include<iostream>
using namespace std;
int altReverse(int arr[], int size){
    for(int i=0;i<size;i+=2){
        if(arr[i+1]<size){
                    //swap(arr[i], arr[i+1]);
                    int temp=arr[i+1];
                    arr[i+1]=arr[i];
                    arr[i]=temp;

        }
        
    
 
    }
}
void printArray(int arr[], int n) {
    
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    //2,3,1,
    altReverse(arr,7);
    printArray(arr, 7);

}