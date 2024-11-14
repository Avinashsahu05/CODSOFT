#include<iostream>45456
using namespace std;
int main(){
    double num1,num2;
    char op;
    cout<<"Enter the first number : ";
    cin>>num1;
    cout<<"Enter the operation (+, -, *, /): ";
    cin>>op;
    cout<<"enter the second number : ";
    cin>>num2;
    switch(op){
        case'+':
        cout<<"Result: "<< num1 <<"+" <<num2 <<" = "<< num1+num2 <<endl;
        break;
        case'-':
        cout<<"Result: " <<num1 <<"-"<< num2 << "=" << num1-num2 <<endl;
        break;
        case'*':
        cout<<"Result: " <<num1 <<"*"<< num2 << "=" << num1*num2 <<endl;
        break;
        case'/':
        if(num2 !=0){
        cout<<"Result: "<<num1<<" / " << num2 <<"="<< num1/num2 <<endl;
        }else{
        cout<<"Error: Divisioin by Zero is not allowed.\n";
        }
        break;
        default:
        cout<<"Invalid operation. Please enter va valid operation.\n";
        
    }
    return 0;
}