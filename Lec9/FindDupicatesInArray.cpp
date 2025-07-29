#include<iostream>
using namespace std;

int main(){

    int arr[] = {4,3,2,7,8,2,3,1};
    int sz = 8;
    int count = 0;

    for(int i = 0; i<sz; i++){
        count == 0;
        for(int j = i+1; j<sz; j++){
            if(arr[i] == arr[j]){
                count++;
            }
           
        }
        if(count == 1){
            cout<<arr[i];
            
        }
    }


    return 0;
}