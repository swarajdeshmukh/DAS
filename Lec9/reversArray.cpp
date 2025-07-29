#include<iostream>
using namespace std;

void swapArray(int arr[], int sz){
    int start = 0;
    int end = sz-1;
    
    while(start <= end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int sz){
     for(int i = 0; i< sz; i++){
        cout<<arr[i] << " ";
    }
}


int main(){

    int arr[] = {1,2,3,4,5,6}; //6,5,4,3,2,1
    int sz = 6;

    swapArray(arr, sz);
    printArray(arr, sz);

    return 0;
}