#include<iostream>
#include<string>
using namespace std;


int main(){

    int num;
    cin>>num;

    string ans = "";
    int i = 0;

    while(num!=0){

        int bit = num&1;
        ans = to_string(bit) + ans;
        num = num>>1;
        i++;

    }

    cout<<"Answer is: "<< ans;
    return 0;
}