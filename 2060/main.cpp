#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	
	scanf("%d", &t);
	
	int count2 = 0, count3 = 0, count4 = 0, count5 = 0;
	
	while(t--)
	{
		int num;
		
		scanf("%d", &num);
		
		if(num % 2 == 0) count2++;
		
		if(num % 3 == 0) count3++;
		
		if(num % 4 == 0) count4++;
		
		if(num % 5 == 0) count5++;
	}
	
	printf("%d Multiplo(s) de 2\n%d Multiplo(s) de 3\n%d Multiplo(s) de 4\n%d Multiplo(s) de 5\n", count2, count3, count4, count5);
	
	return 0;
}