#include <stdio.h>

int main (){
    int n;
    int highest = 0;
    int lowest = 0;
    int sum = 0;
    int cnt = 0;
    float avg;



    while(1){
        scanf("%d", n);
        cnt++;
        sum += n;
        if (n == -1){
        break;
        }
        if (n < lowest){
            lowest = n;
        }
        else if (n < highest){
            highest = n;
        }
    }
    avg = sum / cnt;
    printf("lowest:%d, highest:%d, num of people:%d, Avg:%4d", lowest, highest, cnt, avg);

    return 0;
}