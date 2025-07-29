#include<iostream>
using namespace std;

int peakOfMountain(int arr[], int sz){
    int start = 0;
    int end = sz - 1;
    int mid = start + (end - start) / 2;

    while(start < end){
        if(arr[mid] < arr[mid + 1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }

        mid = start + (end - start) / 2;
    }
    return start;
}

int main(){

    int arr[] = {3,4,5,1};
    int sz = sizeof(arr) / sizeof(int);

    int ans = peakOfMountain(arr, sz);
    cout<<"Value is: "<< ans <<endl;
    

    return 0;
}