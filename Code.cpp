#include<stdio.h>
#include<conio.h>
#include<cstdlib>


int main()
{
	int input;
	int a[3][3]={{0,0,0},{0,0,0},{0,0,0}};
	int sum[3][3]={{0,0,0},{0,0,0},{0,0,0}};
	
	
	int x01[3][3]={{1,1,1},{0,1,0},{0,0,0}};
	int x02[3][3]={{0,1,1},{0,0,1},{0,0,0}};
	int x10[3][3]={{1,0,0},{1,1,0},{1,0,0}};
	int x00[3][3]={{1,1,0},{1,0,0},{0,0,0}};
	int x11[3][3]={{0,1,0},{1,1,1},{0,1,0}};
	int x12[3][3]={{0,0,1},{0,1,1},{0,0,1}};
	int x20[3][3]={{0,0,0},{1,0,0},{1,1,0}};
	int x21[3][3]={{0,0,0},{0,1,0},{1,1,1}};
	int x22[3][3]={{0,0,0},{0,0,1},{0,1,1}};
	
	
	int i , j;
	printf("initially the game is\n");

	for (i = 0; i < 3; i++)
	{
		for ( j = 0; j < 3; j++)
		{
			a[i][j] = 0;
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");

	
	for (i = 0; i < 100; i++)// multiple execution
	{
	sum[i][j];
	
	
		scanf("%d",&input);
		system("cls");
		printf("\n\n\n\n");
	if(input==7)//1
	{
		
	for (i = 0; i < 3; i++)
	{
		for ( j = 0; j < 3; j++)
		{
			sum[i][j]=sum[i][j]+x00[i][j];
			if(sum[i][j]%2==0)
			{
				printf("\t0");
			}
			else
			{
				printf("\t*");
			}
		}
		printf("\n");
	}
		
	}
	
	if(input==8)//2
	{
		
	for (i = 0; i < 3; i++)
	{
		for ( j = 0; j < 3; j++)
		{
			sum[i][j]=sum[i][j]+x01[i][j];
			if(sum[i][j]%2==0)
			{
				printf("\t0");
			}
			else
			{
				printf("\t*");
			}
		}
		printf("\n");
	}
		
	}
	
	if(input==9)//3
	{
		
	for (i = 0; i < 3; i++)
	{
		for ( j = 0; j < 3; j++)
		{
			sum[i][j]=sum[i][j]+x02[i][j];
			if(sum[i][j]%2==0)
			{
				printf("\t0");
			}
			else
			{
				printf("\t*");
			}
		}
		printf("\n");
	}
		
	}
	
	if(input==4)//4
	{
		
	for (i = 0; i < 3; i++)
	{
		for ( j = 0; j < 3; j++)
		{
			sum[i][j]=sum[i][j]+x10[i][j];
			if(sum[i][j]%2==0)
			{
				printf("\t0");
			}
			else
			{
				printf("\t*");
			}
		}
		printf("\n");
	}
		
	}
	
	
	if(input==5)//5
	{
		
	for (i = 0; i < 3; i++)
	{
		for ( j = 0; j < 3; j++)
		{
			sum[i][j]=sum[i][j]+x11[i][j];
			if(sum[i][j]%2==0)
			{
				printf("\t0");
			}
			else
			{
				printf("\t*");
			}
		}
		printf("\n");
	}
		
	}
	
	
	if(input==6)//6
	{
		
	for (i = 0; i < 3; i++)
	{
		for ( j = 0; j < 3; j++)
		{
			sum[i][j]=sum[i][j]+x12[i][j];
			if(sum[i][j]%2==0)
			{
				printf("\t0");
			}
			else
			{
				printf("\t*");
			}
		}
		printf("\n");
	}
		
	}
	
	
	if(input==1)//7
	{
		
	for (i = 0; i < 3; i++)
	{
		for ( j = 0; j < 3; j++)
		{
			sum[i][j]=sum[i][j]+x20[i][j];
			if(sum[i][j]%2==0)
			{
				printf("\t0");
			}
			else
			{
				printf("\t*");
			}
		}
		printf("\n");
	}
		
	}
	
	if(input==2)//8
	{
		
	for (i = 0; i < 3; i++)
	{
		for ( j = 0; j < 3; j++)
		{
			sum[i][j]=sum[i][j]+x21[i][j];
			if(sum[i][j]%2==0)
			{
				printf("\t0");
			}
			else
			{
				printf("\t*");
			}
		}
		printf("\n");
	}
		
	}
	
	if(input==3)//9
	{
		
	for (i = 0; i < 3; i++)
	{
		for ( j = 0; j < 3; j++)
		{
			sum[i][j]=sum[i][j]+x22[i][j];
			if(sum[i][j]%2==0)
			{
				printf("\t0");
			}
			else
			{
				printf("\t*");
			}
		}
		printf("\n");
	}
		
	}	
}
}
