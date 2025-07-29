#include<iostream>
using namespace std;
// 123
// 456
// 789

int main(){

    int num;
    cin>>num;

    int i = 1;
    int count = 1;
    while(i <= num){
        int j = 1;
        while(j <= num){
            cout<<count;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}