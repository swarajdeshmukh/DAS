#include<iostream>
using namespace std;
// ABC
// DEF 
// GHI

int main(){
    
    int number;
    cin>>number;

    int row = 1;
    char ch = 'A';
    while(row <= number){
        int column = 1;
        
        while(column <= number){
            cout<<ch;
            ch++;
            column++;
        }

        cout<<endl;
        row++;
    }

    return 0;
}