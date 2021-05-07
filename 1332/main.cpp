#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	
	scanf("%d", &t);
	
	while(t--)
	{
		string numberInWord;
		
		cin >> numberInWord;
		
		if(numberInWord.size() == 5) printf("3\n");
		
		else 
		{
			if((numberInWord[0] == 't' && numberInWord[1] == 'w') || (numberInWord[1] == 'w' && numberInWord[2] == 'o') || (numberInWord[0] == 't' && numberInWord[2] == 'o')) printf("2\n");
		
			
			else printf("1\n");
		}
	}
	
	return 0;
}