#include<iostream>
using namespace std;

int main(){

    int num1, num2;
    char operation;
    char isExit = 'y';
    int sum = 0,sub = 0,div = 0, mul = 0;


    while(isExit != 'n'){
        cout<<"Enter number one: "<<endl;
        cin>>num1;
        cout<<"Enter number two: "<<endl;
        cin>>num2;
        cout<<"Enter what kind of opertion you want to perform (+,-,/,*): "<<endl;
        cin>>operation;

        switch( operation ){
        case '+':
            sum = num1 + num2;
            cout<<"Addtion is: "<<sum<<endl;
            break;
        case '-':
            sub = num1 - num2;
            cout<<"Substraction is: "<<sub<<endl;
            break;

        case '/':
            
            div = num1 / num2;
            cout<<"Division is: "<<div<<endl;
            break;
        case '*':
            mul = num1 * num2;
            cout<<"Multipication is: "<<mul<<endl;
            break;
        default:
            cout<<"Not valid case is selected!"<<endl;
        }

        
        cout<<"Do you want to exit y/n: ";
        cin>>isExit;

    }
    



    


    return 0;
}