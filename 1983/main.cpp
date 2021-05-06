#include <bits/stdc++.h>

using namespace std;

int main()
{
    int students;

    scanf("%d", &students);

    int registrationNumber[students];

    double note[students], highest = -1;

    int index = -1;

    for(int i = 0; i < students; i++)
    {
        scanf("%d%lf", &registrationNumber[i], &note[i]);

        if(note[i] >= 8 && note[i] > highest)
        {
            index = i;

            highest = note[i];
        }
    }

    if(index == -1) printf("Minimum note not reached\n");

    else printf("%d\n", registrationNumber[index]);

    return 0;
}
