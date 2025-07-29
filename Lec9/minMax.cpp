#include<iostream>
#include <climits>
using namespace std;

int maxElement(int arr[], int sz){
    int maxE = INT_MIN; //-2147483648  initalize 

    for(int i = 0; i<sz; i++){
        if(arr[i] > maxE){
            maxE = arr[i];
        }
    }
    return maxE;
}

int minElement(int arr[], int sz){
    int minE = INT_MAX; //2147483647 initalize

    for(int i = 0; i<sz; i++){
        if(arr[i] < minE){
            minE = arr[i];
        }
    }
    return minE;

}

int main(){

    int arr[] = {4,7,2,9,1};
    int sz = 5;

    int max = maxElement(arr, sz);
    int min = minElement(arr, sz);

    cout<<"Max Element is : " << max << endl; 
    cout<<"Min Element is : " << min << endl; 

    return 0;
}