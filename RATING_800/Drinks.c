#include <stdio.h>

int main(){
     
    int n,m;
    float total=0.0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&m);
        total += m;
    }
    printf("%f\n",total/n);
     
    return 0;
}