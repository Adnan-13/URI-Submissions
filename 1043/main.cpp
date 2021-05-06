#include <bits/stdc++.h>

using namespace std;

int main()
{
    double A,B,C;
    scanf("%lf%lf%lf",&A,&B,&C);

    if((B+C)>A&&(C+A)>B&&(A+B)>C)
    {
        printf("Perimetro = %.1lf\n",A+B+C);
    }
    else
    {
        printf("Area = %.1lf\n",((A+B)*C)/2);
    }
    return 0;
}
