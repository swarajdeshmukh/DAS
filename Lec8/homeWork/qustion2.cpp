#include<iostream>
using namespace std;

//Total numbers of set bits in a&b are
int setBit(int num1, int num2){
    int count = 0;
    while(num1 != 0 || num2 !=0){
        int n1 = num1&1;
        int n2 = num2&1;

        if(n1 == 1)count++;
        if(n2 == 1)count++;

        num1 = num1 >> 1;
        num2 = num2 >> 1;
    }
    return count;
}

int main(){
    int num1 = 0, num2 = 0;
    int answer;
    cout<<"Enter number one: " <<endl;
    cin>>num1;
    cout<<"Enter number two: " <<endl;
    cin>>num2;
    answer = setBit(num1, num2);
    cout<<"Total sets of Bits are: "<< answer << endl;
    return 0;
}