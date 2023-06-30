#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i,n, q, col, ele;
    cin>>n>>q; //reading the number of rows and test cases
    vector<vector<int>> matrix(n); //declaring a variable matrix with fixed number of rows
    
    for(i=0;i<n;i++)
    {
        cin>>col; //reading the number of columns
        while(col--) //read the elements until the col becomes 0 
        {
            cin>>ele;
            matrix[i].push_back(ele); //pushing the element to the i-th row
        }
    }
    
    while(q--)
    {
        cin>>ele>>col; //reading the row and col of testcases (didnt wanna use extra variables)
        cout<<matrix[ele][col]<<endl; //printing the output 
    }
    
    return 0;
}
