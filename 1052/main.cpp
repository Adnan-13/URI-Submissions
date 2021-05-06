#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;

    scanf("%d", &num);

    string month[12]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    for(int i=0; i<12; i++)
    {
        if(num==i+1)
        {
            cout<<month[i]<<endl;
        }
    }
    return 0;
}
