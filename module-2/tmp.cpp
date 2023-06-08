#include <bits/stdc++.h>
using namespace std;

class StaticClass
{
public:
    void printGreetings()
    {
        cout << "Happy New Year!!!";
    }
};

StaticClass &getObject()
{
    static StaticClass staticObject;
    return staticObject;
}

int main()
{
    StaticClass obj = getObject();
    obj.printGreetings();

    return 0;
}
