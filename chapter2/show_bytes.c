#include <stdio.h>

typedef unsigned char* byte_ptr;

void show_bytes(byte_ptr start, int len){
    int i;
    for(i = 0; i < len; i++){
        printf(" %.2x", start[i]);
    }
    printf("\n");
}

void show_int(int x) {
    show_bytes((byte_ptr)&x, sizeof(int));
}


void show_float(float x) {
    show_bytes((byte_ptr)&x, sizeof(float));
}

void show_ptr(void *x) {
    show_bytes((byte_ptr)&x, sizeof(void *));
}

void test_show_bytes(int val){
    int ival = val;
    float fval = (float)ival;
    int *pval = &ival;
    show_int(ival);
    show_float(fval);
    show_ptr(pval);
}

int main(int argc, char *argv[]) {
   test_show_bytes(12345);
   return 0;
}
