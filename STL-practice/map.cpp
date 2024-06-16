#include <bits/stdc++.h>
using namespace std;

int main(){

    map<int , string> m;
    m[1] = "abc"; 
    m[5] = "cdc";
    m[3] = "acd";
    m[6] = "a" ;
    m[5] = "cde";

    // auto it = m.find(6);
    // if(it == m.end()){
    //     cout << "YES" << endl;
    // }
    // else{
    //     cout << "NO" << endl;
    // }
    
    // map<int, string> :: iterator it;
    // for(it = m.begin(); it != m.end(); it++){
    //     cout << (*it).first << "  :  " << (*it).second << endl;
    // }
    // cout << "------------------------------" << endl;
    // for(it = m.begin(); it != m.end(); it++){
    //     cout << it->first << "  :  " << it->second << endl;
    // }
    cout << "------------------------------" << endl;
    for(auto x = m.begin(); x != m.end(); x++){
        cout << x->first << "  :  " << x->second << endl;
    }

    m.erase(1);
    m.insert(make_pair(121,"iamshafin121"));
    m.insert({122,"Hredoy"});
    cout << "------------------------------" << endl;
    for(auto x : m){
        cout << x.first << "  :  " << x.second << endl;
    }

    // cout << m[5] << endl;
    // cout << m.find(5)->first << " " << m.find(5)->second << endl;
    // cout << (*(m.find(5))).first <<  " " << (*(m.find(5))).second << endl;


    return 0;
}