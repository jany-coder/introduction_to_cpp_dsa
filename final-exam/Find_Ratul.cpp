#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);

    string w;
    bool flag = false;

    while (ss >> w)
    {
        if (w == "Ratul")
        {
            flag = true;
            break;
        }
        else
        {
            flag = false;
        }
    }

    if (flag == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}