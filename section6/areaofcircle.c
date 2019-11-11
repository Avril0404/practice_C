#include <stdio.h>

int area(int);

int main(){
    int i;
    int circle;
    scanf("%d", i);
    circle = area(i);
    printf("%d", circle);
    return 0;

}
int area(int i){
    int a = 0;
    a = i * i * 3.14;
    return a;
}