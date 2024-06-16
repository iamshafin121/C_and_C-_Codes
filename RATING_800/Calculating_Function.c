#include <stdio.h>

int main(){
     
    long long int n;
    scanf("%lld",&n);
    if(n&1){
        printf("%lld\n",-((n/2)+1));
    }
    else{
        printf("%lld\n",n/2);
    }
     
    return 0;
}