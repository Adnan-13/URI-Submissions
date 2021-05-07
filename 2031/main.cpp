#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    scanf("%d", &t);

    while(t--)
    {
        string player1, player2;

        cin >> player1;

        cin >> player2;

        if(player1 == "ataque")
        {
            if(player2 == "pedra" || player2 == "papel")
            {
                printf("Jogador 1 venceu\n");
            }

            else if(player2 == "ataque")
            {
                printf("Aniquilacao mutua\n");
            }
        }

        else if(player1 == "pedra")
        {
            if(player2 == "papel")
            {
                printf("Jogador 1 venceu\n");
            }

            else if(player2 == "pedra")
            {
                printf("Sem ganhador\n");
            }

            else
            {
                printf("Jogador 2 venceu\n");
            }
        }

        else
        {
            if(player2 == "papel")
            {
                printf("Ambos venceram\n");
            }

            else
            {
                printf("Jogador 2 venceu\n");
            }
        }
    }

    return 0;
}
