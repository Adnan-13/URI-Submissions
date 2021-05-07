    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main()
    {
    	int t;
     
    	while(scanf("%d", &t) == 1)
    	{
    		string code[t];
     
    		for(int i = 0; i < t; i++) cin >> code[i];
     
    		sort(code, code + t);
     
    		for(int i = 0; i < t; i++) cout << code[i] << endl;
    	}
     
    	return 0;
    }