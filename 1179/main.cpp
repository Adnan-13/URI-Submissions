#include <bits/stdc++.h>

using namespace std;

int main()
{
    int par[5], impar[5], num;

    int parCount=0, imparCount=0;

    for(int i=0; i<15; i++)
    {
        scanf("%d", &num);
        if(num%2==0)
        {
            par[parCount++]=num;

            if(parCount>4)
            {
                for(int j=0; j<=4; j++)
                {
                    printf("par[%d] = %d\n", j, par[j]);
                }

                parCount=0;
            }
        }

        else
        {
            impar[imparCount++]=num;

            if(imparCount>4)
            {
                for(int j=0; j<=4; j++)
                {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }

                imparCount=0;
            }
        }
    }

    for(int j=0; j<imparCount; j++)
    {
        printf("impar[%d] = %d\n", j, impar[j]);
    }

    for(int j=0; j<parCount; j++)
    {
        printf("par[%d] = %d\n", j, par[j]);
    }
    return 0;
}
