

#include<stdio.h>
int i,j;
int a[3][3]={1,2,3,4,5,6,7,8,9};
//char a[3][3]={"1","2","3","4","5","6","7","8","9"};
void display()
{
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("  %d ",a[i][j]);
		}
		printf("\n\n");
	}
}
void turnOfplayer1()
{
	printf("TURN OF PLAYER 1\n");
	int b;
	printf("Enter the number:");
	scanf("%d",&b);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]==b)
			{
				a[i][j]=0;
			}
		}
		
	}
	display();
	
}

void turnOfplayer2()
{
	printf("TURN OF PLAYER 2\n");
	int b;
	printf("Enter the number:");
	scanf("%d",&b);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]==b)
			{
				a[i][j]=10;
			}
		}
		
	}
	display();
	
}
int winOfplayer1()
{
	if(a[0][0]==0 && a[0][1]==0 && a[0][2]==0)
	return 1;
	if(a[1][0]==0 && a[1][1]==0 && a[1][2]==0)
	return 1;
	if(a[2][0]==0 && a[2][1]==0 && a[2][2]==0)
	return 1;
	
	if(a[0][0]==0 && a[1][0]==0 && a[2][0]==0)
	return 1;
	if(a[0][1]==0 && a[1][1]==0 && a[2][1]==0)
	return 1;
	if(a[0][2]==0 && a[1][2]==0 && a[2][2]==0)
	return 1;
	
	if(a[0][0]==0 && a[1][1]==0 && a[2][2]==0)
	return 1;
	if(a[2][0]==0 && a[1][1]==0 && a[0][2]==0)
	return 1;
}
int winOfplayer2()
{
	if(a[0][0]==10 && a[0][1]==10 && a[0][2]==10)
	return 1;
	if(a[1][0]==10 && a[1][1]==10 && a[1][2]==10)
	return 1;
	if(a[2][0]==10 && a[2][1]==10 && a[2][2]==10)
	return 1;
	
	if(a[0][0]==10 && a[1][0]==10 && a[2][0]==10)
	return 1;
	if(a[0][1]==10 && a[1][1]==10 && a[2][1]==10)
	return 1;
	if(a[0][2]==10 && a[1][2]==10 && a[2][2]==10)
	return 1;
	
	if(a[0][0]==10 && a[1][1]==10 && a[2][2]==10)
	return 1;
	if(a[2][0]==10 && a[1][1]==10 && a[0][2]==10)
	return 1;
}
int draw()
{
	int flag=0;int x=1;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]==x)
			{
				return 1;
			}
			x++;
		}
		
	}
}
int main()
{
	printf("***TIC TAC TOE v1.0***\n");
	
	while(1)
	{
		display();
		turnOfplayer1();
	    if(winOfplayer1()==1)
	    {
		   printf("Player 1 wins!!");
		   break;
	    }
	    if(draw()!=1)
	    {
	    	printf("Match draws!!");
	    	break;
		}
	    turnOfplayer2();
	    if(winOfplayer2()==1)
	    {
		   printf("Player 2 wins!!");
		   break;
	    }
	    
	    if(draw()!=1)
	    {
	    	printf("Match draws!!");
	    	break;
		}
		printf("chutiya kaushik");
		getch();
		system("cls");
		
		
	}
	return 0;
}
