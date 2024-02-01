#include<iostream>
using namespace std;
int altReverse(int arr[], int size){
    for(int i=0;i<size;i++){
        swap(arr[i], arr[i+1]);
        i++;
        cout<<i;
 
    }
}
void printArray(int arr[], int n) {
    
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    int arr[6]={1,2,3,4,5,6};
    //2,3,1,
    altReverse(arr,6);
    printArray(arr, 6);

}