#include<iostream>
using namespace std;
bool search(int arr[], int size, int key){
    for(int i=0; i<10; i++){
        if(key==arr[i]){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[10]= {1,2,3,4,5,6,-1,-2,-3,10};
    int key;
    cout<<"Enter Key";
    cin>>key;
    bool result= search(arr,10,key);
    if(result){
        cout<<"found";
    }else{
        cout<<"not found";
    }


}