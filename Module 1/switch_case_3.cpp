#include<iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    switch(a%2) // 0 or 1
    {
        case 0:
            cout<<"Even"<<endl;
            break;
        default:
            cout<<"Odd"<<endl;
    }
    return 0;
}