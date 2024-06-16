/*

__	Make Equal	__
PROBLEM LINK : https://codeforces.com/problemset/problem/1931/B
NAME	:	MD. SHAFIN AHAMMAD HREDOY
INSTITUTE:	BANGLADESH ARMY INTERNATIONAL UNIVERSITY OF SCIENCE AND TECHNOLOGY
COUNTRY	:	BANGLADESH
MAIL	:	ahamedshafin121@gmail.com
FACEBOOK:	https://www.facebook.com/iamshafin121/
USERNAME:	iamshafin121 
DATE	:	
 
*/

#include <bits/stdc++.h>
using namespace std;


class Solution {
    private:
        int test_case;
    public:
        Solution(){
            cin >> test_case;
            while(test_case--){
                int containers;
                cin >> containers;
                vector <int> amount_water;
                for(int i=1; i<=containers; i++){
                    int amount;
                    cin >> amount;
                    amount_water.push_back(amount);
                }
            }
        }

};



int main(){

    Solution solved;

    return 0;
}