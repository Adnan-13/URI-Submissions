#include <bits/stdc++.h>

using namespace std;

int main()
{
    int testCases;

    scanf("%d", &testCases);

    while(testCases--)
    {
        double pA, pB, gA, gB;

        scanf("%lf%lf%lf%lf", &pA, &pB, &gA, &gB);

        int year=0;

        while(pA<=pB)
        {
            pA+=int((pA*gA)/100);

            pB+=int((pB*gB)/100);

            year++;

            if(year>100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }

		if(year<=100)
		{
        	printf("%d anos.\n", year);
		}
    
    }

    return 0;
}
