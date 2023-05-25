#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    string section;
    int math_marks;
    string cls;

    Student(string n, int r, string s, int m, string c)
    {
        name = n;
        roll = r;
        section = s;
        math_marks = m;
        cls = c;
    }
};

int main()
{
    Student student1("Jony", 12, "A", 90, "IX");
    Student student2("Rony", 12, "A", 80, "IX");
    Student student3("Bony", 12, "A", 70, "IX");

    if (student1.math_marks > student2.math_marks && student1.math_marks > student3.math_marks)
    {
        cout << "Highest math_marks: " << student1.math_marks << ", Name: " << student1.name << endl;
    }
    else if (student2.math_marks > student1.math_marks && student1.math_marks > student3.math_marks)
    {
        cout << "Highest math_marks: " << student2.math_marks << ", Name: " << student2.name << endl;
    }
    else
    {
        cout << "Highest math_marks: " << student3.math_marks << ", Name: " << student3.name << endl;
    }

    return 0;
}