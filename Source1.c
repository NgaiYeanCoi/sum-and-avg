#include<stdio.h>
void main()
{
	int a, b,i=0,c=0;
	int sum;
	int retry=0;
	float avg;
	do
	{
	 a = 0; //執行之前先重置
	 sum = 0;
	 avg = 0;
	 b = 0;
		do
		{
			printf("請輸入需要幾個整數:\n");
			scanf("%d", &a);
			if (a < 2)
			{
				printf("輸入錯誤\n");
			}
		} 
			while (a < 2);//判斷輸入不能小於2是則循環
				int c = 0;
				for(i=0;i<a;i++)
					{
						c++;
						printf("請輸入第%d個整數\n",c);
						scanf("%d",&b);
						sum = b + sum;
						avg =(float) sum / (float)a;
					}
					printf("%d個數之和為:%d 平均值為:%0.3f \n\n", c,sum, avg);
					do
					{ 
						printf("是否要繼續? 按0繼續 按1中止\n");
						scanf("%d", &retry);
						if (retry != 0 && retry != 1)
						printf("輸入錯誤請重新輸入\n");}
						while (retry != 0 && retry != 1);
	} 
	while (retry==0);
}