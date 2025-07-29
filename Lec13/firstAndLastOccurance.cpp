#include<iostream>
using namespace std;
int firstOcc(int arr[], int sz, int key){
    int start = 0;
    int end = sz -1;
    int mid = start + (end - start) /2;
    int ans = -1;

    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            end = mid -1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else if(key < arr[mid]){
            end = mid - 1;
        }

        mid = start + (end - start) /2;
    }
    return ans;
}

int lastOcc(int arr[], int sz, int key){
    int start = 0;
    int end = sz - 1;
    int mid = start + (end - start) /2;
    int ans = 0;

    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else if(key < arr[mid]){
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int main(){

    int arr[] = {1,2,3, 4, 3, 3, 3, 4,7,9};
    int sz = sizeof(arr) / sizeof(int);
    int key = 3;

    int ans1 = firstOcc(arr, sz, key);
    int ans2 = lastOcc(arr, sz, key);
    cout<<"First occurance of element is on index is: " << ans1 << endl;
    cout<<"Last occurance of element is on index is: " << ans2 << endl;

    //Total number of occurance  
    //(last index - first index) + 1

    return 0;
}