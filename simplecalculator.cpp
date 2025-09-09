#include<iostream>
using namespace std;
int main(){
    double num1,num2,result;
    char op;
    cout<<"enter first number:";
    cin>>num1;
    cout<<"enter operator(+,-,*,/):";
    cin>>op;
    cout<<"enter second number:";
    cin>>num2;
    if(op=='+'){
        result=num1+num2;
        cout<<"result="<<result;
    }
    else if(op=='-'){
        result=num1-num2;
        cout<<"result="<<result;
    }
    else if(op=='*'){
        result=num1*num2;
        cout<<"result="<<result;
    }
    else if(op=='/'){
        if (num2==0){
            cout<<"error:division by zero not allowed!";
        } else{
            result=num1/num2;
            cout<<"result="<<result;
        }
    }
    else{
        cout<<"invalid operator!";
    }
    cout<<endl;
    return 0;
}
