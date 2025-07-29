#include<iostream>
using namespace std;
// ****
// ***
// **
// *
int main(){

    int num;
    cin>>num;
    
    int i = 1;
    while(i <= num){
        int j = 4;
        while(j >= i){
            cout<<"*";
            j--;
        }

        cout<<endl;
        i++;

    }



    return 0;
}