#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(true)
    {
        int num;

        scanf("%d", &num);

        if(num==0) break;

        for(int i=1; i<=num; i++)
        {
            printf("%d", i);

            if(i!=num) printf(" ");
        }

        printf("\n");

    }
    return 0;
}
