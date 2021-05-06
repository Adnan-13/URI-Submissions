#include <bits/stdc++.h>

using namespace std;

int main()
{
    int numGiven[3];
    for(int i=0; i<3; i++)
    {
        scanf("%d",&numGiven[i]);
    }
    int num[3];
    copy(numGiven,numGiven+4,num);

    sort(num,num+3);
    for(int i=0; i<3; i++)
        printf("%d\n",num[i]);

    printf("\n");

    for(int i=0; i<3; i++)
        printf("%d\n",numGiven[i]);
}
