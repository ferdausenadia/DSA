#include<iostream>
using namespace std;
int findUnique(int arr[], int size){
    int result=0;
    for(int i=0;i<size;i++){
        
                    result=arr[i]^result;
        }
       return result; 
        

}
int main(){
    int arr[10];
    int size;
    cout<<"ENTER Your Array Size";
    cin>>size;
    cout<<"ENter Elements";
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }
    int result=findUnique(arr,size);
    if(result==0){
            cout<<"there are no unique element";
        }else{
            cout<<"the unique element is "<<result;
        }
}