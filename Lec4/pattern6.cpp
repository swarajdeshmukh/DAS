#include<iostream>
using namespace std;
// 1
// 22
// 333
// 4444
int main(){

    int num;
    cin>> num;

    int i = 1;
    while(i <= num){
        int j = 1;
        while(j <= i){
            cout<<i;
            j++;
        }

        cout<<endl;
        i++;
    }

    return 0;
}