#include <bits/stdc++.h>
using namespace std;

int main(){

    // vector<int> v(1);
    // v[0] = 10;
    // cout << v[0] << endl;

    // vector<int> v;
    // v.push_back(10);
    // cout << v[0] << endl;


    // vector<int> v;
    // for(int i=0; i<3; i++){
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }
    // for(int i=0; i<3; i++){
    //     cout << v[i] << endl;
    // }

    // vector<int> v;
    // for(int i=0; i<3; i++){
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }
    // // vector<int> :: iterator it;
    // // for(it = v.begin(); it != v.end(); it++){
    // //     cout << *(it) << endl;
    // // }
    // for(auto x : v){
    //     cout << x << endl;
    // }


    // vector<pair<int , string>> v;
    // for(int i=0; i<3; i++){
    //     pair<int, string> p;
    //     cin >> p.first >> p.second;
    //     v.push_back(p);
    // }  
    
    // // vector<pair<int,string>> :: iterator it;
    // // for(it = v.begin(); it != v.end(); it++){
    // //     cout << it->first << " : " << it->second << endl;
    // // }

    // // for(auto x : v){
    // //     cout << x.first << " : " << x.second << endl;
    // // }

    // for(pair<int,string> p : v){
    //     cout << p.first << " : " << p.second << endl;
    // }

    vector<pair<int, string>> v;
    for(int i=0; i<3; i++){
        pair<int, string> p;
        cin >> p.first >> p.second;
        v.push_back(p);
    }
    cout << "Size : " << v.size() << endl;
    for(auto x : v){
        cout << x.first << " : " << x.second << endl;
    }
    return 0;
}