/*据说著名犹太历史学家 Josephus有过以下的故事：在罗马人占领乔塔帕特后，39 个犹太人与Josephus和他的
朋友躲到一个洞中，39个犹太人决定宁愿死也不要被敌人抓到，于是决定了一个自杀方式，41个人排成一个圆圈，
由第1个人开始报数，每报数到第3人该人就必须自杀，然后再由下一个重新报数，直到所有人都自杀身亡为止。
然而Josephus 和他的朋友并不想遵从。请你编写一个函数，计算一下Josephus 和他的朋友应该安排在什么位置，
才能免于一死（最后剩下他们两人）。

要求人的总数与报数均由键盘输入，不能指定成41和3*/

int Josephus(int n,int m)                //递归算法计算Josephus问题
{
	if (n<=1||m<=1)
		return -1;
	if (n==2)
	{
		if (m%2==0)
			return 1;
		else
			return 2;
	}
	else
	{
		return (Josephus(n-1,m)+m-1)%n+1;
	}
}
int main(void)
{
	int n,m,j;
	printf("请输入总人数：");
	scanf("%d",&n);
	printf("\n请输入报数值：");
	scanf("%d",&m);
	j=jiao(n, m);
	printf("\nJosephus和他朋友的位置：%d %d",j,(j+1)/2);
	return 0;
}
