#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        int a[n];

        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }

        int smallestSum = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i+1; j < n; j++)
            {
               int sum = a[i] + a[j] + j - i;
               smallestSum = min(smallestSum, sum);
            }
            
        }
        
        cout << smallestSum << endl;
    }

    return 0;
}