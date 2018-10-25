#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//1. 
///*5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果 
//A选手说：B第二，我第三； 
//B选手说：我第二，E第四； 
//C选手说：我第一，D第二； 
//D选手说：C最后，我第三； 
//E选手说：我第四，A第一； 
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。*/ 

//  ^

//全排列（未实现）//全排列（递归回溯算法）
//int main()
//{
//	int arr[] = {1,2,3,4,5};
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int tmp = 0;
//
//	for(i=0; i<5; i++)
//		for(j=4; j>0; j--)
//		{
//				for(n=0; n<5; n++)
//				{
//					printf("%d",arr[n]);
//				}
//				printf("\n");
//			while( ((arr[1]==2)^(arr[0] == 3)) && ((arr[1] == 2)^(arr[4] == 4)) && ((arr[2] == 1)^(arr[3] == 2)) && ((arr[2]==5)^(arr[3]==3)) && ((arr[4] == 4)^(arr[0] == 1)))
//			{	
//				for(n=0; n<5; n++)
//				{
//					printf("%d",arr[n]);
//				}
//				printf("\n");
//				break;
//			}
//			tmp = arr[i];
//			arr[i] = arr[j];
//			arr[j] = tmp;
//		}
//		return 0;
//}

int main()
{
	int arr[] = {1,2,3,4,5};
	int i = 0;
	int j = 0;
	int k = 0;
	int m = 0;
	int n = 0;
	int tmp = 0;

	for(i=1; i<6; i++)
	{
		for(j=1; j<6; j++)
		{
			for(k=1; k<6; k++)
			{	
				for(m=1; m<6;m++)
				{	
					for(n=1; n<6; n++)
					{
						if( ((j==2)^(i == 3)) && ((j == 2)^(n == 4)) && ((k == 1)^(m == 2)) && ((k==5)^(m==3)) && ((n == 4)^(i == 1)))
						{	
							if((i*j*k*m*n)==120)
							{
								printf("%d ,%d,%d,%d,%d",i,j,k,m,n);
								printf("\n");
							break;
							}
						}
					}
				}
			}
		}
	}
	
		return 0;
}
//2. 
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个 
//嫌疑犯的一个。以下为4个嫌疑犯的供词。 
//A说：不是我。		!A
//B说：是C。			C
//C说：是D。			D
//D说：C在胡说		!D
//已知3个人说了真话，1个人说的是假话。 
//现在请根据这些信息，写一个程序来确定到底谁是凶手。 

int main()
{
	char killer= 'A';
	
	for(killer='A'; killer<='D'; killer++)
	{
		if(((killer != 'A')+(killer == 'C')+(killer == 'D')+(killer != 'C')) == 3)
			printf("%c\n",killer);
	
	}

	return 0;
}


//3.在屏幕上打印杨辉三角。 
//1 
//1 1 
//1 2 1 
//1 3 3 1

#define N 10


int main()
{
	int arr[N][N] = {0};
	int i = 0;
	int j = 0;
	int t = 0;

	for(i=0; i<N; i++)
	{
		arr[i][0] = 1;
		arr[i][i] = 1;
	}
	for(i=2; i<N; i++)     //计算各项值
		for(j=1; j<i; j++)
		{
			arr[i][j] = arr[i-1][j-1] +arr[i-1][j];
		}
	for(i=0; i<N; i++)
	{
		for(t=0; t<4*(N-i)/2;t++)     //使杨辉三角从中间输出
		printf(" ");
		for(j=0; j<=i; j++)
		{
			printf("%4d",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}