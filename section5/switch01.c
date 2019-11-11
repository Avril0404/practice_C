#include <stdio.h>

int main(){
    int n;

    printf("please enter a number within 1-5----");
    scanf("%d", &n);

    switch (n) {
        case 1:
            printf("you entered the smallest number");
            break;
        case 2:
            printf("something will happen");
            break;
        case 3:
            printf("woa! you picked 3!?");
            break;
        case 4:
            printf("4 is your lucky number");
            break;
        case 5: 
            printf("5 is 5");
        default:
            printf("please enter a valid number");
            break;
    }
    return 0;
}