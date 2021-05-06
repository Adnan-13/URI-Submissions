#include <bits/stdc++.h>

using namespace std;
//10% wrong answer but i don't know why >:(
int main()
{
    double j=1;

    for(double i=0; i<=1.8; i+=.2)
    {
        double backup=j;
        for(int k=1; k<=3; k++)
        {
            if(i==0 || i==1)
            {
                printf("I=%.0lf J=%.0lf\n", i, backup++);
            }
            else
            {
                printf("I=%.1lf J=%.1lf\n", i, backup++);
            }
        }
        j+=.2;
    }

    for(int i=3; i<=5; i++)
    {
        printf("I=2 J=%d\n", i);
    }

    return 0;
}
