//set ith bit
//1==>1
//0==>1
#include<iostream>
using namespace std;
int setBit(int num, int i)
{
    // Sets the ith bit and return
    // the updated value
    return num | (1 << i);
}
int main(){
    int num, position;
    cout<<"enter number";
    cin>>num;
    cout<<"enter position";
    cin>>position;
    
    cout<<setBit(num, position);

}