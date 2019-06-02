/*过年了，刘备、关羽、张飞一起放鞭炮，每一个人一支香，每人初始都为N个鞭炮（散），
刘备每一秒燃放一个，关羽每两秒燃放一个，张飞每三秒燃放一个，在不考虑燃烧时间跟安
全的情况下，鞭炮即点即炸，开始的时候大家一起开始放鞭炮，问大家都放完时，一共可以
听到多少次响声？一共花了多长时间？*/


#include <stdio.h>

void firecrackers( int n )
{
	int time,i,count=0;
	time=1+3*(n-1);
	for(i=1;i<=(1+1*(n-1));i++)
	{
		if(i%1==0)
			count+=1;
	}
	for(i=n+1;i<=(1+2*(n-1));i++)
	{
		if(i%2==1||i%3==1)
			count+=1;
	}
	for(i=(1+2*(n-1))+1;i<=time;i++)
	{
		if(i%3==1)
			count+=1;
	}
	printf("time = %d \n",time);
	printf("count = %d \n",count);
}


int main(void)
{
	int a=3;
	printf("输入初始鞭炮数:");
	scanf("%d",&a);
	firecrackers(a);

	return 0;
}
