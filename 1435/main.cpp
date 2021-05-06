#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    while(scanf("%d", &n) && n)
    {
        int arr[n][n];

        int firstPos=n-1, secondPos=0, mdl=n/2;

        if(n%2!=0)
        {
            mdl++;
        }

        for(int k=1; k<=mdl; k++)
        {
            for(int i=0; i<n; i++)
            {
                for(int j=0; j<n; j++)
                {
                    if((i==firstPos || i==secondPos))
                    {
                        arr[i][j]=k;
                    }
                }
            }
            firstPos--;
            secondPos++;
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                printf("%d  ", arr[i][j]);
            }
            printf("\n\n");
        }
    }

    return 0;
}
