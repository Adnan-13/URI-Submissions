#include <bits/stdc++.h>

using namespace std;

int main()
{
    int depurtureTime, travelTime, timeZone;

    scanf("%d%d%d", &depurtureTime, &travelTime, &timeZone);

    int answer = depurtureTime + travelTime + timeZone;

    if(answer >= 24) answer -= 24;

    else if(answer < 0) answer += 24;

    printf("%d\n", answer);

    return 0;
}
