#include<iostream>
using namespace std;

int main(){

    int number;
    cout<< "Enter  an number:\n";
    cin>> number;

    //5
    int i = 2;
    while(i < number){
        if(number % i == 0){
            cout<<"Not an prime for"<<i<<endl;

        }
        else{
            cout<<"prime number for"<<i<<endl;
        }
        i++;
    }

    return 0;
}