#include <stdio.h>

int main(){
     
    int num[4], count = 0;
    for(int i=0; i<4; i++){
        scanf("%d",&num[i]);
    }
    for(int i=0; i<3; i++){
        if(num[i]==0) continue;
        for(int j=i+1; j<4; j++){
            if(num[i]==num[j]){
                count++;
                num[j] = 0;
            }

        }
    }
    printf("%d\n",count);
     
    return 0;
}