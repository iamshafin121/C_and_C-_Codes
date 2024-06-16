#include <stdio.h>
int main(){
    unsigned int x;
    scanf("%u",&x);
    if(x>=5 && x%5 == 0){
        printf("%u\n",(x/5));
    }
    else if(x>0){
        printf("%u",(x/5)+1);
    }
    return 0;
}