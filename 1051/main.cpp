#include <bits/stdc++.h>

using namespace std;

int main()
{
    double salary, left, backup, tax=0;

    scanf("%lf", &salary);

    if(salary<=2000)
    {
        printf("Isento\n");
        return 0;
    }

    salary-=2000;

    left=salary-1000;

    if(left<0)
    {
        tax+=(salary*8.0)/100;
    }
    else
    {
        tax+=(1000.0*8)/100;

        backup=left;

        left-=1500;

        if(left<0)
        {
            tax+=(backup*18)/100;
        }
        else
        {
            tax+=(1500.0*18)/100;

            tax+=(left*28.0)/100;
        }
    }

    printf("R$ %.2lf\n",tax);
    return 0;
}
