#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){

        long long int n;
        cin >> n;
        long long int arr_a[n];
        long long int arr_b[n+1];
        long long int count = 1, num, diff, min_diff = 1e15;
        bool flag = false;
        for(long long int i=0; i<n; i++){
            cin >> arr_a[i];
        }
        for(long long int i=0; i<n; i++){
            cin >> arr_b[i];
            if(arr_b[i]>=arr_a[i]){
                count = count + (arr_b[i]-arr_a[i]);
            }
            else{
                count = count + (arr_a[i]-arr_b[i]);
            }
        }
        cin >> arr_b[n];
        for(long long int i=0; i<n; i++){
            if(arr_a[i] < arr_b[i]){
                if(arr_a[i]<=arr_b[n] && arr_b[n]<=arr_b[i]){
                    flag = true;
                }
                else if(arr_a[i]> arr_b[n]){
                    diff = (arr_a[i] - arr_b[n]);
                    if(diff < min_diff) min_diff = diff;
                }
                else{
                    diff = (arr_b[n] - arr_b[i]);
                    if(diff < min_diff) min_diff = diff;
                }
            }
            else{
                if(arr_b[i]<=arr_b[n] && arr_b[n]<=arr_a[i]){
                    flag = true;
                }
                else if(arr_b[i]> arr_b[n]){
                    diff = (arr_b[i] - arr_b[n]);
                    if(diff < min_diff) min_diff = diff;
                }
                else{
                    diff = (arr_b[n] - arr_a[i]);
                    if(diff < min_diff) min_diff = diff;
                }
            }
        }

        if(!flag){
            count += min_diff;
        }

        cout << count << endl;


    }

    return 0;
}