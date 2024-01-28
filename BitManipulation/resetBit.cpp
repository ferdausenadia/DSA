//1==>0
//0==>0  1100 
#include<iostream>
using namespace std;
int clearBit(int num, int i)
{
 
    // Create the mask for the ith
    // bit unset
    int mask = ~(1 << i);
 
    // Return the updated value
    return num & mask;
}
int main(){
    int num, position;
    cout<<"Enter your number";
    cin>>num;
    cout<<"enter position";
    cin>>num;
    cout<<clearBit(num,position);



}