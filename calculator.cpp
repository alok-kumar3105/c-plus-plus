#include<iostream>
using namespace std;

int main(){

    cout<<endl;

    cout<<"HELLO DEAR!"<<endl;
    cout<<"WELCOME TO THE ALPHA CALCULATOR"<<endl;

    cout<<"Select one from the following to perform your operation"<<endl;

    cout<<"1. Enter 'a' to add "<<endl;
    cout<<"2. Enter 's' to subtract "<<endl;
    cout<<"3. Enter 'm' to multiply "<<endl;
    cout<<"4. Enter 'd' to divide "<<endl;
    cout<<"5. Enter 'e' to exit "<<endl;

    char x;
    cout<<"Enter your choice : "<<endl;
    cin>>x;

    int y;
    int z;

    if (x!='e'){

        cout<<"Enter first number : "<<endl;
        cin>>y;

        cout<<"Enter second number : "<<endl;
        cin>>z;

    }

    switch (x){

        case 'a':
        cout<<"Result of the following operation is : "<<y+z<<endl;
        main();
        break;

        case 's':
        cout<<"Result of the following operation is : "<<y-z<<endl;
        main();
        break;

        case 'm':
        cout<<"Result of the following operation is : "<<y*z<<endl;
        main();
        break;

        case 'd':
        cout<<"Result of the following operation is : "<<y/z<<endl;
        main();
        break;

        case 'e':
        cout<<"THANK YOU";
        break;

        default:
        cout<<"ERROR! No such choice "<<endl;
        break;

    }
}