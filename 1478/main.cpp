#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    while(scanf("%d", &n) && n)
    {
        int matrix[n][n];

        int index, num=1;

        for(int i=0; i<n; i++)
        {
            if(num==1)
            {
                int backup=num;

                for(int j=0; j<n; j++)
                {
                    matrix[i][j]=backup++;
                }

            }

            else
            {
                int backup=num;

                for(int j=0; j<n; j++)
                {
                    matrix[i][j]=backup;

                    if(backup==1)
                    {
                        index=j;

                        break;
                    }

                    backup--;
                }

                for(int j=index; j<n; j++)
                {
                    matrix[i][j]=backup++;
                }
            }

            ++num;
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(j==0)
                {
                    printf("%3d", matrix[i][j]);
                }

                else
                {
                    printf(" %3d", matrix[i][j]);
                }
            }

            printf("\n");
        }

        printf("\n");
    }



    return 0;
}
