#include <stdio.h>

int main(){
     
    int n, c=2, x=0;
    char bit[4];
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%s",bit);
        for(int j=0; j<3; j++){
            if(bit[j] == '+'){
                c++;
            }
            else if(bit[j] == '-'){
                c--;
            }
        }
        if(c == 4){
            x++;
        }
        else if(c == 0){
            x--;
        }

        c = 2;
    }
    printf("%d", x);
     
    return 0;
}