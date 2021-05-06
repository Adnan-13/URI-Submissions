#include <bits/stdc++.h>

using namespace std;

int main()
{
    int timeStart,timeEnd;

    scanf("%d%d",&timeStart,&timeEnd);
    if(timeStart<24 && timeEnd<24)
    {
        if((timeStart==0) && !(timeStart==timeEnd))
        {
            printf("O JOGO DUROU %d HORA(S)\n",timeEnd);
        }

        else if((timeEnd==0) && !(timeStart==timeEnd))
        {
            printf("O JOGO DUROU %d HORA(S)\n",24-timeStart);
        }

        else if(timeStart>timeEnd)
        {
            printf("O JOGO DUROU %d HORA(S)\n",timeStart-timeEnd-4);
        }

        else if(timeStart<timeEnd)
        {
            printf("O JOGO DUROU %d HORA(S)\n",timeEnd-timeStart);
        }

        else if(timeStart==timeEnd)
        {
            printf("O JOGO DUROU 24 HORA(S)\n");
        }
    }

    return 0;
}
