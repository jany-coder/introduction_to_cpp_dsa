#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string w;
    while (ss >> w)
    {
        cout << w << endl;
    }

    cout << w.length();
    return 0;
}