// #include <stdio.h>

// int main(){
     
//     unsigned long long k, n, w, sum=0;
//     scanf("%llu",&k);
//     scanf("%llu",&n);
//     scanf("%llu",&w);
//     for(int i=1; i<=w; i++){
//         sum += (i*k);
//     }
//     int borrow = sum - n;
//     if(borrow > 0){
//         printf("%llu",borrow);
//     }
//     else{
//         printf("0");
//     }
     
//     return 0;
// }


// ---------------------------- another way ------------------ //


#include <stdio.h>

int main() {
    int k, n, w;
    scanf("%d %d %d", &k, &n, &w);
    int total_cost = 0;
    for (int i = 1; i <= w; i++) {
        total_cost += i * k;
    }
    int borrow = total_cost - n;
    if (borrow > 0) {
        printf("%d", borrow);
    } else {
        printf("0");
    }
    return 0;
}
