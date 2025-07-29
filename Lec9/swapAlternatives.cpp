#include<iostream>
using namespace std;

//logic 1
// int main(){

//     int arr [] = {1,2,3,4,5,6};
//     int sz = 6;
   
//     for(int i = 0, j = i+1; i<sz && j<sz; i+=2, j+=2){
//        swap(arr[i], arr[j]);
//     }

//     for(int i = 0; i<sz; i++){
//         cout<<arr[i]<<" ";
//     }
    
//     return 0;
// }
void printElem(int arr[], int sz){
    for(int i = 0; i<sz; i++){
        cout<<arr[i]<<" ";
    }
}

void swapAlternative(int arr[], int sz){
    for(int i = 0; i<sz; i+=2){
        if(i+1 < sz){
            swap(arr[i], arr[i+1]);
        }
    }
}

int main(){

    int arr [] = {1,2,3,4,5,6};
    int sz = 6;
   
   swapAlternative(arr, sz);
   printElem(arr, sz);
    
    return 0;
}