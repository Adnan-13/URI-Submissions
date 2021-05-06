#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;

    scanf("%d", &cases);

    while(cases--)
    {
        int num;

        scanf("%d", &num);

        int divSum=0;

        for(int i=1; i<num; i++)
        {
            if(num%i==0)
            {
                divSum+=i;
            }
        }

        if(num==divSum)
        {
            printf("%d eh perfeito\n", num);
        }

        else
        {
            printf("%d nao eh perfeito\n", num);
        }
    }

    return 0;
}
