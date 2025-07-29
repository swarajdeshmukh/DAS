#include<iostream>
using namespace std;


int main(){

    int arr[] = {2,4,7,2,7};
    int sz = 5;

    int ans = 0;
    for(int i = 0; i<sz; i++){
        ans = ans ^ arr[i];
    }

    cout<<ans<<endl;
    return 0;
}