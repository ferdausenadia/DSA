/* Problem statement
You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.

For example:

Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.
Note :
A duplicate number is always present in the given array. */	
#include<iostream>
using namespace std;
int findDuplicate(int arr[]){
    int ans =0;
for(int i=0;i<6;i++){
        ans= ans ^ arr[i];
        cout<<i<<" "<<ans<<endl;

    }
    for(int i=1;i<6;i++){
        ans = ans^i;
        cout<<i<<" "<<ans<<endl;

    }
    return ans;
}
int main(){
int arr[6]={1,1,2,3,4,5};
cout<<findDuplicate(arr);


}