#include <bits/stdc++.h>
using namespace std;
class Student 
{
    public:
    char name[100];
    int roll;
    int cls;
    char section;
};
int main()
{
    Student rahim;
    rahim.roll = 29;
    rahim.cls = 9;
    rahim.section = 'A';
    char nm[100] = "Rahim";
    strcpy(rahim.name, nm);

    Student karim;
    karim.roll = 29;
    karim.cls = 9;
    karim.section = 'A';
    char nm2[100] = "Rahim";
    strcpy(karim.name, nm2);

    cout << rahim.roll;
    return 0;
}