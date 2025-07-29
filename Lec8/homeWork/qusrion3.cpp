#include<iostream>
using namespace std;

int main(){

    int amount = 0;
    cout<<"Enter an amount: "<<endl;
    cin>>amount;

    int notes100 = 0, notes50 = 0, notes20 = 0, notes10 = 0, notes1 = 0;
    int remaining = amount;


    switch(1){
        case 1:
            notes100 = remaining / 100;
            remaining = remaining % 100;
            cout<<"100 rupees notes: "<< notes100 << endl;
        case 2:
            notes50 = remaining / 50;
            remaining = remaining % 50;
            cout<<"50 rupees notes: "<< notes50 << endl;
        case 3:
            notes20 = remaining / 20;
            remaining = remaining % 20;
            cout<<"20 rupees notes: "<< notes20 << endl;
        case 4:
            notes10 = remaining / 10;
            remaining = remaining % 10;
            cout<<"10 rupees notes: "<< notes10 << endl;
        case 5:
            notes1 = remaining / 1;
            remaining = remaining % 1;
            cout<<"1 rupees notes: "<< notes1 << endl;
            break;
        default:
            cout<<"Enter valid amount!";
            
    }

    return 0;
}