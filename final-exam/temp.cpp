#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    float height;
    int age;

    Person(string name, float height, int age)
    {
        this->name = name;
        this->height = height;
        this->age = age;
    }
};

int main()
{
    Person *suzan = new Person("Suzan", 6, 30);
    Person *nizam = new Person("Nizam", 5, 35);

    if (suzan->age > nizam->age)
    {
        cout << "Suzan's age is greter: " << suzan->name << endl;
    }
    else if (suzan->age < nizam->age)
    {
        cout << "Nizam's age is greater: " << nizam->name << endl;
    }

    return 0;
}
