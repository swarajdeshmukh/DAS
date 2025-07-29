#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;

    while(start <= end){
        if(key == arr[mid]){
            return mid;
        } 

        if(key < arr[mid]){
            end = mid -1;
        } 

        if(key > arr[mid]){
            start = mid + 1;
        } 

        mid = start + (end - start) / 2;

    }
    return -1;
}

int main(){

    int evenArr [] = {2,4,6,9,12,15};
    int oddArr [] = {3,5,6,8,9};
    int size = sizeof(evenArr) / sizeof(int);

    int ans1 = binarySearch(evenArr, size, 10);
    int ans2 = binarySearch(oddArr, size, 10);

    cout<<ans1<<endl;
    cout<<ans2<<endl;

    return 0;
}