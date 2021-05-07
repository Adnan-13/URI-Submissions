#include <bits/stdc++.h>

using namespace std;

int main()
{
    int  p, j1, j2, r, a;

    scanf("%d%d%d%d%d",  &p, &j1, &j2, &r, &a);

    bool player1Wins = false;

    if(r == 1)
    {
        if(a == 0) player1Wins = true;
    }

    else
    {
        if(a == 1) player1Wins = true;

        else
        {
            if(((j1 + j2) % 2 == 0) && p == 1) player1Wins = true;

            else if(((j1 + j2) % 2 != 0) && p == 0) player1Wins = true;
        }
    }

    if(player1Wins) printf("Jogador 1 ganha!\n");

    else printf("Jogador 2 ganha!\n");

    return 0;
}
