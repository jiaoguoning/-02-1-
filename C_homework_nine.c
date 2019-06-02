#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
   int      no;
   char    name[15];
   int      score;
}STU;
STU * create(int n)//创建数组
{
	int i;
	STU * h = (STU *)calloc(n,sizeof(STU));
	for(i=0;i<n;i++)
	{
		scanf("%d",&(h+i)->no);
		scanf("%s",&(h+i)->name);
		scanf("%d",&(h+i)->score);
	}
	return h;
}
void sort(STU *a,int n)//排序
{
	int i,j;
	for(i=0;i<n;i++)
	{
	    for(j=1;j<n;j++)
		{	
			STU t;
			if((a)->score>=(a+j)->score)
			{
				t=*a;
				*(a)=*(a+i+1);
				*(a+i+1)=t;
			}
		}
	}
	
}
void visit(STU*p,int len)//遍历
{
	int i;
	for(i=0;i<len;i++)
	{
		printf("no:%d ,name:%s ,score:%d \n",(p+i)->no,(p+i)->name,(p+i)->score);
	}
}


int main(void)
{
	STU *arr;
	int num;
	scanf("%d",&num);
	arr=create(num);
	visit(arr,num);
	sort(arr,num);
	visit(arr,num);
	return 0;
}
