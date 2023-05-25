#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool isPalindrome = true;
    int left = 0, right = n - 1;

    while (left < right)
    {
        if (a[left] != a[right])
        {
            isPalindrome = false;
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome)
    {
       cout<<"YES";
    } else {
        cout<<"NO";
    }
    
    return 0;
}