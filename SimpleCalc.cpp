#include<iostream>
using namespace std;

int main(){
    int a,b;
    char op;
        
        cout<<"Select operation:";
        cout<<"a for addition:"<<endl;;
        cout<<"s for substraction:"<<endl;
        cout<<"m for multiplication:"<<endl;
        cout<<"d for division:"<<endl;
        cin>>op;
        cout<<"Enter numbers:";
        cin>>a>>b;

switch (op)
{
case 'a':
    cout<<a+b;
    break;
case 's':
    cout<<a-b;
    break;
case 'm':
    cout<<a*b;
    break;
case 'd':
    cout<<a/b;
    break;

default:
    cout<<"Invalid Operator!!";
    break;
}
return 0;
}