#include<iostream>
using namespace std;

int getPivot(int arr[], int sz){
    int start = 0;
    int end = sz-1;
    int mid = start + (end - start) / 2;

    while(start < end){
        if(arr[mid] >= arr[0]){
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

    int arr[] = {3,8,10,17,1};
    int sz = sizeof(arr) / sizeof(int);

    cout<<"Pivot is: "<< getPivot(arr, sz) <<endl;

    return 0;

}