#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	
	scanf("%d", &t);
	
	string temp;
	
	getline(cin, temp);
	
	while(t--)
	{
		string input;
		
		getline(cin, input);
		
		reverse(input.begin(), input.end());
		
		for(int i = 0; i < input.size(); i++)
		{
			if((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z')) input[i] += 3;
		}
		
		for(int i = input.size()/2; i < input.size(); i++) input[i]--;
		
		cout << input << endl;
	}
	
	return 0;
}
