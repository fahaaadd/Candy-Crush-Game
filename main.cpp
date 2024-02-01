#include<iostream>
#include<conio.h>
#include<cstdlib>
#include"help.h"
#include<time.h>
using namespace std;

void mainscreen()//the main screen.user presses enter to start the game
{
	//myRectangle(0,0,1080,600,255,255,255,202,0,42,10);
	myRectangle(0,0,540,300,107,0,0,107,0,0,1);
	myRectangle(540,0,1080,300,130,0,0,130,0,0,1);
	myRectangle(0,300,540,600,130,0,0,130,0,0,1);
	myRectangle(540,300,1080,600,107,0,0,107,0,0,1);
	myLine(5,5,1075,5,0,0,0,2);
	myLine(5,5,5,595,0,0,0,2);
	myLine(5,595,1075,595,0,0,0,2);
	myLine(1075,595,1075,5,0,0,0,2);
	myRectangle(200,100,840,250,100,100,100,0,0,0,4);
	myLine(210,130,210,220,150,0,0,12);//g
	myLine(210,130,255,130,150,0,0,12);//g
	myLine(210,220,255,220,150,0,0,12);//g
	myLine(255,220,255,180,150,0,0,12);//g
	myLine(255,180,240,180,150,0,0,12);//g
	myLine(270,130,270,220,150,0,0,12);//e
	myLine(270,130,310,130,150,0,0,12);//e
	myLine(270,220,310,220,150,0,0,12);//e
	myLine(270,175,310,175,150,0,0,12);//e
	myLine(325,130,325,220,150,0,0,12);//m
	myLine(325,130,355,220,150,0,0,12);//m
	myLine(355,220,385,130,150,0,0,12);//m
	myLine(385,130,385,220,150,0,0,12);//m
	myLine(400,160,440,130,150,0,0,12);//s
	myLine(400,160,440,190,150,0,0,12);//s
	myLine(400,220,440,190,150,0,0,12);//s
	myLine(480,130,480,220,150,0,0,12);//g
	myLine(480,130,525,130,150,0,0,12);//g
	myLine(480,220,525,220,150,0,0,12);//g
	myLine(525,220,525,180,150,0,0,12);//g
	myLine(525,180,510,180,150,0,0,12);//g
	myLine(540,220,565,130,150,0,0,12);//a
	myLine(565,130,590,220,150,0,0,12);//a
	myLine(555,175,575,175,150,0,0,12);//a
	myLine(605,130,605,220,150,0,0,12);//l
	myLine(605,220,640,220,150,0,0,12);//l
	myLine(650,220,675,130,150,0,0,12);//a
	myLine(675,130,700,220,150,0,0,12);//a
	myLine(662,175,687,175,150,0,0,12);//a
	myLine(715,220,760,130,150,0,0,12);//x
	myLine(715,130,760,220,150,0,0,12);//x
	myLine(785,130,810,175,150,0,0,12);//y
	myLine(825,130,795,220,150,0,0,12);//y
	myRectangle(400,335,680,435,0,0,0,161,48,40,5);
	myLine(420,350,450,350,0,0,0,8);//s
	myLine(420,350,420,385,0,0,0,8);//s
	myLine(420,385,450,385,0,0,0,8);//s
	myLine(450,385,450,420,0,0,0,8);//s
	myLine(420,420,450,420,0,0,0,8);//s
	myLine(465,350,505,350,0,0,0,8);//t
	myLine(485,350,485,420,0,0,0,8);//t
	myLine(525,385,548,385,0,0,0,8);//a
	myLine(510,420,535,350,0,0,0,8);//a
	myLine(535,350,560,420,0,0,0,8);//a
	myLine(575,350,575,420,0,0,0,8);//r
	myLine(575,350,605,350,0,0,0,8);//r
	myLine(605,350,605,382,0,0,0,8);//r
	myLine(575,382,605,382,0,0,0,8);//r
	myLine(575,382,605,420,0,0,0,8);//r
	myLine(625,350,665,350,0,0,0,8);//t
	myLine(645,350,645,420,0,0,0,8);//t
}
void shape1(int x1,int y1)//red
{ 
	myRectangle(x1,y1,x1+35,y1+35,255,0,0,0,0,0,2);
}
void shape2(int x1,int y1)//blue
{ 
	myRectangle(x1,y1,x1+35,y1+35,0,0,255,0,0,0,2);
}
void shape3(int x1,int y1)//green
{ 
	myRectangle(x1,y1,x1+35,y1+35,0,160,0,0,0,0,2);
}
void shape4(int x1,int y1)//cyan
{ 
	myRectangle(x1,y1,x1+35,y1+35,0,183,235,0,0,0,2);
}
void shape5(int x1,int y1)//pink
{ 
	myRectangle(x1,y1,x1+35,y1+35,162,0,220,0,0,0,2);
}
void shape6(int x1,int y1)//special shape1(red)
{
	myRectangle(x1,y1,x1+35,y1+35,255,0,0,0,0,0,2);
	myLine(x1,y1,x1+35,y1+35,255,0,0,2);
	myLine(x1,y1+35,x1+35,y1,255,0,0,2);
}
void shape7(int x1,int y1)//special shape2(blue)
{
	myRectangle(x1,y1,x1+37,y1+37,0,0,255,0,0,0,2);
	myLine(x1,y1,x1+35,y1+35,0,0,255,2);
	myLine(x1,y1+35,x1+35,y1,0,0,255,2);
}
void shape8(int x1,int y1)//special shape3(green)
{
	myRectangle(x1,y1,x1+37,y1+37,0,160,0,0,0,0,2);
	myLine(x1,y1,x1+35,y1+35,0,160,0,2);
	myLine(x1,y1+35,x1+35,y1,0,160,0,2);
}
void shape9(int x1,int y1)//special shape4(cyan)
{
	myRectangle(x1,y1,x1+37,y1+37,0,183,255,0,0,0,2);
	myLine(x1,y1,x1+35,y1+35,0,183,255,2);
	myLine(x1,y1+35,x1+35,y1,0,183,255,2);
}
void shape10(int x1,int y1)//special shape5(pink)
{
	myRectangle(x1,y1,x1+37,y1+37,162,0,220,0,0,0,2);
	myLine(x1,y1,x1+35,y1+35,162,0,220,2);
	myLine(x1,y1+35,x1+35,y1,162,0,220,2);
}
void zero(int x,int y)//displays number 0
{
	myLine(x,y,x+20,y,255,255,0,4);
	myLine(x,y+40,x+20,y+40,255,255,0,4);
	myLine(x,y,x,y+40,255,255,0,4);
	myLine(x+20,y,x+20,y+40,255,255,0,4);
}
void one(int x,int y)//displays number 1
{	
	myLine(x+10,y,x+10,y+40,255,255,0,4);
}
void two(int x,int y)//displays number 2
{
	myLine(x,y,x+20,y,255,255,0,4);
	myLine(x+20,y,x+20,y+20,255,255,0,4);
	myLine(x,y+20,x+20,y+20,255,255,0,4);
	myLine(x,y+20,x,y+40,255,255,0,4);
	myLine(x,y+40,x+20,y+40,255,255,0,4);
}
void three(int x,int y)//displays number 3
{
	myLine(x,y,x+20,y,255,255,0,4);
	myLine(x,y+20,x+20,y+20,255,255,0,4);
	myLine(x,y+40,x+20,y+40,255,255,0,4);
	myLine(x+20,y,x+20,y+40,255,255,0,4);	
}
void four(int x,int y)//displays number 4
{
	myLine(x,y+20,x+20,y+20,255,255,0,4);
	myLine(x,y+20,x+20,y,255,255,0,4);
	myLine(x+20,y,x+20,y+40,255,255,0,4);
}
void five(int x,int y)//displays number 5
{
	myLine(x,y,x+20,y,255,255,0,4);
	myLine(x,y,x,y+20,255,255,0,4);
	myLine(x,y+20,x+20,y+20,255,255,0,4);
	myLine(x+20,y+20,x+20,y+40,255,255,0,4);
	myLine(x,y+40,x+20,y+40,255,255,0,4);
}
void six(int x,int y)//displays number 6
{
	myLine(x,y,x+20,y,255,255,0,4);
	myLine(x,y,x,y+20,255,255,0,4);
	myLine(x,y+20,x+20,y+20,255,255,0,4);
	myLine(x+20,y+20,x+20,y+40,255,255,0,4);
	myLine(x,y+40,x+20,y+40,255,255,0,4);
}
void seven(int x,int y)//displays number 7
{
	myLine(x,y,x+20,y,255,255,0,4);
	myLine(x+20,y,x,y+40,255,255,0,4);
}
void eight(int x,int y)//displays number 8
{
	myLine(x,y,x+20,y,255,255,0,4);
	myLine(x,y+20,x+20,y+20,255,255,0,4);
	myLine(x+20,y,x+20,y+40,255,255,0,4);
	myLine(x,y+40,x+20,y+40,255,255,0,4);
	myLine(x,y,x,y+40,255,255,0,4);

}
void nine(int x,int y)//displays number 9
{
	myLine(x,y,x+20,y,255,255,0,4);
	myLine(x,y,x,y+20,255,255,0,4);
	myLine(x,y+20,x+20,y+20,255,255,0,4);
	myLine(x+20,y+20,x+20,y+40,255,255,0,4);
	myLine(x+20,y,x+20,y+20,255,255,0,4);	
}
void grid(int arr[][8],int x1,int y1,int x2,int y2)//displays the grid and fills in shapes according to the value stored in array
{
	int a;
	int x3=x1;
	int y3=y1;
	int x=315;
	int y=100;
	myRectangle(0,0,1080,600,255,255,255,100,0,0,5);
	myRectangle(x1,y1,x2,y2,255,255,255,0,0,0,2);
	myLine(840,230,980,230,255,255,255,5);//scorebox
	myLine(840,310,980,310,255,255,255,5);//scorebox
	myLine(840,230,840,310,255,255,255,5);//scorebox
	myLine(980,230,980,310,255,255,255,5);//scorebox
	myLine(850,205,870,205,255,255,0,3);//s
	myLine(850,205,850,215,255,255,0,3);//s
	myLine(850,215,870,215,255,255,0,3);//s
	myLine(870,215,870,225,255,255,0,3);//s
	myLine(850,225,870,225,255,255,0,3);//s
	myLine(875,205,895,205,255,255,0,3);//c
	myLine(875,225,895,225,255,255,0,3);//c
	myLine(875,205,875,225,255,255,0,3);//c
	myRectangle(900,205,920,225,255,255,0,100,0,0,3);//o
	myLine(925,205,925,225,255,255,0,3);//r
	myLine(925,205,945,205,255,255,0,3);//r
	myLine(945,205,945,215,255,255,0,3);//r
	myLine(925,215,945,215,255,255,0,3);//r
	myLine(925,215,945,225,255,255,0,3);//r
	myLine(950,205,970,205,255,255,0,3);//e
	myLine(950,215,970,215,255,255,0,3);//e
	myLine(950,225,970,225,255,255,0,3);//e
	myLine(950,205,950,225,255,255,0,3);//e

	for(int i=0;i<9;i++)
	{
		myLine(x3,y1,x3,y1+400,255,255,255,2);
		x3=x3+60;
	}
	for(int i=0;i<9;i++)
	{
		myLine(x1,y3,x2,y3,255,255,255,2);
		y3=y3+50;
	}	
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			if(arr[i][j]==1)
			{
				shape1(x,y);
				x=x+60;
			}
			else if(arr[i][j]==2)
			{
				shape2(x,y);
				x=x+60;
			}
			else if(arr[i][j]==3)
			{
				shape3(x,y);
				x=x+60;
			}
			else if(arr[i][j]==4)
			{
				shape4(x,y);
				x=x+60;
			}
			else if(arr[i][j]==5)
			{
				shape5(x,y);
				x=x+60;	
			}
			else if(arr[i][j]==0)
			{
				myRectangle(x,y,x+35,y+35,0,0,0,0,0,0,2);
				x=x+60;
			}
			else if(arr[i][j]==6)
			{
				shape6(x,y);
				x=x+60;	
			}
			else if(arr[i][j]==7)
			{
				shape7(x,y);
				x=x+60;	
			}
			else if(arr[i][j]==8)
			{
				shape8(x,y);
				x=x+60;	
			}
			else if(arr[i][j]==9)
			{
				shape9(x,y);
				x=x+60;	
			}
			else if(arr[i][j]==10)
			{
				shape10(x,y);
				x=x+60;	
			}	
		}
		y=y+50;
		x=315;
	}
}
void cursor(int x1,int y1,int x2,int y2,int a,int b,int c)//cursor that we can move around our grid
{
	myLine(x1,y1,x2,y1,a,b,c,3);
	myLine(x1,y2,x2,y2,a,b,c,3);
	myLine(x1,y1,x1,y2,a,b,c,3);
	myLine(x2,y1,x2,y2,a,b,c,3);
}
void swapgems(int arr[][8],int i1,int j1,int i2,int j2)//swaps two elements in an array
{
	swap(arr[j1][i1], arr[j2][i2]);
	
}
int check(int arr[][8])//checks if 3 or 4 gems are matching row wise or column wise and sets thier value to zero.also calculates the score and returns it
{
	int a=300,b=90,score=0;
	for(int j=0;j<8;j++)
	{
		for(int i=0;i<8;i++)
		{
			if(arr[j][i]==arr[j][i+1] && arr[j][i+1]==arr[j][i+2] && arr[j][i+2]==arr[j][i+3] && arr[j][i]==1)
			{
				arr[j][i]=0;
				arr[j][i+1]=0;
				arr[j][i+2]=6;
				arr[j][i+3]=0;
				score=score+100;
			}
			else if(arr[j][i]==arr[j][i+1] && arr[j][i+1]==arr[j][i+2] && arr[j][i+2]==arr[j][i+3] && arr[j][i]==2)
			{
				arr[j][i]=0;
				arr[j][i+1]=0;
				arr[j][i+2]=7;
				arr[j][i+3]=0;
				score=score+100;
			}
			else if(arr[j][i]==arr[j][i+1] && arr[j][i+1]==arr[j][i+2] && arr[j][i+2]==arr[j][i+3] && arr[j][i]==3)
			{
				arr[j][i]=0;
				arr[j][i+1]=0;
				arr[j][i+2]=8;
				arr[j][i+3]=0;
				score=score+100;
			}
			else if(arr[j][i]==arr[j][i+1] && arr[j][i+1]==arr[j][i+2] && arr[j][i+2]==arr[j][i+3] && arr[j][i]==4)
			{
				arr[j][i]=0;
				arr[j][i+1]=0;                                                      
				arr[j][i+2]=9;
				arr[j][i+3]=0;
				score=score+100;
			}
			else if(arr[j][i]==arr[j][i+1] && arr[j][i+1]==arr[j][i+2] && arr[j][i+2]==arr[j][i+3] && arr[j][i]==5)
			{
				arr[j][i]=0;
				arr[j][i+1]=0;
				arr[j][i+2]=10;
				arr[j][i+3]=0;
				score=score+100;
			}
			else if(arr[j][i]%5==arr[j][i+1]%5 && arr[j][i+1]%5==arr[j][i+2]%5)
			{
				if(arr[j][i]>5 || arr[j][i+1]>5 || arr[j][i+2]>5)
				{
					arr[j][i]=0;
					arr[j][i+1]=0;
					arr[j][i+2]=0;
					score=score+150;
				}
				else
				{
					arr[j][i]=0;
					arr[j][i+1]=0;
					arr[j][i+2]=0;
					score=score+50;
				}
			}
			a=a+60;
		}
		b=b+50;
		a=300;
	}
	for(int j=0;j<6;j++)
	{
		for(int i=0;i<8;i++)
		{
			if(arr[j][i]==arr[j+1][i] && arr[j+1][i]==arr[j+2][i] && arr[j+2][i]==arr[j+3][i] && arr[j][i]==1)
			{
				arr[j][i]=0;
				arr[j+1][i]=0;
				arr[j+2][i]=6;
				arr[j+3][i]=0;
				score=score+100;
			}
			else if(arr[j][i]==arr[j+1][i] && arr[j+1][i]==arr[j+2][i] && arr[j+2][i]==arr[j+3][i] && arr[j][i]==2)
			{
				arr[j][i]=0;
				arr[j+1][i]=0;
				arr[j+2][i]=7;
				arr[j+3][i]=0;
				score=score+100;
			}
			else if(arr[j][i]==arr[j+1][i] && arr[j+1][i]==arr[j+2][i] && arr[j+2][i]==arr[j+3][i] && arr[j][i]==3)
			{
				arr[j][i]=0;
				arr[j+1][i]=0;
				arr[j=2][i]=8;
				arr[j+3][i]=0;
				score=score+100;
			}
			else if(arr[j][i]==arr[j+1][i] && arr[j+1][i]==arr[j+2][i] && arr[j+2][i]==arr[j+3][i] && arr[j][i]==4)
			{
				arr[j][i]=0;
				arr[j+1][i]=0;
				arr[j+2][i]=9;
				arr[j+3][i]=0;
				score=score+100;
			}
			else if(arr[j][i]==arr[j+1][i] && arr[j+1][i]==arr[j+2][i] && arr[j+2][i]==arr[j+3][i] && arr[j][i]==5)
			{
				arr[j][i]=0;
				arr[j+1][i]=0;
				arr[j+2][i]=10;
				arr[j+3][i]=0;
				score=score+100;
			}
			else if(arr[j][i]%5==arr[j+1][i]%5 && arr[j+1][i]%5==arr[j+2][i]%5)
			{
				if(arr[j][i]>5 || arr[j+1][i]>5 || arr[j+2][i]>5)
				{
					arr[j][i]=0;
					arr[j+1][i]=0;
					arr[j+2][i]=0;
					score=score+150;
				}
				else
				{
					arr[j][i]=0;
					arr[j+1][i]=0;
					arr[j+2][i]=0;
					score=score+50;
				}
			}
			a=a+60;
		}
		b=b+50;
		a=300;
	}
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			if(arr[i][j]==0)
			{
				for(int k=i;k>=1;k--)
				{
					swap(arr[k][j],arr[k-1][j]);
				}
				arr[0][j]=rand()%5+1;;
			}
		}
	}
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			if(arr[i][j]==0)
			arr[i][j]=rand()%5+1;
		}
	}
	return score;
}

bool checkgems(int arr[][8], int r)
{
	bool flag = 0;
	int a = 300, b = 90;
	for (int j = 0; j < 8; j++)
	{
		for (int i = 0; i < 8; i++)
		{
			if (arr[j][i] == arr[j][i + 1] && arr[j][i + 1] == arr[j][i + 2] && arr[j][i + 2] == arr[j][i + 3] && arr[j][i] == 1)
			{
				flag = 1;
			}
			else if (arr[j][i] == arr[j][i + 1] && arr[j][i + 1] == arr[j][i + 2] && arr[j][i + 2] == arr[j][i + 3] && arr[j][i] == 2)
			{
				flag = 1;
			}
			else if (arr[j][i] == arr[j][i + 1] && arr[j][i + 1] == arr[j][i + 2] && arr[j][i + 2] == arr[j][i + 3] && arr[j][i] == 3)
			{
				flag = 1;
			}
			else if (arr[j][i] == arr[j][i + 1] && arr[j][i + 1] == arr[j][i + 2] && arr[j][i + 2] == arr[j][i + 3] && arr[j][i] == 4)
			{
				flag = 1;
			}
			else if (arr[j][i] == arr[j][i + 1] && arr[j][i + 1] == arr[j][i + 2] && arr[j][i + 2] == arr[j][i + 3] && arr[j][i] == 5)
			{
				flag = 1;
			}
			else if (arr[j][i] % 5 == arr[j][i + 1] % 5 && arr[j][i + 1] % 5 == arr[j][i + 2] % 5)
			{
				if (arr[j][i] > 5 || arr[j][i + 1] > 5 || arr[j][i + 2] > 5)
				{
					flag = 1;
				}
				else
				{
					flag = 1;
				}
			}
			a = a + 60;
		}
		b = b + 50;
		a = 300;
	}
	for (int j = 0; j < 6; j++)
	{
		for (int i = 0; i < 8; i++)
		{
			if (arr[j][i] == arr[j + 1][i] && arr[j + 1][i] == arr[j + 2][i] && arr[j + 2][i] == arr[j + 3][i] && arr[j][i] == 1)
			{
				flag = 1;
			}
			else if (arr[j][i] == arr[j + 1][i] && arr[j + 1][i] == arr[j + 2][i] && arr[j + 2][i] == arr[j + 3][i] && arr[j][i] == 2)
			{
				flag = 1;
			}
			else if (arr[j][i] == arr[j + 1][i] && arr[j + 1][i] == arr[j + 2][i] && arr[j + 2][i] == arr[j + 3][i] && arr[j][i] == 3)
			{
				flag = 1;
			}
			else if (arr[j][i] == arr[j + 1][i] && arr[j + 1][i] == arr[j + 2][i] && arr[j + 2][i] == arr[j + 3][i] && arr[j][i] == 4)
			{
				flag = 1;
			}
			else if (arr[j][i] == arr[j + 1][i] && arr[j + 1][i] == arr[j + 2][i] && arr[j + 2][i] == arr[j + 3][i] && arr[j][i] == 5)
			{
				flag = 1;
			}
			else if (arr[j][i] % 5 == arr[j + 1][i] % 5 && arr[j + 1][i] % 5 == arr[j + 2][i] % 5)
			{
				if (arr[j][i] > 5 || arr[j + 1][i] > 5 || arr[j + 2][i] > 5)
				{
					flag = 1;
				}
				else
				{
					flag = 1;
				}
			}
			a = a + 60;
		}
		b = b + 50;
		a = 300;
	}
	return flag;
}
void printscore(int  b,int x,int y)//displays the score 
{
	if(b<4000)
	{
		if((b/1000)==1)
		{
			one(x,y);
		}
		else if((b/1000)==2)
		{
			two(x,y);
		}
		else if((b/1000)==3)
		{
			three(x,y);
		}
		b=b%1000;
		if((b)/100==0)
		zero(x+30,y);
		else if((b)/100==1)
		one(x+30,y);
		else if((b)/100==2)
		two(x+30,y);
		else if((b)/100==3)
		three(x+30,y);
		else if((b)/100==4)
		four(x+30,y);
		else if((b)/100==5)
		five(x+30,y);
		else if((b)/100==6)
		six(x+30,y);
		else if((b)/100==7)
		seven(x+30,y);
		else if((b)/100==8)
		eight(x+30,y);
		else if((b)/100==9)
		nine(x+30,y);
		b=b%100;
		if((b)/10==0)
		zero(x+60,y);
		else if((b)/10==1)
		one(x+60,y);
		else if((b)/10==2)
		two(x+60,y);
		else if((b)/10==3)
		three(x+60,y);
		else if((b)/10==4)
		four(x+60,y);
		else if((b)/10==5)
		five(x+60,y);
		else if((b)/10==6)
		six(x+60,y);
		else if((b)/10==7)
		seven(x+60,y);
		else if((b)/10==8)
		eight(x+60,y);
		else if((b)/10==9)
		nine(x+60,y);
		zero(x+90,y);
	}
		
}	
void movingcursor(int arr[][8],int &key,int &col,int &row)//it basically moves the cursor where user wants and keeps it in the grid as well.It also does the swapping of gems at the same time 
{
	
	
	int x,y;
	key=_getch();
	isCursorKeyPressed(key);
	if (key != 5)
	{
		if (key == 1)//left
		{
			cursor(col, row, col + 60, row + 50, 255, 255, 0);
			if (col == 300 && row != 90)
			{
				cursor(col, row, col + 60, row + 50, 255, 255, 255);
				col = col + 480;
				row = row - 50;
				cursor(col, row, col + 60, row + 50, 100, 100, 255);
				cursor(col, row, col + 60, row + 50, 255, 255, 255);
				cursor(col, row, col + 60, row + 50, 100, 0, 0);
				col = col - 60;
				cursor(col, row, col + 60, row + 50, 255, 255, 0);
				Sleep(10);
			}
			else if (col == 300 && row == 90)
			{
				cursor(col, row, col + 60, row + 50, 255, 255, 255);
				col = 780;
				row = row + 350;
				col = col - 60;
				cursor(col, row, col + 60, row + 50, 255, 255, 0);
				Sleep(10);
			}

			else
			{
				cursor(col, row, col + 60, row + 50, 255, 255, 255);
				col = col - 60;
				cursor(col, row, col + 60, row + 50, 255, 255, 0);
				Sleep(10);
			}
		}
		else if (key == 2)//up
		{
			int temp = row - 50;
			int temp2 = col - 60;
			if (temp == 40 && temp2 != 660)
			{
				cursor(col, row, col + 60, row + 50, 255, 255, 255);
				col = col + 60;
				row = row + 400;
				cursor(col, row, col + 60, row + 50, 255, 255, 0);
				cursor(col, row, col + 60, row + 50, 255, 255, 255);
				cursor(col, row, col + 60, row + 50, 100, 0, 0);
				row = row - 50;
				cursor(col, row, col + 60, row + 50, 255, 255, 0);
				Sleep(10);
			}
			else if (temp2 == 660 && temp <= 40)
			{
				cursor(col, row, col + 60, row + 50, 255, 255, 255);
				col = col - 420;
				row = row + 350;
				cursor(col, row, col + 60, row + 50, 255, 255, 0);
			}

			else
			{
				cursor(col, row, col + 60, row + 50, 255, 255, 255);
				row = row - 50;
				cursor(col, row, col + 60, row + 50, 255, 255, 0);
				Sleep(10);
			}
		}
		else if (key == 3)//rcolght
		{
			int temp = col + 60;
			int temp2 = row + 50;
			if (temp == 780 && temp2 != 490)
			{
				cursor(col, row, col + 60, row + 50, 255, 255, 255);
				col = col - 480;
				row = row + 50;
				cursor(col, row, col + 60, row + 50, 100, 0, 0);
				col = col + 60;
				cursor(col, row, col + 60, row + 50, 255, 255, 0);
				Sleep(10);
			}
			else if (temp == 780 && temp2 == 490)
			{
				cursor(col, row, col + 60, row + 50, 255, 255, 255);
				col = 300;
				row = 90;
				cursor(col, row, col + 60, row + 50, 255, 255, 0);
				Sleep(10);
			}
			else
			{
				cursor(col, row, col + 60, row + 50, 255, 255, 255);
				col = col + 60;
				cursor(col, row, col + 60, row + 50, 255, 255, 0);
				Sleep(10);
			}
		}
		else if (key == 4)//down
		{
			int temp = row + 50;
			if (row == 440)
			{
				if (col == 300)
				{
					cursor(col, row, col + 60, row + 50, 255, 255, 255);
					col = col + 420;
					row = row - 350;
					cursor(col, row, col + 60, row + 50, 255, 255, 0);
					Sleep(10);
				}
				else if (col > 300)
				{
					cursor(col, row, col + 60, row + 50, 255, 255, 255);
					col = col - 60;
					row = row - 350;
					cursor(col, row, col + 60, row + 50, 255, 255, 0);
					Sleep(10);
				}
			}
			else
			{
				cursor(col, row, col + 60, row + 50, 255, 255, 255);
				row = row + 50;
				cursor(col, row, col + 60, row + 50, 255, 255, 0);
				Sleep(10);
			}
		}
	}
	else
	{
		key=_getch();
		isCursorKeyPressed(key);
		if (key == 5)
		{
			cursor(col, row, col + 60, row + 50, 0, 255, 0);
			key = _getch();
			isCursorKeyPressed(key);
			if (key == 1)//left

			{
				x = (col - 300) / 60;
				y = (row - 90) / 50;
				col = col - 60;
				cursor(col, row, col + 60, row + 50, 0, 255, 0);
				swapgems(arr, x, y, x - 1, y);
				if (!checkgems(arr, 8))
				{
					swapgems(arr, x - 1, y, x, y);
				}
				grid(arr, 300, 90, 780, 490);
			}
			else if (key == 2)//up
			{

				y = (col - 300) / 60;
				x = (row - 90) / 50;
				row = row - 50;
				cursor(col, row, col + 60, row + 50, 0, 255, 0);
				swapgems(arr, y, x, y, x - 1);
				if (!checkgems(arr, 8))
				{
					swapgems(arr, y, x - 1, y, x);
				}
				grid(arr, 300, 90, 780, 490);
			}
			else if (key == 3)//right
			{
				x = (col - 300) / 60;
				y = (row - 90) / 50;
				col = col + 60;
				cursor(col, row, col + 60, row + 50, 0, 255, 0);
				swapgems(arr, x, y, x + 1, y);
				if (!checkgems(arr, 8))
				{
					swapgems(arr, x + 1, y, x, y);
				}
				grid(arr, 300, 90, 780, 490);
			}
			else if (key == 4)//down
			{
				y = (col - 300) / 60;
				x = (row - 90) / 50;
				row = row + 50;
				cursor(col, row, col + 60, row + 50, 0, 255, 0);

				swapgems(arr, y, x, y, x + 1);
				if (!checkgems(arr, 8))
				{
					swapgems(arr, y, x + 1, y, x);
				}
				grid(arr, 300, 90, 780, 490);
			}
		}
	}

}
void endgame(int & b)
{
	myRectangle(0,0,1080,600,0,0,0,0,0,0,2);
	myRectangle(240,100,840,500,255,255,0,100,0,0,5);
	myLine(350,180,350,220,150,0,0,8);//g
	myLine(350,180,375,180,150,0,0,8);//g
	myLine(350,220,375,220,150,0,0,8);//g
	myLine(375,220,375,200,150,0,0,8);//g
	myLine(375,200,370,200,150,0,0,8);//g
	myLine(390,200,400,200,150,0,0,8);//a
	myLine(385,220,395,180,150,0,0,8);//a
	myLine(395,180,405,220,150,0,0,8);//a
	myLine(415,180,415,220,150,0,0,8);//m
	myLine(415,180,430,220,150,0,0,8);//m
	myLine(430,220,445,180,150,0,0,8);//m
	myLine(445,180,445,220,150,0,0,8);//m
	myLine(455,200,485,200,150,0,0,8);//e
	myLine(455,180,485,180,150,0,0,8);//e
	myLine(455,220,485,220,150,0,0,8);//e
	myLine(455,180,455,220,150,0,0,8);//e
	myRectangle(590,180,620,220,150,0,0,100,0,0,8);//o
	myLine(630,180,645,220,150,0,0,8);//v
	myLine(645,220,660,180,150,0,0,8);//v
	myLine(670,200,700,200,150,0,0,8);//e
	myLine(670,180,700,180,150,0,0,8);//e
	myLine(670,220,700,220,150,0,0,8);//e
	myLine(670,180,670,220,150,0,0,8);//e
	myLine(710,180,710,220,150,0,0,8);//r
	myLine(710,200,740,200,150,0,0,8);//r
	myLine(740,180,740,200,150,0,0,8);//r
	myLine(710,180,740,180,150,0,0,8);//r
	myLine(720,200,740,220,150,0,0,8);//r
	myLine(330,230,760,230,150,0,0,8);//r
	myLine(370,300,370,320,255,255,255,5);//s
	myLine(400,320,400,340,255,255,255,5);//s
	myLine(370,300,400,300,255,255,255,5);//s
	myLine(370,320,400,320,255,255,255,5);//s
	myLine(370,340,400,340,255,255,255,5);//s
	myLine(410,300,440,300,255,255,255,5);//c
	myLine(410,340,440,340,255,255,255,5);//c
	myLine(410,300,410,340,255,255,255,5);//c
	myRectangle(450,300,480,340,255,255,255,100,0,0,5);//o
	myLine(490,300,490,340,255,255,255,5);//r
	myLine(490,300,520,300,255,255,255,5);//r
	myLine(520,300,520,320,255,255,255,5);//r
	myLine(490,320,520,320,255,255,255,5);//r
	myLine(490,320,520,340,255,255,255,5);//r
	myLine(530,300,560,300,255,255,255,5);//e
	myLine(530,320,560,320,255,255,255,5);//e
	myLine(530,340,560,340,255,255,255,5);//e
	myLine(530,300,530,340,255,255,255,5);//e
	myLine(580,310,580,310,255,255,255,5);//.
	myLine(580,330,580,330,255,255,255,5);//.
	printscore(b,590,300);
	Sleep(5000);
}
int main()
{
	
	int arr[8][8];
	int a,b=0;
	int i=300;
	int j=90;
	int seconds=60;
	for(int i=0;i<8;i++)
   	{
		for(int j=0;j<8;j++)
		{
			a=rand()%5+1;
			arr[i][j]=a;
		}
	}
	mainscreen();
	int get=_getch();
	//isCursorKeyPressed(get);
	if(get==32)
	{
		grid(arr,300,90,780,490);
		Sleep(1000);
	}
	else
	{
		return 0;
		system("pause");
	}
	
	int l=1;
	time_t oldTime=time(0);	//timer
	cursor(i,j,i+60,j+50,255,255,0);	
	while(time(0)-oldTime<=60)//timer till 60 seconds.loops runs for 60 seconds
	{
		movingcursor(arr,get,i,j);
		b=b+check(arr);
		grid(arr,300,90,780,490);
		cursor(i,j,i+60,j+50,255,255,0);
		printscore(b,860,250);
	}
	endgame(b);
	_getch();
}
