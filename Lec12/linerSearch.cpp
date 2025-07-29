#include<iostream>
using namespace std;

bool linerSearch(int arr[], int sz, int find){

    for(int i = 0; i< sz; i++){
        if(arr[i] == find){
            return true; // present
        }
    }
    return false; // not present
}

int main(){

    int arr[] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
    int sz = 10;
    int find = 7;

    bool ans = linerSearch(arr, sz, find);
    
    if(ans){
        cout<<"Element is present";
    }else{
        cout<<"Element is not present";
    }
    return 0;
}