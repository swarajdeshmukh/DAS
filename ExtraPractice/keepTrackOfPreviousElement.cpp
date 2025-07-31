#include<iostream>
using namespace std;

int main(){

    int arr[] = {0,0,1,1,2,2,2,2,4,4,5, 7, 8 };
    int sz = sizeof(arr) / sizeof(int);

    for(int i = 0; i<sz; i++){
        bool isVisited = false;
        for(int j = 0; j<i; j++){
            if(arr[j] == arr[i]){
                isVisited = true;
                break;
            }
            
        }
        if(isVisited){
            continue;
        }
        cout<<arr[i]<< " ";
    }


    return 0;
}