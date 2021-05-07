#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	
	scanf("%d", &t);
	
	while(t--)
	{
		string number;
		
		cin >> number;
		
		int leds = 0;
		
		for(int i = 0; i < number.size(); i++)
		{
			if(number[i] == '0') leds += 6;
			
			else if(number[i] == '0') leds += 6;
			
			else if(number[i] == '1') leds += 2;
			
			else if(number[i] == '2') leds += 5;
			
			else if(number[i] == '3') leds += 5;
			
			else if(number[i] == '4') leds += 4;
			
			else if(number[i] == '5') leds += 5;
			
			else if(number[i] == '6') leds += 6;
			
			else if(number[i] == '7') leds += 3;
			
			else if(number[i] == '8') leds += 7;
			
			else if(number[i] == '9') leds += 6;
		}
		
		printf("%d leds\n", leds);
	}
	
	return 0;
}