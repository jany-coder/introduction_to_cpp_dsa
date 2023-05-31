#include <bits/stdc++.h>
using namespace std;

namespace Rakib
{
    int age = 24;
    void hello()
    {
        cout << "Rakib namespace";
    }

}

namespace Sakib
{
    int age2 = 24;
    void hello2()
    {
        cout << "Rakib namespace";
    }

}

using namespace Rakib;
int main()
{
    cout << age << endl;
    cout << Sakib::age2 << endl;
    return 0;
}