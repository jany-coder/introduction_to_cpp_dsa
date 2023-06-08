#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string s, x;
        cin >> s >> x;
        string output;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == x[0])
            {
                int j;
                for (j = 0; j < x.size(); j++)
                {
                    if (s[i + j] != x[j])
                    {
                        break;
                    }
                }
                if (j == x.size())
                {
                    output = output + '$';
                    i += x.size() - 1;
                }
                else
                {
                    output = output + s[i];
                }
            }
            else
            {
                output = output + s[i];
            }
        }

        cout << output << endl;
    }

    return 0;
}
