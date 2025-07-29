#include<iostream>
using namespace std;

// 1234
// 1234
// 1234
// 1234

// 4321
// 4321
// 4321
// 4321

int main (){

    int num;
    cin>>num;

    int i = 1;

    while(i <= num){
        int j = 1;
        while (j <= num)
        {
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }

    // while(i <= num){
    //     int j = num;
    //     while (j >= 1)
    //         {
    //             cout<<j;
    //             j--;
    //         }
    //         cout<<endl;
    //         i++;
    // }

    return 0;
}