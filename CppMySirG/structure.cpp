#include<iostream>
#include<string.h>
using namespace std;

// struct Book{
//     int bookId;
//     char title[20];
//     float price;
// };

// struct Book inputBook();
// void displayBook(struct Book);

// int main(){
//     struct Book b1={1, "Atomic Habits", 200},b2;

//     b2.bookId = 2;
//     //use this function or method to insert value in array
//     strcpy(b2.title,"Rich Dad Poor Dad");
//     b2.price = 150;

//     struct Book b3;
//     b3 = inputBook();
//     displayBook(b3);
//     return 0;
// }

// struct Book inputBook(){
//     struct Book b;
//     cout<<"Enter book Id, Title, And Price: ";
//     cin>>b.bookId;
//     cin.ignore();
//     cin.getline(b.title,20);
//     cin>>b.price;
//     return b;
// }

// void displayBook(struct Book b){
//     cout<<b.bookId<<" "<<b.title<<" "<<b.price<<endl;
// }

//In c++ struct keyword is not compalsary 
struct Book{
    int bookId;
    char title[20];
    float price;
};

Book inputBook();
void displayBook(Book);

int main(){
    Book b1={1, "Atomic Habits", 200},b2;

    b2.bookId = 2;
    //use this function or method to insert value in array
    strcpy(b2.title,"Rich Dad Poor Dad");
    b2.price = 150;

    Book b3;
    b3 = inputBook();
    displayBook(b3);
    return 0;
}

Book inputBook(){
    Book b;
    cout<<"Enter book Id, Title, And Price: ";
    cin>>b.bookId;
    cin.ignore();
    cin.getline(b.title,20);
    cin>>b.price;
    return b;
}

void displayBook(Book b){
    cout<<b.bookId<<" "<<b.title<<" "<<b.price<<endl;
}

