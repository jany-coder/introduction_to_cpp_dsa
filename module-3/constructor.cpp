#include <bits/stdc++.h>
using namespace std;
class Student 
{
    public:
    char name[100];
    int roll;
    int cls;
    char section;

    Student(int r, char s, int c, char* n) 
    {  
        cout<<"I m called autometically";
        roll=r;
        section = s;
        cls = c;
        strcpy(name, n);

    }
};
int main()
{
    Student rahim( 20 , 'A', 7, "Rahim");
    Student karim( 29 , 'B', 9, "Karim");

    cout<<karim.roll<<endl;
    cout<<karim.section<<endl;
    cout<<karim.cls<<endl;
    cout<<karim.name<<endl;
    return 0;
}