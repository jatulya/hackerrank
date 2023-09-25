#include<iostream>
#include<vector>
using namespace std;

int jumpingOnClouds (int n, vector<int> c)
{
    int i=0, jumps=0;

    while (i<n-1)
    {
        if (c[i+2]!=1)
            i += 2;
        else
            i += 1;
        jumps++;
        cout<<"Jump "<<jumps<<"at "<<i;
    }
    return jumps;
}

int main()
{
    int ele,n;
    vector<int> s;
    cin>>n;
    for(int i = 0 ; i < n ; ++i){
        cin>>ele;
        s.push_back(ele);
    }
    cout<<jumpingOnClouds(n , s)<<endl;
}