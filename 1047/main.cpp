#include <bits/stdc++.h>

using namespace std;

int main()
{
    int startHour, startMinute, endHour, endMinute, hour, minute;

    scanf("%d%d%d%d",&startHour, &startMinute, &endHour, &endMinute);

    hour= endHour-startHour;

    if(hour<0)
    {
        hour+=24;
    }

    minute=endMinute-startMinute;

    if(minute<0)
    {
        minute+=60;
        if(startHour!=endHour)
        {
            hour--;
        }
    }

    if(startHour==endHour && startMinute==endMinute)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hour,minute);
    }

    return 0;
}
