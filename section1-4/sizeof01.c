#include <stdio.h>

int main(){

    char c = 'A';
    short s = 50;
    int i = -100;
    unsigned int ui = 128;
    float f = 0.5f;
    double d = 2568.2;
    long double ld = 1.258E-25;
    size_t sz;

    sz = sizeof c;
    printf("size of char = %d\n", sz);

    sz = sizeof s;
    printf("size of short = %d\n", sz);

    sz = sizeof i;
    printf("size of int = %d\n", sz);

    sz = sizeof ui;
    printf("size of unsigned int = %d\n", sz);

    sz = sizeof f;
    printf("size of float = %d\n", sz);

    sz = sizeof d;
    printf("size of short = %d\n", sz);

    sz = sizeof d;
    printf("size of double = %d\n", sz);

    sz = sizeof ld;
    printf("size of long double = %d\n", sz);

    sz = sizeof(size_t);
    printf("size of long size_t = %d\n", sz);

    return 0;
}