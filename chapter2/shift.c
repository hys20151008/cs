#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 0x63;
    int y = -0x95;
    printf("%#X\n", x >> 4);
    //printf("%#x\n", x >> 4);
    printf("%#X\n", y >> 4);

    return 0;
}