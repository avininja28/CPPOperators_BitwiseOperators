#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter Number 1: ";
    cin>>num1;
    cout<<"Enter Number 2: ";
    cin>>num2;
    float add,sub,prod,quot;
    bool logand,logor;
    int bitandch,bitorch,bitxorch;
    logand=num1&&num2;
    logor=num1||num2;
    bitandch=num1&num2;
    bitorch=num1|num2;
    bitxorch=num1^num2;
    add=num1+num2;
    sub=num1-num2;
    prod=num1*num2;
    quot=num1/num2;
    cout<<"The sum is: "<<add<<endl;
    cout<<"The difference is: "<<sub<<endl;
    cout<<"The product is: "<<prod<<endl;
    cout<<"The quotient is: "<<quot<<endl;
    cout<<"AND Logical: "<<logand<<endl;
    cout<<"AND Bitwise: "<<bitandch<<endl;
    cout<<"OR Logical: "<<logor<<endl;
    cout<<"OR Bitwise: "<<bitorch<<endl;
    cout<<"XOR: "<<bitxorch<<endl;
    return 0;
}