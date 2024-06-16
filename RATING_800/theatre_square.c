#include <stdio.h>
int main(){
    int m,n,a;
    scanf("%d %d %d",&n,&m,&a);
    long long count = 1;
    if (n%a != 0) count *= ((n/a)+1);
    else count *= n/a;
    if (m%a != 0) count *= ((m/a)+1);
    else count *= m/a;
    printf("%lld\n",count);
    return 0;
}

// #include <stdio.h>

// int main()
// {
//     int n, m, a;
//     scanf("%d%d%d", &n, &m, &a);
//     int num_flagstones_x = (n + a - 1) / a;
//     int num_flagstones_y = (m + a - 1) / a;
//     long long num_flagstones = (long long) num_flagstones_x * num_flagstones_y;
//     printf("%lld\n", num_flagstones);

//     return 0;
// }