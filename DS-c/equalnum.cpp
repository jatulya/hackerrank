#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;

int equalizeArray (vector<int> ar)
{
    int i,l = ar.size();
    int ar1[100];
    
    for (i=0; i<100; i++) //initializing all to zeroes
        ar1[i] = 0;   
    //if ar[i]=7, then ar1[7-1]=ar1[6] is incremented
    for (i=0; i<l; i++)  
        ar1[ar[i]-1]++;
    
    int max=0;
    for (i=0;i<100; i++)
        if (ar1[i]>max)
            max=ar1[i];
    
    return (l-max);
}

int main()
{
    int n,j, ele;
    vector<int> a;
    cin>>n;
    for(j=0 ;j < n;++j)
    {
        cin>>ele;
        a.push_back(ele);
    }
    cout<<equalizeArray(a)<<endl;
}