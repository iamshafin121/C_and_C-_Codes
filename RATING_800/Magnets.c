#include <stdio.h>

int main(){
     
    int n, c_1, c_2, count=1;
    char m[3];
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%s",m);
        if(i>0){
            c_1 = m[0];
            if(c_1 == c_2){
                count++;
            }
        }
        c_2 = m[1];
    }

    printf("%d\n",count);

     
    return 0;
}