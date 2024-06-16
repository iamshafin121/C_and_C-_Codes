#include <stdio.h>

int main(){
     
    int n, a, b, total=0, highest=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d %d",&a,&b);
        total -= a;
        total += b;
        if(total > highest){
            highest = total;
        }
    }
    printf("%d\n",highest);
     
    return 0;
}