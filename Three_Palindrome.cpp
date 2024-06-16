#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    if(n%2==0){
        int j=1;
        for(int i=1; i<=n; i+=2,j++){
            if(j&1){
                cout << "aa";
            }
            else{
                cout << "bb";
            }
        }
        cout << endl; // 13/2 = 7 -> 14
        //
    } // 13-2 = 11 7
    else{
        int x = 0;
        int j = 1;
        for(int i=0; i<n-1; i+=2,j++){
            if(j&1){
                cout << "aa";
                x = 0;
            }
            else{
                cout << "bb";
                x = 1;
            }
        }
        if(x){
            cout << "a" << endl;
        }
        else{
            cout << "b" << endl;
        }
    }


    return 0;
}