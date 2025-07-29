#include<iostream>
using namespace std;


// power of an number using function
int power(int a, int b){
    int ans = 1;
    for(int i = 1; i<=b; i++){
        ans = ans * a;

    }
    return ans;
}

int main(){

    int a = 0, b = 0;
    cout<<"Enter number one: "<< endl; 
    cin>>a;

    cout<<"Enter number two: "<< endl; 
    cin>>b;

    int answer = power(a,b);
    cout<<"Power is: " << answer;
    return 0;
}