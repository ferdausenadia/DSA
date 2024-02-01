/*
Problem statement
You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order. You have to find the intersection of these two arrays.

Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.

Note :
1. The length of each array is greater than zero.
2. Both the arrays are sorted in non-decreasing order.
3. The output should be in the order of elements that occur in the original arrays.
4. If there is no intersection present then return an empty array.
*/
#include<iostream>
using namespace std;
int arrayIntersection(int arr1[],int size1, int arr2[], int size2){
    for(int i=0;i<size1;i++){
        for(int j =0;j<size2;j++){
            if(arr1[i]<arr2[j]){
                break;

            }
                if(arr1[i]==arr2[j]){
                    cout<<arr1[i]<<endl;
                    arr2[j]=-100;
                    break;
                    }
            }

        }
    }
    

int main(){

    int size1= 6;
    int size2= 4;
    int arr1[6]={1, 2, 2, 2, 3, 4};
    int arr2[4]={2, 2, 3, 3};
    cout<<arrayIntersection(arr1,size1, arr2, size2);
}