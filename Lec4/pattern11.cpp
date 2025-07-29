#include<iostream>
using namespace std;

//ABC
//ABC
//ABC
//ABC

int main(){

    int num;
    cin>>num;

    int i = 0;
    while(i <= num){

        int j = 1;
        while(j <= num){
            char ch = 'A' + j - 1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}