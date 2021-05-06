#include <bits/stdc++.h>

using namespace std;

int main()
{
    double m[12][12];

    double sum=0.0;

    int column;

    scanf("%d", &column);

    string work;

    cin>>work;

    for(int i=0; i<12; i++)
    {
        for(int j=0; j<12; j++)
        {
            scanf("%lf", &m[i][j]);
            if(j==column)
            {
                sum+=m[i][j];
            }
        }
    }

    if(work[0]=='S')
    {
        printf("%.1lf\n", sum);
    }

    else if(work[0]=='M')
    {
        printf("%.1lf\n", sum/12.0);
    }

    return 0;
}
