#include<iostream>
using namespace std;
bool isPossible(int arr[], int student, int size, int mid){
    int studentCount = 1;
    int totalPage =0;
    for(int i =0; i<size;i++){
        if(totalPage+arr[i]<=mid){
            totalPage+=arr[i];
        }else
        {
            studentCount ++;
            if(studentCount>student || arr[i]>mid){
                return false;
            }
            totalPage+=arr[i];

        }  
        if(studentCount>student){
                return false;
        }

        }
                    return true;


    }
    
int minimumPages(int arr[], int size, int student){
    int start = 0;
    int sum =0;
    int ans = -1;
    for(int i =0; i<size; i++){
        sum +=arr[i];
    }
    int end = sum;
    int mid= start +(end-start)/2;
    while(start<=end){
        if(isPossible(arr, student,size, mid)){
        ans = mid;
        end= mid-1;
    }
    else{
        start = mid+1;

    }
    mid = start+(end-start)/2;

    }
    return ans;


}
int main(){
    int size= 4;
    int arr[4]={10,20,30,40};
    int student= 2;
    cout<<minimumPages(arr,size, student);

}