#include<iostream>
using namespace std;
// AAAA
// BBBB
// CCCC
// DDDD
int main(){

    int num;
    cin>>num;

    int i = 1;

    while(i <= num){

        int j = 1;
        char ch = 'A' + i - 1;
        while(j <= num){
            cout<<ch;
            j++;
        }

        cout<<endl;
        i++;
    }

    return 0;
}