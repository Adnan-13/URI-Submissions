    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
    	int n,hour,min,sec;
    	scanf("%d",&n);
    	hour=n/3600;
    	n%=3600;
    	min=n/60;
    	n%=60;
    	sec=n;
    	printf("%d:%d:%d\n",hour,min,sec);
    	return 0;	
    }