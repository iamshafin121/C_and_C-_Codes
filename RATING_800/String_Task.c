#include <stdio.h>

int main(){
     
    char str[101];
    char new_str[202];
    scanf("%s",str);
    int j = 0;
    for(int i=0; str[i] != '\0'; i++){
        if(str[i]>=65 && str[i]<=90) str[i] += 32;
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u' || str[i] == 'i' || str[i] == 'y'){
            continue;
        }
        else{
            new_str[j] = '.';
            new_str[j+1] = str[i];
            j += 2;
        }
    }
    new_str[j] = '\0';
    printf("%s\n",new_str);
     
    return 0;
}