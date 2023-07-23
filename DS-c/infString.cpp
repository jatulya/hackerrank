#include<iostream>
#include<string>
#include <algorithm>

using namespace std;

int check(string s)
{     
    return count(s.begin(),s.end(),'a');
}

int main()
{
    string s;
    long long n,op;
    int l;
    cin>>s>>n;
    
    l = s.size();    
    op = check(s)*(n/l);
    if (n%l!=0)
    {
        n = n%l;
        op = op + check(s.substr(0,n));
    }
    cout<<op;   
}
