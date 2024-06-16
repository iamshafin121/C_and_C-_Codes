#include <stdio.h>

int main(){
     
    int n, a = 0, d = 0;
    scanf("%d",&n);
    char str[n+1];
    scanf("%s",str);
    for(int i=0; str[i] != '\0'; i++){
        if(str[i]=='A'){
            a++;
        }
        else if(str[i]=='D'){
            d++;
        }
    }
    if(a>d){
        printf("Anton\n");
    }
    else if(a==d){
        printf("Friendship\n");
    }
    else{
        printf("Danik\n");
    }

    return 0;
}

