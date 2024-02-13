#include<iostream>
using namespace std;
int squareRoot(int number){
    int start = 0;
    int end= number;
    long long int mid= start + (end-start)/2;
    while(start<=end){
        long long int square = mid*mid;
        if(square>number){
            end= mid-1;
        }else if(square<number){
            start = mid+1;
        }else if(square==number){
            return mid;
        }

        mid= start + (end-start)/2;



    }
}
int main(){
    int number =25;
    cout<<squareRoot(number);
    

}