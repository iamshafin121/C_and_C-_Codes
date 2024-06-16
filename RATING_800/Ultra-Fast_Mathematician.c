#include <stdio.h>

int main(){
     
    char num1[101];
    char num2[101];
    scanf("%s",num1);
    scanf("%s",num2);
    for(int i=0; num1[i] != '\0'; i++){
        if(num1[i] == num2[i]) num2[i] = '0';
        else num2[i] = '1';
    }
    printf("%s\n",num2);
     
    return 0;
}