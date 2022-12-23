#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hour=0,minute=0,second=0;
    printf("Welcome!\n\n");
    sleep(1);
    printf("!!Please use the format below!!\n\n");
    printf("hour minutes seconds\n\nLeave one space between them\n\n");
    retry:
    printf("-> ");
    scanf("%d %d %d",&hour,&minute,&second);
    if(hour!=0)
        second = second + (hour*3600);
    if(minute!=0)
        second = second + (minute*60);
    if(second<=0)
    {
        printf("Enter a valid value!\n\n");
        goto retry;
    }
    printf("Remaining seconds :\n");

    while (second>0)
    {

        printf("%d\n",second);
        second--;
        sleep(1);
        system("cls");
    }
    printf("\n\nTIMER ENDED\n\n");

    return 0;
}
