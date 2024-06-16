
// ------------------------ It's not working !! (why) ------------------- //

// #include <stdio.h>

// int main(){

//     int n, p, q;
//     int arr1[n];
//     int arr2[p];
//     int arr3[q];
//     scanf("%d",&n);
//     for(int i=0; i<n; i++){
//         arr1[i] = i+1;
//     }
//     scanf("%d",&p);
//     for(int i=0; i<p; i++){
//         scanf("%d",&arr2[i]);
//     }
//     scanf("%d",&q);
//     for(int i=0; i<q; i++){
//         scanf("%d",&arr3[i]);
//     }
//     for(int i=0; i<p; i++){
//         for(int j=0; j<n; j++){
//             if(arr1[j]==arr2[i]){
//                 arr1[j] = 0;
//             }
//         }
//     }
//     for(int i=0; i<q; i++){
//         for(int j=0; j<n; j++){
//             if(arr1[j]==arr3[i]){
//                 arr1[j] = 0;
//             }
//         }
//     }
//     for(int i=0; i<n; i++){
//         if(arr1[i]>0){
//             printf("Oh, my keyboard!\n");
//             return 0;
//         }
//     }
//     printf("I become the guy.\n");
    


//     return 0;
// }

// --------------------------------- //



#include <stdio.h>

int main() {
    int n, p, q;
    int levels[101] = {0};
    scanf("%d", &n);
    scanf("%d", &p);
    for (int i = 0; i < p; i++) {
        int x;
        scanf("%d", &x);
        levels[x] = 1;
    }
    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        int y;
        scanf("%d", &y);
        levels[y] = 1;
    }
    int can_pass_all = 1;
    for (int i = 1; i <= n; i++) {
        if (levels[i] == 0) {
            can_pass_all = 0;
            break;
        }
    }
    if (can_pass_all) {
        printf("I become the guy.\n");
    } else {
        printf("Oh, my keyboard!\n");
    }
    return 0;
}
