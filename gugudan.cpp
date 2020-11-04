#include <stdio.h>
int main() {
    int X;
    scanf("%d", &X);
    if (1 <= X && X <=9) {
        printf("%d X %d = %d \n",X,1,X*1);
        printf("%d X %d = %d \n",X,2,X*2);
        printf("%d X %d = %d \n",X,3,X*3);
        printf("%d X %d = %d \n",X,4,X*4);
        printf("%d X %d = %d \n",X,5,X*5);
        printf("%d X %d = %d \n",X,6,X*6);
        printf("%d X %d = %d \n",X,7,X*7);
        printf("%d X %d = %d \n",X,8,X*8);
        printf("%d X %d = %d \n",X,9,X*9);
    }
    return 0;
}