#include<iostream>
using namespace std;

int main(){
    char op;
    int num1, num2;
    cout<<"hence iam your calculatore\n";
    cout<<"give me first number\n";
    cin>>num1;
    cout<<"give any operator to imply\n";
    cin>>op;
    cout<<"now give me another number for implement\n";
    cin>>num2;

    switch(op){
        case '+':
        cout<<num1+num2;
        break;

        case '-':
        cout<<num1-num2;
        break;

        case '*':
        cout<<num1*num2;
        break;

        case '/':
        cout<<num1/num2;
        break;

        default :
        cout<<"chl na lau** apna kaam kr";
        break;

    }
}