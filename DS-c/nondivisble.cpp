#include<iostream>
#include<vector>
using namespace std;
int nondivisble (int k, vector <int> array)
{
    int rem[k], i,ans=0;

    for (i=0; i<k; i++)
        rem[i] = 0;
    for (auto x: array)
        rem[x%k] += 1;
    
    if (rem[0]>0)
        ans++;
    for (i =1; i<k; i++)
    {
        if (rem[i] == 0) 
            continue;
        else if (i*2 == k)
            ans++;
        else{
            ans += max(rem[i], rem[k-i]);
            rem[i] = 0;
            rem[k-i] = 0;
        }
    }

    return ans;
}

int main ()
{
    int n, k, ele;
    vector<int> ar;
    cin>>n>>k;

    for (int i=0; i<n; i++)
    {
        cin>>ele;
        ar.push_back(ele);
    }
    cout<<nondivisble(k,ar);
}