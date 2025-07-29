#include<iostream>
using namespace std;
// A
// BB
// CCC
int main(){

    int num;
    cin>>num;

    int i = 1;
    char ch = 'A';

    while(i <= num){
        int j = 1;
        while(j <= i){
            cout<<ch;
            j++;
        }
        cout<<endl;
        ch++;
        i++;
    }

    return 0;
}