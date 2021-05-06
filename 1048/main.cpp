#include <bits/stdc++.h>

using namespace std;

int main()
{
    double salary, increment, finalSalary;
    int percent;

    scanf("%lf", &salary);

    if(salary>=0 && salary<=400)
    {
        percent=15;

        increment= (salary*percent)/100;

        finalSalary=salary+increment;
    }

    else if(salary>400 && salary<=800)
    {
        percent=12;

        increment= (salary*percent)/100;

        finalSalary=salary+increment;
    }

    else if(salary>800 && salary<=1200)
    {
        percent=10;

        increment= (salary*percent)/100;

        finalSalary=salary+increment;
    }

    else if(salary>1200&& salary<=2000)
    {
        percent=7;

        increment= (salary*percent)/100;

        finalSalary=salary+increment;
    }

    else
    {
        percent=4;

        increment= (salary*percent)/100;

        finalSalary=salary+increment;
    }

    printf("Novo salario: %.2lf\n",finalSalary);
    printf("Reajuste ganho: %.2lf\n",increment);
    printf("Em percentual: %d %\n",percent);


    return 0;
}
