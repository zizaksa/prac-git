#include <stdio.h>

int main() {
    int N;
    int n = 0;
    scanf("%d", &N);

    while(1){
    n++;
    printf("%d * %d = %d", N, n,  N*n);
    printf("\n");
    if(n == 9)
    break;
    }

    /*printf("%d * 2 = %d", N, N*2);
    printf("%d * 3 = %d", N, N*3);
    printf("%d * 4 = %d", N, N*4);
    printf("%d * 5 = %d", N, N*5);
    printf("%d * 6 = %d", N, N*6);
    printf("%d * 7 = %d", N, N*7);
    printf("%d * 8 = %d", N, N*8);
    printf("%d * 9 = %d", N, N*9);
    */
    // 구구단 작성

    return 0;
}