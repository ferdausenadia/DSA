#include<iostream>
using namespace std;
int squareRoot(int number){
    int start = 0;
    int end= number;
    int ans=-1;
    long long int mid= start + (end-start)/2;
    while(start<=end){
        long long int square = mid*mid;
        if(square>number){
            end= mid-1;
        }else if(square<number){
            ans=mid;
            start = mid+1;
        }else if(square==number){
            return mid;
        }

        mid= start + (end-start)/2;



    }
    return ans;
}
double morePrecision(int number, int precision, int tempSol){
    double factor = 1;
    double ans =tempSol;
    for(int i =0; i<precision;i++){
        factor= factor/10;
        for(double j = ans; j*j<number;j=j+factor){
            ans =j;

        }
    }
    return ans;
}
int main(){
    int number;
    cout<<"enter number";
    cin>>number;
    int tempSol= squareRoot(number);
    //cout<<squareRoot(number);
    cout<<"ans is "<<morePrecision(number, 3, tempSol);

    

}