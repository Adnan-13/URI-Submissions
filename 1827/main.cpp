#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    while(scanf("%d", &n)==1)
    {

        if(n==0) continue;

        int one=n/3;

        int matrix[n][n];

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(i==j)
                {
                    matrix[i][j]=2;
                }

                else if(i+j == n-1)
                {
                    matrix[i][j]=3;
                }

                else
                {
                    matrix[i][j]=0;
                }
            }

        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if((i>=one && i<n-one) && (j>=one && j<n-one))
                {
                    matrix[i][j]=1;
                }

                if(i == j && i+j == n-1)
                {
                    matrix[i][j]=4;
                }
            }
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                printf("%d", matrix[i][j]);
            }

            printf("\n");
        }



        printf("\n");
    }

    return 0;
}
