#include <bits/stdc++.h>

using namespace std;

int main()
{
    double m[12][12];

    double sum=0.0;

    string work;

    cin>>work;

    int numCount=0;

    for(int i=0; i<12; i++)
    {
        for(int j=0; j<12; j++)
        {
            scanf("%lf", &m[i][j]);
            if(j>i && i+j<11)
            {
                sum+=m[i][j];

                numCount++;
            }
        }
    }

    if(work[0]=='S')
    {
        printf("%.1lf\n", sum);
    }

    else if(work[0]=='M')
    {
        printf("%.1lf\n", sum/numCount);
    }

    return 0;
}
