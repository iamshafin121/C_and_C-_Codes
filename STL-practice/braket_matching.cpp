// Bracket Matching

#include <bits/stdc++.h>
using namespace std;

string isBalanced(string s){
    unordered_map<char,int> brakets = {{'[',-3}, {'{',-2}, {'(',-1}, {')',1}, {'}',2}, {']',3}};
    stack<char> st;
    for(char c : s){
        if(brakets[c]<0){
            st.push(c);
        }
        else{
            if(st.empty()) return "NO";
            if((brakets[c] + brakets[st.top()]) != 0) return "NO";
            st.pop();
        }
    }
    if(st.empty()) return "YES";
    return "NO";
}

int main(){

    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        cout << isBalanced(s) << endl;
    }

    return 0;
}