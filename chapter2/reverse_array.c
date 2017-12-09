#include <stdio.h>

void inplace_swap(int *x, int *y){
    *y = *x ^ *y;
    *x = *x ^ *y;
    *y = *x ^ *y;
}

void reverse_array(int a[], int cnt){
    int first, last;
    for(first = 0, last = cnt -1;first < last;first++, last--)
        inplace_swap(&a[first], &a[last]);
}

int main(int argc, char *argv[]){
    int a[] = {1, 2, 3, 4, 5};
    int i = 0,n = sizeof(a)/sizeof(a[0]);
    reverse_array(a, n);
    for(i = 0; i < n; i++)
        printf("%d\t", a[i]);
    return 0;
}
