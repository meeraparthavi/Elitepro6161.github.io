#include<stdio.h>
int fact(int n)
{
	int i,f=1;
	for(i=2;i<=n;i++)
		f=f*i;
	return f;	
}
void main()
{
	int x=3,y=4,z=3,s=2,m=3,c=2;int f1,f2,f3;
	char q1,q2,q3,Q[26]={'A','B','C','D','E','F','G','H','I','J','K'};
	f1=fact(x)/fact(s)*fact(x-s);
	f2=fact(y)/fact(m)*fact(y-m);
	f3=fact(z)/fact(c)*fact(z-c);
	printf("Total number of Question papers that can be generated without imposing constraints is %d",(f1*f2*f3));
	for(int i=0;i<(s+m+c);i++)
	{
		Q[i];
	}
}
