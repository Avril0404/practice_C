#include <stdio.h>

int main(){
    int c; 
    int end = 0;

    while (1){
        printf("A-play\nB-music\nC-Calc\nX-Exit\n");
    

    while (1) {
        c = getchar();
        if (c != '\n')
            break;
    }

    switch (c) {
        case 'A':
        case 'a':
            printf("\n You already played enough\n");
            break;
        case 'B':
        case 'b':
            printf("\n What is your favourite?\n");
            break;
        case 'C':
        case 'c':
            printf("\n wow you work so hard\n");
            break;
        case 'X':
        case 'x':
            end = 1; 
            break;
        default:
            printf("\n Your input is not valid\n");
            break;
    }
    if (end == 1)
        break;
    }
    return 0;
}