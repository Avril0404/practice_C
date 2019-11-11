#include <stdio.h>

int main(){
    int i = 0;
    int j = 0;

    while (i <= 100){
        j += i;
        i++;
    }
    printf("%d", j);
    return 0;
}