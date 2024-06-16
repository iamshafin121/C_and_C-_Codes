#include <stdio.h>

int main(){
     
    int n;
    scanf("%d",&n);
    int p[n+1];
    for(int i=1; i<=n; i++){
        scanf("%d",&p[i]);
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==p[j]){
                printf("%d ",j);
            }
        }
    }
    printf("\n");
     
    return 0;
}


// logic behind it : 

/* 
INPUT (result):

  index   result
    1 ---> 2
    2 ---> 3
    3 ---> 4
    4 ---> 1


// ------------------ //
MAIN LOGIC : 
if ( output index == input result ){
    printf("input index");
}
// ------------------ //


OUTPUT (result) : 

  index   result
    1 ---> 4
    2 ---> 1
    3 ---> 2
    4 ---> 3


*/
