#include<iostream>
#include<math.h>
using namespace std;

int main(){

    //101 binary number is given

    int num;
    cin>>num;

    int ans = 0;
    int i = 0;
    while(num!=0){

        int digit = num % 10;

        if(digit == 1){
            ans = ans + pow(2, i);
        }

        i++;
        num = num/10;

    }
    cout<<"Answer is " <<ans;
    return 0;
}