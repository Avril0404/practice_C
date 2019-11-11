#include <stdio.h>

int main(){
    int age;
    int is_seito;

    printf("Please enter your age");
    scanf("%d", &age);
    printf("Are you a student? (Yes:1, No:0)---");
    scanf("%d", &is_seito);

    if (age < 6){
        printf("It's free!");
    }
    else if (is_seito == 1){
        printf("It's free!");
    } else {
        printf("The entrance fee is $10");
    }
        return 0;
}