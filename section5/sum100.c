#include <stdio.h>

int main(){
    int i;
    int j = 0;

    for (i = 0; i < 101; i++){
        j += i;
    }
    printf("%d", j);
    return 0;
}