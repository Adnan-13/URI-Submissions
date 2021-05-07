#include <bits/stdc++.h>

using namespace std;

int main()
{
    double N;
    scanf("%lf",&N);

    int temp=(int)N;
    printf("NOTAS:\n");

    printf("%d nota(s) de R$ 100.00\n",(temp/100));
    temp%=100;

    printf("%d nota(s) de R$ 50.00\n",(temp/50));
    temp%=50;

    printf("%d nota(s) de R$ 20.00\n",(temp/20));
    temp%=20;

    printf("%d nota(s) de R$ 10.00\n",(temp/10));
    temp%=10;

    printf("%d nota(s) de R$ 5.00\n",(temp/5));
    temp%=5;

    printf("%d nota(s) de R$ 2.00\n",(temp/2));
    temp%=2;
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",temp);
    temp=(int)((N-int(N))*100);

    printf("%d moeda(s) de R$ 0.50\n",temp/50);
    temp%=50;

    printf("%d moeda(s) de R$ 0.25\n",temp/25);
    temp%=25;

    printf("%d moeda(s) de R$ 0.10\n",temp/10);
    temp%=10;

    printf("%d moeda(s) de R$ 0.05\n",temp/5);
    temp%=5;

    printf("%d moeda(s) de R$ 0.01\n",temp);

    return 0;
}
