#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testCases;

    scanf("%d", &testCases);

    for(int i=1; i <= testCases; i++)
    {
        char sheldon[10], raj[10];

        scanf("%s%s", sheldon, raj);

        string win, lose, draw;

        win = "Bazinga!";

        lose = "Raj trapaceou!";

        draw = "De novo!";

        printf("Caso #%d: ", i);

        if(sheldon[0] == raj[0] && sheldon[1] == raj[1])
        {
            cout << draw << endl;
        }

        else if(sheldon[0] == 'p' && sheldon[1] == 'e')
        {
            if(raj[0] == 't' || raj[0] == 'l')
            {
                cout << win << endl;
            }

            else
            {
                cout << lose << endl;
            }
        }

        else if(sheldon[0] == 'p' && sheldon[1] == 'a')
        {
            if((raj[0] == 'p' && raj[1] == 'e') || raj[0] == 'S')
            {
                cout << win << endl;
            }

            else
            {
                cout << lose << endl;
            }
        }

        else if(sheldon[0] == 't')
        {
            if((raj[0] == 'p' && raj[1] == 'a') || raj[0] == 'l')
            {
                cout << win << endl;
            }

            else
            {
                cout << lose << endl;
            }
        }

        else if(sheldon[0] == 'l')
        {
            if(raj[0] == 'S' || (raj[0] == 'p' && raj[1] == 'a'))
            {
                cout << win << endl;
            }

            else
            {
                cout << lose << endl;
            }
        }

        else
        {
            if(raj[0] == 't' || (raj[0] == 'p' && raj[1] == 'e'))
            {
                cout << win << endl;
            }

            else
            {
                cout << lose << endl;
            }
        }

    }

    return 0;
}
