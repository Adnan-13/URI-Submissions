#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int t;
 
	scanf("%d", &t);
 
	while(t--)
	{
		int sum;
 
		scanf("%d", &sum);
 
		if(sum % 2 == 0) printf("0\n");
 
		else printf("1\n");
	}
 
	return 0;
}