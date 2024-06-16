#include <stdio.h>

int main(){
     
    int n, t;
    scanf("%d %d",&n,&t);
    char s[n];
    scanf("%s",s);
    for(int i=0; i<t; i++){
        for(int j=0; j<n; j++){    
            if(s[j]=='B' && s[j+1]=='G'){

                s[j] = 'G';
                s[j+1] = 'B';
                j += 1;

            }
        }
    }
    printf("%s\n",s);
     
    return 0;
}