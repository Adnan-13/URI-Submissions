#include <bits/stdc++.h>

using namespace std;

int main()

{
    double sum=0;
    int j=1;

    for(int i=1; i<=39; i+=2)
    {
        sum+=(i+0.0)/j;

        j*=2;
    }

    printf("%.2lf\n", sum);

    return 0;
}
