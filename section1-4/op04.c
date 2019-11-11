#include <stdio.h>

int main () {
    double shincho = 1.72, taiju = 65.2;

    printf("BMI = %4.1f", taiju / (shincho * shincho));

    return 0;
}