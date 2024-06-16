#include <stdio.h>

int main(){

    long long int n;
    scanf("%lld",&n);
    int count = 0;
    while(n>0){
        if(n%10 == 7 || n%10 == 4){
            count++;
        }
        n /= 10;
    }
    if(count==7 || count==4){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }

    return 0;
}