#include <bits/stdc++.h>

using namespace std;

int main()
{
    int word;

    scanf("%d", &word);

    char quote[40] = "LIFE IS NOT A PROBLEM TO BE SOLVED";

    for(int i = 0; i < word; i++) printf("%c", quote[i]);

    printf("\n");

    return 0;
}
