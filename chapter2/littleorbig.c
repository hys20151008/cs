#include <stdio.h>

//you can use sys.byteorder to decete system is little-endian or big-endian

int main(int argc, char *argv[]){
    int a = 0x12345678;
    int *p = &a;
    if((*(char *)p) == 0x78){
        printf("little endian\n");
    }
    else {
        printf("big endian\n");
    }
    return 0;
}
