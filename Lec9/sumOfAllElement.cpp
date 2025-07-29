#include<iostream>
using namespace std;


int main(){

    int arr[] = {1,2,3,4,5,6,7,8,9};
    int sz = 9;

    int sum = 0;
    for(int i = 0; i<sz; i++){
        sum = sum + arr[i];
    }
    cout<<"Sum of an given array is: " << sum << endl;
    return 0;
}