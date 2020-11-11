#include<stdio.h>
int a;
void abc();
void run();
int try();
main()
{
	abc();
}
void abc()
{
	for (a=0; a < 2;)
	{
		printf("請輸入需要幾個整數:\n");
		scanf("%d", &a);
		if (a < 2)
		{
			printf("輸入錯誤\n");
		}
		else
		{
			run();
		}
	}
}
void run()
{
	int sum = 0;
	int b = 0;
	int retry = 0;
	int c = 0;
	float avg;
	for (int i = 0; i < a; i++)
	{
		c++;
		printf("請輸入第%d個整數\n", c);
		scanf("%d", &b);
		if (b == 0 || b < 0)
		{
			printf("輸入錯誤\n");
			abc();
		}
		sum = b + sum;
		avg = (float)sum / (float)a;
	}
	printf("%d個數之和為:%d 平均值為:%0.3f \n\n", c, sum, avg);
	try();
}
int try()
{
	int retry = 0;
	do
	{
		printf("是否要繼續? 按0繼續 按1中止\n");
		scanf("%d", &retry);
		if (retry == 0) 
		{
			abc();
		}
		else if(retry==1)
		{
			return 0;
		}
		else 
		{
			printf("輸入錯誤請重新輸入\n");
		}
	} while (retry != 0 && retry != 1);
}
