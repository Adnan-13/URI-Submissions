#include <bits/stdc++.h>

using namespace std;

// NOT SOLVED YET :""( \n

int main()
{
    string trash;
    int startDay, endDay, startH, endH, startM, endM, startS, endS, day, hour, minute, second;

    cin >> trash >> startDay;
    cin >> startH >> trash >> startM >> trash >> startS;
    cin >> trash >> endDay;
    cin >> endH >> trash >> endM >> trash >> endS;

    day= endDay-startDay;

    hour= endH-startH;
    minute= endM-startM;
    second= endS-startS;

    bool d,h,m;

    d=h=m=true;

    while(d||h||m)
    {
        if(hour<0)
        {
            hour+=24;
            day--;
            d=false;

        }

        if(minute<0)
        {
            minute+=60;
            hour--;
            h=false;

        }


        if(second<0)
        {
            second+=60;

            minute--;
            m=false;

        }

        if(hour>0 && minute>0 && second>0) break;
    }
    if(startDay==endDay && startH==endH && startM==endM && startS==endS)
    {
        day=0;
        hour=0;
        minute=0;
        second=0;
    }


    printf("%d dia(s)\n", day);
    printf("%d horas(s)\n", hour);
    printf("%d minutos(s)\n", minute);
    printf("%d segundos(s)\n", second);

    return 0;
}
