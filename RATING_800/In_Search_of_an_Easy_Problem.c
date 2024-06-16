#include <stdio.h>

int main(){
     
    int n,opinion,decision=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&opinion);
        if(opinion){
            decision = 1;
        }
    }
    if(decision) printf("HARD\n");
    else printf("EASY\n");
     
    return 0;
}