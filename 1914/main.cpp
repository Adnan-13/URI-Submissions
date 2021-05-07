#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    scanf("%d", &t);

    while(t--)
    {
        string player1, ans1, player2, ans2;

        cin >> player1 >> ans1 >> player2 >> ans2;

        int num1, num2;

        scanf("%d%d", &num1, &num2);

        if((num1 + num2) % 2 == 0 )
        {
            if(ans1 == "PAR") cout << player1 << endl;

            else cout << player2 << endl;
        }

        else
        {
            if(ans1 == "IMPAR") cout << player1 << endl;

            else cout << player2 << endl;
        }
    }

    return 0;
}
