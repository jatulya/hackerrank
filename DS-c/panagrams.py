'''include <bits/stdc++.h>

using namespace std;

string pangrams(string s) {
    int i, len, ar[26];
    string toreturn = "pangram";
    
    transform(s.begin(),s.end(),s.begin(), ::tolower);
    for (i=0; i<26; i++)
        ar[i] = 0;
    len = s.length();
    
    for (i=0; i<len; i++)
    {
        if (s[i]==' ')
            continue;
        ar[int(s[i])-65]++;
    }
    
    for (i=0;i<26; i++)
    {
        if (ar[i]==0)
        {
            toreturn = "not pangram";
            break;
        }
    }
    
    return toreturn;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
'''
#!/bin/python3

import os

def pangrams(s):
    s = s.lower()
    alpha = []
    for i in range(26):
        alpha.append(0)
    for letter in s:
        if letter==' ':
            continue
        #print(ord(letter)-97)
        alpha[ord(letter)-97] += 1
    for i in alpha:
        if i==0:
            return "not pangram"
    return "pangram"

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    result = pangrams(s)

    fptr.write(result + '\n')

    fptr.close()
