#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, q, t = 1;

    while(scanf("%d%d", &n, &q) && (n || q))
    {
        printf("CASE# %d:\n", t++);

        int marbel[n];

        for(int i = 0; i < n; i++)
        {
            scanf("%d", &marbel[i]);
        }

        sort(marbel, marbel + n);

        int query[q];

        for(int i = 0 ; i < q; i++)
        {
            scanf("%d", &query[i]);

            bool notFound = true;
            for(int j = 0; j < n; j++)
            {
                if(marbel[j] == query[i])
                {
                    notFound = false;
                    printf("%d found at %d\n", query[i], (j + 1));
                    break;
                }
            }

            if(notFound)
            {
                printf("%d not found\n", query[i]);
            }
        }

    }



    return 0;
}
