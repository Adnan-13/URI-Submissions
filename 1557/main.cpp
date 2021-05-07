#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    while(scanf("%d", &n) && n)
    {
        int maximum = pow(2, n+n-2);

        int digit=0;

        while(maximum>0)
        {
            maximum/=10;

            digit++;
        }

        int matrix[n][n];

        int num=1;

        for(int i=0; i<n; i++)
        {
            int backup = num;

            for(int j=0; j<n; j++)
            {

                matrix[i][j]=backup;

                backup*=2;

            }

            num*=2;
        }

        for(int i=0; i<n; i++)
        {

            for(int j=0; j<n; j++)
            {

                if(j == 0)
                {
                    cout << setw(digit) << matrix[i][j];
                }
                else
                {
                    cout << " " << setw(digit) << matrix[i][j];
                }

            }

            printf("\n");
        }

        printf("\n");
    }

    return 0;
}