#include <stdio.h>
#include <string.h>

int main(){
     
    char str1[101];
    char str2[101];
    scanf("%s",str1);
    scanf("%s",str2);
    for(int i=0; str1[i] != '\0'; i++){
        if(str1[i] >= 65 && str1[i] <= 90){
            str1[i] += 32;
        }
    }
    for(int i=0; str2[i] != '\0'; i++){
        if(str2[i] >= 65 && str2[i] <= 90){
            str2[i] += 32;
        }
    }
    // for(int i=0; str1[i] != '\0'; i++){
    //     if(str1[i] > str2[i]){
    //         printf("-1\n");
    //         return 0;
    //     }
    //     else if(str1[i] < str2[i]){
    //         printf("1\n");
    //         return 0;
    //     }
    // }
    // printf("0\n");
    printf("%d\n",strcmp(str1,str2));
    return 0;
}