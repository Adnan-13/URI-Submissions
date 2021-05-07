#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;

    while(scanf("%d", &num)==1)
    {
        int arr[num][num];

        for(int i=0; i<num; i++)
        {
            for(int j=0; j<num; j++)
            {
                if(i==j && i+j!=num-1)
                {
                    arr[i][j]=1;
                }

                else if(i+j==num-1)
                {
                    arr[i][j]=2;
                }

                else
                {
                    arr[i][j]=3;
                }
            }
        }

        for(int i=0; i<num; i++)
        {
            for(int j=0; j<num; j++)
            {
                printf("%d", arr[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}
