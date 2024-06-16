#include <bits/stdc++.h>
using namespace std;

int is_strong(string s){
    for(int i=1; i<s.length(); i++){
        if(s[i] < s[i-1]) return 0;
    }

    return 1;

}

int main(){

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        if(is_strong(s)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}