#include <bits/stdc++.h>
using namespace std;

int main()
{
    // string s = "Hello World";
    // cout<<s.size()<<endl;
    // cout<<s.capacity()<<endl;
    // cout << s << endl;
    // s.clear();
    // cout << s << endl;

    // string s= "Hello";
    // if (s.empty()==true)
    // {
    //    cout<<"Empty"<<endl;
    // } else {
    //     cout << "Not Empty";
    // }
    
    string s;
    cin>>s;
    s.resize(5);
    s.resize(8, 'X');
    cout<<s<<endl;

    
    return 0;
}