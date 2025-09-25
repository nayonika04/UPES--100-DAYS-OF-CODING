//Q10:Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include<stdio.h>
int main() {
    int totalseconds;
    int hours,minutes,seconds;

    printf("enter the time in seconds:" );
    scanf("%f", &totalseconds);

    hours = totalseconds/3600;
    int remainingseconds = totalseconds % 3600;

    minutes = remainingseconds/ 60;
    seconds = remainingseconds % 60;

    printf("time in HH:MM:SS format: %d:%d:%d\n", hours, minutes, seconds);

    return 0;

}
