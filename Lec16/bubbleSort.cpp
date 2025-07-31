#include<iostream>
using namespace std;

int main(){

    int arr[] = {10, 1, 7, 6, 14, 9};
    int sz = sizeof(arr) / sizeof(int);
    cout<<sz<<endl;

    for(int i = 0; i<sz-1; i++){
        for(int j = 0; j < sz-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int i = 0; i<sz; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}