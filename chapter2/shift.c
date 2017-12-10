#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 0x63;
    int y = -0x95;
    
    printf("%#X\n", y);//y为负数,打印的是y的补码,0XFFFFFF6B
    printf("%#X\n", x >> 4);//0X6
    printf("%#X\n", y >> 4);//0XFFFFFFF6

    return 0;
}
