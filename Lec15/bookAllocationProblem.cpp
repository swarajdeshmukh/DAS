#include<iostream>
using namespace std;

bool isPossible(int arr[], int sz, int numOfStudent, int mid){
    int studentCount = 1;
    int pageSum = 0;

    for(int i = 0; i<sz; i++){
        if(pageSum + arr[i] <=mid){
            pageSum += arr[i];
        }
        else{
            studentCount++;
            if(studentCount > numOfStudent || arr[i] > mid){
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}



int main(){

    int arr[] = {10, 20, 30, 40};
    int sz = sizeof(arr) / sizeof(int);

    
    int s = 0;
    int sum = 0;
    for(int i = 0; i<sz; i++){
        sum += arr[i];
    }

    int e = sum;
    int ans = -1;
    int mid = s + (e - s) / 2;
    int numOfStudent = 2;

    while(s<=e){
        if(isPossible(arr, sz, numOfStudent, mid)){
            ans = mid;
            e = mid -1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s) / 2;
    }
   
    cout<<"Ans is: " << ans <<endl;

    return 0;
}