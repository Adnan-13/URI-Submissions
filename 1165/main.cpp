#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;

    scanf("%d", &cases);

    while(cases--)
    {
        int num;

        bool prime=true;

        scanf("%d", &num);

        for(int i=2; i<num; i++)
        {
            if(num%i==0)
            {
                prime=false;

                printf("%d nao eh primo\n", num);

                break;
            }
        }

        if(prime)
        {
            printf("%d eh primo\n", num);
        }

    }

    return 0;
}
