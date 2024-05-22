/*Program to form simple calculator(just two digits)*/
#include<iostream>
using namespace std;
class Calculator
{
private:
    float num1,num2;
public:
    void setinput(float n1, float n2)
    { num1=n1;
      num2=n2; }
    float add()
    { return num1+num2; }
    float substract()
    { return num1-num2; }
    float multiply()
    { return num1*num2; }
    float divide()
    { if (num2==0) { cout<<"Error as it is indeterminate when something is divided by zero!";
       return 0;}
        return num1/num2; }
};
  int main() {
  Calculator c1;
  char op;
  float x,y;
  cout<<"Enter two numbers:";
  cin>>x>>y;
  cout<<endl<<"Enter operator to use(+,-,*,/):";
  cin>>op;
  c1.setinput(x , y);
  switch(op){
    case '+':
        cout<<x<<"+"<<y<<"="<<c1.add();
        break;
    case '-':
        cout<<x<<"-"<<y<<"="<<c1.substract();
        break;
    case '*':
        cout<<x<<"*"<<y<<"="<<c1.multiply();
        break;
    case '/':
        cout<<x<<"/"<<y<<"="<<c1.divide();
        break;
    default:
        cout<<"Error! Unidentified operator";
        break;
            }
   return 0;
}
