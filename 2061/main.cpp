#include <bits/stdc++.h>

using namespace std;

int main()
{
    int totalTabs, numberOfActions;

    scanf("%d%d", &totalTabs, &numberOfActions);

    for(int i = 1; i <= numberOfActions; i++)
    {
        string action;

        cin >> action;

        if(action == "fechou")
        {
            totalTabs--;

            totalTabs += 2;
        }

        else
        {
            totalTabs--;
        }


    }

    printf("%d\n", totalTabs);

    return 0;
}
