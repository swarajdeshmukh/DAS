#include<iostream>
using  namespace std;

int main(){

    int arr[] = {64,25,12,22,11};
    int size = sizeof(arr) / sizeof(int);

    for(int i = 0; i < size-1; i++){
        int minimumIndex = i;
        for(int j = i+1; j < size; j++){
            if(arr[j] < arr[minimumIndex]){
                minimumIndex = j;
            }
        }
        swap(arr[minimumIndex], arr[i]);
    }

    for(int i = 0; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}