    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
    	int testCases;
     
    	scanf("%d", &testCases);
     
    	while(testCases--)
    	{
    		double food;
     
    		scanf("%lf", &food);
     
    		int days = 0;
     
    		while(food > 1)
    		{
    			food /= 2;
     
    			days++;
    		}
     
    		printf("%d dias\n", days);
    	}
    }