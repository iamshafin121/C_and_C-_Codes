#include <stdio.h>

int main(){
     
    int n, n_h, h, w=0;
    scanf("%d %d",&n,&h);
    for(int i=0; i<n; i++){
        scanf("%d",&n_h);
        if(n_h>h) w += 2;
        else w++;
    }
    printf("%d\n",w);
     
    return 0;
}