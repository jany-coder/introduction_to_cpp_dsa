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
        roll=r;
        section = s;
        cls = c;
        strcpy(name, n);

    }
};

int main()
{
    char name[100] = "Rahim";
    Student * rahim= new Student(5, 'A', 8, name);
    // cout<<(*rahim).name<<endl;
    // cout<<(*rahim).roll<<endl;
    // cout<<(*rahim).section<<endl;
    // cout<<(*rahim).cls<<endl;

    cout<<rahim->cls<<endl;
    cout<<rahim->name<<endl;

    //delete object
    delete rahim;

    return 0;
}