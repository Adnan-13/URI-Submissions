#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num, countAlc, countGas, countDis;

    countAlc = countGas = countDis = 0;

    while(true)
    {
        while(true)
        {
            scanf("%d", &num);
            if(num>=1 && num<=4)
            {
                break;
            }
        }

        if(num==1)
        {
            countAlc++;
        }

        else if(num==2)
        {
            countGas++;
        }

        else if(num==3)
        {
            countDis++;
        }

        else if(num==4)
        {
            break;
        }
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", countAlc);
    printf("Gasolina: %d\n", countGas);
    printf("Diesel: %d\n", countDis);

    return 0;
}
