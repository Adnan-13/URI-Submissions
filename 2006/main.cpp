#include <bits/stdc++.h>

using namespace std;

int main()
{
	int actualType, answer;
	
	scanf("%d", &actualType);
	
	int t = 5;
	
	int count = 0;
	
	while(t--)
	{
		scanf("%d", &answer);
		
		if(answer == actualType) count++;
	}
	
	printf("%d\n", count);
	
	return 0;
}