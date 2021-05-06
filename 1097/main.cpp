#include <bits/stdc++.h>

using namespace std;

int main()
{
    int j=7;

    for(int i=1; i<=9; i+=2)
    {
        int backup=j;
        for(int k=1; k<=3; k++)
        {
            printf("I=%d J=%d\n",i, backup);
            backup--;
        }
        j+=2;
    }

    return 0;
}
