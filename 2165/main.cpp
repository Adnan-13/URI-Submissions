#include <bits/stdc++.h>

using namespace std;

int main()
{
    string line;

    getline(cin, line);

    if(line.size() <= 140) printf("TWEET\n");

    else printf("MUTE\n");

    return 0;
}
