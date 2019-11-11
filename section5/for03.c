
#include <stdio.h>

int main(){
    int i,j;

    for (i = 0; i < 4; i++){
        printf("outside for loop 1, i = %d\n", i);

        for (j = 0; j < 3; j++){
            printf("\tinside for loopp, j = %d\n", j);
        }

        printf("outside for loop 2, i = %d\n", i);
    }
    return 0;
}
