#include <stdio.h>

int main() {
    int totalSeconds;
    int hours, minutes, seconds;

    printf("Enter the total no. of seconds :");
    scanf("%d", &totalSeconds);

    // Calculate hours, minutes, seconds
    hours = totalSeconds / 3600;           // 1 hour = 3600 sec
    minutes = (totalSeconds % 3600) / 60;  // remaining seconds / 60
    seconds = totalSeconds % 60;           // leftover seconds

    
    printf("%d:%d:%d\n", hours, minutes, seconds);

    return 0;
}
