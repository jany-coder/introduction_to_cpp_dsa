#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
       cin>>a[i];
    }

    int maximum = a[0]; // Assume the first element as the maximum

    for (int i = 1; i < n; ++i) {
        if (a[i] > maximum) {
            maximum = a[i];
        }
    }
    
    cout<<maximum;
    
    return 0;
}