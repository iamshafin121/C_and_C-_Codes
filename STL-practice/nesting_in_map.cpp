#include <bits/stdc++.h>
using namespace std;

int main(){

    map<pair<string,string>,vector<int>> m;

    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string s1, s2;
        int x;
        cin >> s1 >> s2 >> x;

        for(int i=0; i<x; i++){
            int v;
            cin >> v;
            m[{s1,s2}].push_back(v);
        }
    }


    for(auto x : m){
        cout << x.first.first << " " << x.first.second  <<  " = " ;
        for(auto y : x.second){
            cout << y << " ";
        }
        cout << endl;
    }
    return 0;
}