#include <string>
#include <deque>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;

deque<string> tagQue;       
map<string, string> attrs;

void insertAttrs( string name, string val)
{
    string full="";
    for (string & ele : tagQue)
        full += ele + ".";  //concatenating all tags acc to the query format
    full.pop_back(); //removing the last '.'
    full += "~" + name; //finally adding the attribute name
    attrs[full] = val; //making it a key and adding the value to it
           
}

int main() {
    
    int i,n, q;
    cin>>n>>q;
    char c, eq;
    string attName, tag, attVal, query;
        
    for(i=0;i<n;i++)
    {
        cin>>c; //reading the '<' character        
        if (cin.peek() != '/') //if it is a starting tag
        {   
            cin>>tag;        
            if (tag.back() == '>') //if the tag doesn't have any attributes
            {
                tag.pop_back(); //removing the '>'
                tagQue.push_back(tag); //pushing it to the tagQue
            }
            else //it has attributes
            {
                tagQue.push_back(tag);
                while(true) //we dont know how many attributes are there
                {
                    cin>>attName>>eq>>attVal;
                    if (attVal.back()=='>') //if it is the last attribute
                    {
                        attVal.pop_back(); //removing '>'
                        attVal.pop_back(); //removing the last "
                        attVal.erase(0,1); //removing the first "
                        insertAttrs(attName, attVal); //making it into the key-val 
                        break; //move on to the next tag input
                    } 
                    else //other attrs do not need to remove '>' first
                    {
                        attVal.pop_back(); 
                        attVal.erase(0,1); 
                        insertAttrs(attName, attVal); 
                    }
                }
            }
        }
        else //if it's an end tag
        {
            cin>>tag;
            tagQue.pop_back(); 
            // the last tag in the queue will be same as this tag, so remove it
        }       
    }
    
    for (i=0; i<q;i++)
    {
        cin>>query;
        if (attrs.find(query) != attrs.end())
            cout<<attrs[query]<<endl;
        else 
            cout<<"Not Found!"<<endl;
    }    
    return 0;
}
