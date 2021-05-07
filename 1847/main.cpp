#include <bits/stdc++.h>

using namespace std;

int diff(int i, int j)
{
	if(i >= j) return i-j;
	
	else return j-i;
}

int main()
{
	
	int temp1, temp2, temp3;
	
	scanf("%d%d%d", &temp1, &temp2, &temp3);
	
	bool happy = true;
	
	if(temp2 > temp1)
	{
		if(temp3 <= temp2)
		{
			happy = false;
		}
		
		if(temp3 > temp2)
		{
			if(diff(temp2, temp3) < diff(temp1, temp2))
			{
				happy = false;
			}
			
		}
	}
	
	if(temp2 < temp1)
	{
		if(temp3 < temp1)
		{
			if(diff(temp2, temp3) >= diff(temp2, temp1))
			{
				happy = false;
			}
		}
	}
	
	else
	{
		if(temp3 < temp2)
		{
			happy = false;
		}
	}
	
	if(temp1 == temp2 && temp2 == temp3)
	{
		happy = false;
	}
	
	if(happy)
	{
		printf(":)\n");
	}
	
	else
	{
		printf(":(\n");
	}
	
	return 0;
}