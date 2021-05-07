#include <bits/stdc++.h>

using namespace std;

int main()
{
	string line;
	
	while(getline(cin, line))
	{
		int pos = line.size();
		
		int space = 0;
		
		for(int i = 0; i < line.size(); i++)
		{
			for(int j = 1; j <= space; j++)
			{
				cout << " ";
			}
			
			for(int j = 0; j < pos; j++)
			{
				if(j == 0) cout <<  line[j];
				
				else cout <<  " " << line[j];
			}
			
			pos--;
			space++;
			
			printf("\n");
		}
		
		printf("\n");
	}
	
	return 0;
}