#include <bits/stdc++.h>

using namespace std;

int main()
{
    int age, sum=0, ageCount=0;

    while(scanf("%d", &age) && age>=0)
    {
        sum+=age;

        ageCount++;
    }

    printf("%.2f\n", (sum+0.0)/ageCount);

    return 0;
}
