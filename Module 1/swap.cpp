#include<iostream>
#include<utility>
using namespace std;
// void my_swap(int *a,int *b)
// {
//     int tmp=*a;
//     *a=*b;
//     *b=tmp;
// }
int main()
{
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}