#include<iostream>
#include<cstring> 
#include<cstdlib>
#include<conio.h>
using namespace std;
char a[21][21];
int main()
{
	int x=10,y=10;
	while(1)
	{
		memset(a,'.',sizeof a);
		a[x][y]='+';
		for(int i=1;i<=20;i++)
		{
			for(int j=1;j<=20;j++) cout<<a[i][j];
			cout<<endl;
		}
		char c;
		c=getch();
		system("cls");
		switch(c)
		{
			case 'w':
			case 'W':
			{
				if(x-1>0) x--;
				break;
			}
			case 'a':
			case 'A':
			{
				if(y-1>0) y--;
				break;
			}
			case 's':
			case 'S':
			{
				if(x+1<=20) x++;
				break;
			}
			case 'd':
			case 'D':
			{
				if(y+1<=20) y++;
				break;
			}
			case 'r':
			case 'R':
				x=10,y=10;
			case 'q':
			case 'Q':
				return 0;
		}
		
	}
	return 0;
}
