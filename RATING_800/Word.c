#include <stdio.h>

int main(){
     
    char str[100];
    scanf("%s",str);
    int upper = 0, lower = 0;
    for(int i=0; str[i] != '\0'; i++){
        if(str[i]>=65 && str[i]<=90){
            upper++;
        }
        else if(str[i]>=97 && str[i]<=122){
            lower++;
        }
    }
    if(upper>lower){
        for(int i=0; str[i] != '\0'; i++){
            if(str[i]>=97 && str[i]<=122){
                str[i] -= 32;
            }
        }
    }
    else{
        for(int i=0; str[i] != '\0'; i++){
            if(str[i]>=65 && str[i]<=90){
                str[i] += 32;
            }
        }
    }
    printf("%s\n",str);
    return 0;
}