#include <stdio.h>

int main(){
     
    int count = 0;
    char str1[100];
    scanf("%s",str1);
    for(int i=0; str1[i] != '\0'; i++){
        if((str1[i]>=65 && str1[i]<=90) || (str1[i]>=97 && str1[i]<=122)){
            for(int j=i+1; str1[j]; j++){
                if(str1[i] == str1[j]){
                    str1[j] = '.';
                }
            }
            count++;
        }
    }
    if(count%2 == 0){
        printf("CHAT WITH HER!\n");
    }
    else{
        printf("IGNORE HIM!\n");
    }
     
    return 0;
}