#include <stdio.h>

int main(){
    int age;

    printf("Please enter your age");
    scanf("%d", &age);

    if (age < 6){
        printf("It's free!");
    }
    else{
        printf("The entrance fee is $10");

        return 0;
    }
}