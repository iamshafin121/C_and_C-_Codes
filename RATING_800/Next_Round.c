// #include <stdio.h>

// int main(){
     
//     unsigned int n, k, count = 0;
//     scanf("%d %d",&n,&k);
//     unsigned int arr[n];
//     for(int i=0; i<n; i++){
//         scanf("%u",&arr[i]);
//     }
//     for(int i=0; i<n; i++){
//         if(arr[i] >= arr[k-1]){        
//             if(arr[i] > 0){
//                 count++;
//             }
//             else {
//                 break;
//             }
//         }
//         else {
//             break;
//         }
        
//     }
//     printf("%u\n",count);

//     return 0;
// }



// ---------------------------------- Right way -------------------------- //

#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int scores[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    int cutoff = scores[k-1];
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (scores[i] >= cutoff && scores[i] > 0) {
            count++;
        } else {
            break;
        }
    }

    printf("%d\n", count);

    return 0;
}
