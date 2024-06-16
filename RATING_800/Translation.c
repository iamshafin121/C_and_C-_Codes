#include <stdio.h>
#include <string.h>

int main(){
     
    char str1[101], str2[101];
    scanf("%s %s", str1, str2);
    int len = strlen(str1);
    for(int i=0; i<len; i++){
        if(str1[i] != str2[len-1-i]){
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
     
    return 0;
}