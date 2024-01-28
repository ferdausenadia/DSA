#include<iostream>
using namespace std;
int arraySum(int arr[], int size){
    int sum =0;
    for(int i =0; i<size; i++){
        sum +=arr[i];
}
return sum;
}
int main(){
    int arr[15];
    int size;
    cout<<"enter your array size";
    cin>>size;
    cout<<"enter elements";
    for(int i=0; i<size; i++ ){
        cin>>arr[i];
    }
cout<<arraySum(arr, size);
    
}