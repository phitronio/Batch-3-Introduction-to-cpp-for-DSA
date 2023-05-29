#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;

        Student(int r,char s,int c,char* n)
        {
            roll=r;
            section=s;
            cls=c;
            strcpy(name,n);
        }
};
Student fun()
{
    char name[100]="Rahim Ullah";
    Student r(29,'C',7,name);
    return r;
}
int main()
{
    Student rahim=fun();

    cout<<rahim.name<<endl;
    cout<<rahim.roll<<endl;
    cout<<rahim.section<<endl;
    cout<<rahim.cls<<endl;
    return 0;
}