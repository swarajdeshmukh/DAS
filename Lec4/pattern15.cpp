#include<iostream>
using namespace std;
// A
// BC
// CDE
// DEFG 

int main(){

    int num;
    cin>>num;
 
    int i = 1;

    while(i <= num){
        int j = 1;
        while(j <= i){
            char ch = ('A' + i + j - 2);
            cout<<ch;
            j++;
        }

        cout<<endl;
        i++;
    }


    return 0;
}