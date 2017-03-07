#include<algorithm>
#include<iostream>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<cmath>

using namespace std;

int n,m;
int save[1000];
int used[1000];
int first[1000];

main()
{
	while(cin>>n>>m&&m&&n)
	{
		memset(used,0,sizeof(used));
		int count=0;
		while(!used[n]&&n)
		{
			used[n]=1;
			save[count]=10*n/m;
			first[n]=count++;
			n=10*n%m;
		}
		
		printf(".");
		for(int i=0;i<count;++i)
		{
			if(i%50==49)
				printf("\n");
			printf("%d",save[i]);
		}
		if (!n)
			printf("\nThis expansion terminates.\n\n");
		else
			printf("\nThe last %d digits repeat forever.\n\n",count-first[n]);
	}
}
