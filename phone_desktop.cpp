#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        int screen = 0;
        while(x>0 || y>0){

            if(y>1){
                x = x - 7;
                y = y - 2;
                screen++;
            }
            else if(y==1){
                x = x - 11;
                y = y - 1;
                screen++;
            } 
            else{
                x = x - 15;
                screen++;
            }
            
        }
        cout << screen << endl;
    }

    return 0;
}