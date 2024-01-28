// find the bit at a particular position(say i) of the given number N
#include<iostream>
using namespace std;
int getBit(int num, int position){
    int mask = 1;
    return (num & (mask<<position))!=0;



}
int main(){
    int num, position;
    
    cout<<"Enter Number";
    cin>>num;
    cout<<"Enter position";
    cin>>position;

    cout<<getBit(num, position);

}

