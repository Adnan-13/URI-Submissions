#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n[1000];

    int num;

    scanf("%d", &num);

    int j=0;

    for(int i=0; i<1000; i++)
    {
        n[i]=j++;

        if(j==num)
        {
            j=0;
        }
    }
    for(int i=0; i<1000; i++)
    {
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}
