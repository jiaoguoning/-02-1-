//鸡兔同笼
main(void)
{
	int i;
	for(i=1;i<=35;i++)
	{
		if(i*4+(35-i)*2==94)
		{
			//printf("%d %d",i,35-i);
			break;
		}	
	}
	if(i<2)
		printf("无解");
	else
		printf("兔子的个数为%d 鸡的个数为%d",i,35-i);
	return 0;
  
  
  
 //最大公约数
/*main (void)
{
	int m,n,min;
	int i=1;
	printf("请输入两个整数：\n");
	scanf("%d %d",&m,&n);
	if(n<m)
		min=n;
	else
		min=m;
	for(i=1;i<=min;i++)
	{
		if(n%i==0&&m%i==0)
			printf("它们的最小公约数为：%d",i);
		break;
	}
	return 0;
}*/

//如何判定这个数是素数
/*main (void)
{
	int x,i;
	printf("请输入一个整数：\n");
	scanf("%d",&x);
	for(i=2;i<=x-1;i++)
	{
		if(x%i!=0)
			printf("%d 是素数",x);
		else
			printf("%d 不是素数",x);
	}
	return 0;
}*/

#include<stdio.h>



//0-1000 内素数的个数
main(void)
{
	int y,i;
	int s=0;
	for(i=2;i<=1000;i++)
	{
		for(y=2;y<=i-1;y++)
		{
			if(i%y!=0)
			{

				break;
			}
			s++;
		}
	}
	printf("素数的个数是 %d",1000-s);
	
	return 0;
}


main(void)
{
	int a,n,j,i,t,z;
	int q=1;
	scanf("%d %d",&a,&n);
	for(z=0,i=1;i<=n;i++)
	{
		t=a;
		for(j=1;j<=i;j++)
		{
			q*=10;
			t+=a*q;
		}
		z+=t;
	}
	printf("%d",z);
	return 0;
}
