#include <stdio.h>
#include <windows.h>
int main()
{
    int hour, minute, second;
    int delay = 1000;
    printf("Set time : \n");
    scanf("%d%d%d", &hour, &minute, &second);
    if (hour > 12 || minute > 60 || second > 60)
    {
        printf("Error ! \n");
        exit(0);
    }
    while (1) // this is infinite loop and anything in this loop will repeat itself to infinity
    {
        /* code */
        second++;
        if (second > 59)
        {
            minute++;
            second = 0;
        }
        if (minute > 59)
        {
            hour++;
            minute = 0;
        }
        if (hour > 12)
        {
            hour = 1;
        }
        printf("\n CLOCK :");
        printf("\n %02d:%02d:%2d", hour, minute, second); // this shows the time in 00:00:00
        Sleep(delay);                                     // for slow down the while loop for getting the the real time
        system("cls");                                    // for clearing the screen
    }
}