#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    scanf("%d", &t);

    while(t--)
    {
        string word;

        cin >> word;

        double time = 0;

        for(int i = 0; i < word.size(); i++) time += 1.0 / 100;

        printf("%.2lf\n", time);
    }

    return 0;
}
