#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;

    scanf("%d", &cases);

    int sumAll, sumC, sumR, sumS;
    double percentC, percentR, percentS;

    sumAll = sumC = sumR = sumS = 0;

    while(cases--)
    {
        int num;
        char type;

        cin>>num>>type;

        sumAll+=num;

        if(type=='C')
        {
            sumC+=num;
        }

        else if(type=='R')
        {
            sumR+=num;
        }

        else if(type=='S')
        {
            sumS+=num;
        }
    }

    percentC=(sumC*100.0)/sumAll;

    percentR=(sumR*100.0)/sumAll;

    percentS=(sumS*100.0)/sumAll;

    printf("Total: %d cobaias\n", sumAll);
    printf("Total de coelhos: %d\n", sumC);
    printf("Total de ratos: %d\n", sumR);
    printf("Total de sapos: %d\n", sumS);
    printf("Percentual de coelhos: %.2lf %\n", percentC);
    printf("Percentual de ratos: %.2lf %\n", percentR);
    printf("Percentual de sapos: %.2lf %\n", percentS);

    return 0;
}
