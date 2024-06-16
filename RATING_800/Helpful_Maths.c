// #include <stdio.h>

// int main(){
    
//     int p=0, one=0, two=0, three=0;
//     char math[101];
//     char n_math[101];
//     scanf("%s",math);
//     for(int i=0; math[i] != '\0'; i++){
//         if(math[i]=='+') p++;
//         else if(math[i]=='1') one++;
//         else if(math[i]=='2') two++;
//         else if(math[i]=='3') three++;
//     }
//     int i = 0;
//     if(one>0){
//         while(one--){
//             n_math[i] = '1';
//             if(p>0) n_math[i+1] = '+';
//             i += 2;
//             p--;
//         }
//     }

//     if(two>0){
//         while(two--){
//             n_math[i] = '2';
//             if(p>0) n_math[i+1] = '+';
//             i += 2;
//             p--;
//         }
//     }

//     if(three>0){
//         while(three--){
//             n_math[i] = '3';
//             if(p>0) n_math[i+1] = '+';
//             i += 2;
//             p--;
//         }
//     }

//     n_math[i-1] = '\0';

//     printf("%s\n",n_math);
     
//     return 0;
// }


// ---------------------------------------------- Another way ----------------------------- //

#include <stdio.h>
#include <string.h>

#define MAX_LEN 100

int main() {
    char sum[MAX_LEN + 1];
    scanf("%s", sum);

    int count[3] = {0};
    int len = strlen(sum);
    for (int i = 0; i < len; i += 2) {
        int num = sum[i] - '0';
        count[num - 1]++;
    }

    char new_sum[MAX_LEN + 1] = "";
    for (int i = 0; i < count[0]; i++) {
        strcat(new_sum, "1+");
    }
    for (int i = 0; i < count[1]; i++) {
        strcat(new_sum, "2+");
    }
    for (int i = 0; i < count[2]; i++) {
        strcat(new_sum, "3+");
    }
    new_sum[strlen(new_sum) - 1] = '\0';

    printf("%s\n", new_sum);

    return 0;
}
