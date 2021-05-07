#include <bits/stdc++.h>
 
using namespace std;
 
long long int diff(long long int x, long long int y)
{
	if(x > y) return x - y;
 
	else return y - x;
}
 
int main()
{
	long long int team1, team2;
 
	while(scanf("%lld%lld", &team1, &team2) == 2)
	{
		printf("%lld\n", diff(team1, team2));
	}
 
	return 0;
}