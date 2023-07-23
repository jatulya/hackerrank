#include<iostream>
#include<string>
#include <algorithm>

using namespace std;

int check(string s)
{
    if (s.size()==1)
    {
        if (s=="a")
            return 1;
        else
            return 0;
    }        
    return count(s.begin(),s.end(),'a');
}

int main()
{
    string s;
    int n,l,op;
    cin>>s>>n;
    
    l = s.size();
    //op = check(s)*(n/l);
    cout<<op;
    if (n%l!=0)
    {
        n = n%l;
        op = op + check(s.substr(0,n));
    }
    cout<<op;
    
}
