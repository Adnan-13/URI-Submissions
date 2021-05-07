#include <bits/stdc++.h>

using namespace std;

int dif(int x, int y)
{
    if(x > y) return x - y;

    else return y - x;
}

int main()
{
    int jumpHeight, numberOfPipes;

    scanf("%d%d", &jumpHeight, &numberOfPipes);

    int previousPipe, newOne;

    scanf("%d", &previousPipe);

    bool gameOver = false;

    for(int i = 1; i < numberOfPipes; i++)
    {
        scanf("%d", &newOne);

        if(dif(previousPipe , newOne) > jumpHeight)
        {
            gameOver = true;

            break;
        }

        previousPipe = newOne;
    }

    if(gameOver) printf("GAME OVER\n");

    else printf("YOU WIN\n");

    return 0;
}
