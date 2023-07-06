#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {

    vector<int> nums;
    stringstream ss;
    char ch;
    int num;
    ss.str(str); 
    
    while(ss >> num && ss >> ch)  // both the number and the comma are extracted separately
    {
        nums.push_back(num);
    }
    
    ss >> num; //extracting last number   
    nums.push_back(num);
    
    return nums;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }    
    return 0;
}