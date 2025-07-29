#include<iostream>
using namespace std;

//Arithmetic progression
//a.p = (3 * n + 7)
//intput n = 3
//output = 16

int arithmeticProgression(int number){
    int ap = ((3 * number) + 7);
    return ap;
}

int main(){

    int number = 0;
    cout<<"Enter number: "<< endl;
    cin>>number;

    //Function calling
    int answer = arithmeticProgression(number);
    cout<<"Aritmetic Progression is: "<< answer <<endl;

    return 0;
}