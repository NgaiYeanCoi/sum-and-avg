#include<stdio.h>
void main()
{
	int a, b,i=0,c=0;
	int sum;
	int retry=0;
	float avg;
	do
	{
	 a = 0; //����֮ǰ������
	 sum = 0;
	 avg = 0;
	 b = 0;
		do
		{
			printf("Ոݔ����Ҫ�ׂ�����:\n");
			scanf("%d", &a);
			if (a < 2)
			{
				printf("ݔ���e�`\n");
			}
		} 
			while (a < 2);//�Д�ݔ�벻��С�2�Ǆtѭ�h
				int c = 0;
				for(i=0;i<a;i++)
					{
						c++;
						printf("Ոݔ���%d������\n",c);
						scanf("%d",&b);
						sum = b + sum;
						avg =(float) sum / (float)a;
					}
					printf("%d����֮�͞�:%d ƽ��ֵ��:%0.3f \n\n", c,sum, avg);
					do
					{ 
						printf("�Ƿ�Ҫ�^�m? ��0�^�m ��1��ֹ\n");
						scanf("%d", &retry);
						if (retry != 0 && retry != 1)
						printf("ݔ���e�`Ո����ݔ��\n");}
						while (retry != 0 && retry != 1);
	} 
	while (retry==0);
}