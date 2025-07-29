#include<iostream>
using namespace std;

int fact(int n){
    int fact = 1;
    for(int i = 1; i<=n; i++){
        fact = fact * i;
    }
    return fact;
}


int nCr(int n, int r){
    int numrator = fact(n);
    int denom = fact(r) * fact(n-r);
    return numrator/denom;
}


int main(){

    int n = 0, r = 0;

    cout<<"Enter number one: " << endl;
    cin>>n;
    cout<<"Enter number two: " << endl;
    cin>>r;

    int answer = nCr(n,r);
    cout<<"Answer is: " << answer;

    return 0;
}