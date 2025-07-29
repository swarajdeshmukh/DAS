#include<iostream>
using namespace std;

//very important qustion
int getPivot(int arr[], int sz){
    int start = 0;
    int end = sz - 1;
    int mid = start + (end - start) /2;

    while(start < end){
        if(arr[mid] > arr[0]){
            start = mid + 1;
        }
        else{
            end = mid;
        }
         mid = start + (end - start) /2;
    }
    return start;
}

int binarySearch(int arr[], int s, int e, int key){
    int start = s;
    int end = e;
    int mid = start + (end - start) / 2;

    while(start <= end){
        if(key == arr[mid]){
            return mid;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else if(key < arr[mid]){
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main(){
    int arr[] = {7,9,1,2,3};
    int sz = sizeof(arr) / sizeof(int);
    int key = 10;
    int pivot = getPivot(arr, sz);
    int ans = 0;

    if(key >= arr[pivot] && key <= arr[sz-1]){
        ans = binarySearch(arr, pivot , sz-1, key);
    }
    else{
        ans = binarySearch(arr, 0, pivot - 1, key);
    }

    cout<<"And is: " << ans << endl;
    return 0;
}