#include <stdio.h>
#include <stdbool.h>

int main(){
    int year,year_copy;
    scanf("%d",&year);

    while(true){
        year++;
        year_copy = year;
        int digits[10]={0};
        bool repeated = false;
        while(year_copy>0){
            int digit = year_copy%10;
            if(digits[digit]>0){
                repeated = true;
                break;
            }
            digits[digit]++;
            year_copy /= 10;
        }
        if(!repeated){
            printf("%d",year);
            break;
        }
    }
}