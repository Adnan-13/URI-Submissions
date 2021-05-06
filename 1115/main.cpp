#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,y;
    while(scanf("%d%d", &x, &y) && x && y)
    {
        if(x>0)
        {
            if(y>0)
            {
                printf("primeiro\n");
            }
            else
            {
                printf("quarto\n");
            }
        }
        else
        {
            if(y>0)
            {
                printf("segundo\n");
            }
            else
            {
                printf("terceiro\n");
            }
        }
    }

    return 0;
}
