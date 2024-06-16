#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){

        int l, r;
        cin >> l >> r;
        int score = 0;
            int x = r;
            while(x!=1){
                x = x/2;
                score++;
            }
        cout << score << endl;

    }

    return 0;
}