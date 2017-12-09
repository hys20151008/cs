#include <stdio.h>

int main(int argc, char *argv[]){
    int x = 0x87654321;
    int a,b,c;
    a = x & 0xff;
    b = x ^ ~0xff;//xor with 0, return it, xor with 1, return ~it
    c = x | 0xff;
    printf("%x\n", a);
    printf("%x\n", b);
    printf("%x\n", c);
    return 0;
}

