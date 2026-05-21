#include <iostream>
using namespace std;
int main() {
    double num1,num2;
    char choice;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    cout<< "Choose an operation to be performed (+, -, *, /): ";
    cin>>choice;
    switch(choice) {
        case '+':
            cout<<"Sum = "<<num1+num2<<endl;
            break;
        case '-':
            cout<<"Difference= "<<num1-num2<<endl;
            break;
        case '*':
            cout<<"Product = "<<num1*num2<<endl;
            break;
        case '/':
            if(num2!=0)
                cout<<"Division= "<<num1/num2<<endl;
            else
                cout<<"Division is not possible. Division by zero"<<endl;
            break;
        default:
            cout << "Invalid operation selected" << endl;
    }
    return 0;
}
