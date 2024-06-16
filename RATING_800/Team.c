#include <stdio.h>

int main(){
     
    int n,sure,count=0,total=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            scanf("%d",&sure);
            if(sure) count++;
        }
        if(count>1) total++;
        count = 0;
    }
    printf("%d\n",total);
     
    return 0;
}