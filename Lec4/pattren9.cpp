#include<iostream>
using namespace std;
// 1
// 21
// 321
// 4321

int main(){

    int num;
    cin>>num;

    int i = 1;
    while(i <= num){
        int j = 1;
        int val = i;

        while(j <= i){
            cout<<val;
            val--;
            j++;
        }

        cout<<endl;
        i++;

    }

    return 0;
}