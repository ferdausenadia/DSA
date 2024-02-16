#include<iostream>
using namespace std;
void print(int n){
    for(int i =0; i<=n; i++){
        for(int j =1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void print4(int n){
    for(int i =1; i<=n; i++){
        for(int j = 0; j<i;j++){
            cout<<i<<" ";

        }
        cout<<endl;

    }
}
void print5(int n){
    for(int i = 0;i<n; i++){
        for(int j = n;j>i;j--){
            cout<<"* ";
        }
        cout<<endl;
    }
}
void print6(int n){
    for(int i = n;i>0; i--){
        for(int j = 1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

}
void print7(int n){
    for(int i = 0; i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int k = 0;k<(2*i)+1; k++){
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++){
            cout<< " ";
        }
        cout<<endl;

    }
}
void print8(int n){
    for(int i =1; i<=n;i++){
        //space
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        //star
        for(int j =2*n;j>=i*2;j--){
            cout<<"*";
        }
        for(int j=1;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    print8(n);
}