#include<conio.h>
#include<stdio.h>
void display();
void win();
void main()
{
	int x,player = 0,count = 0,flag = 0;
	char z;
	char a[9] = {'1','2','3','4','5','6','7','8','9'};
	clrscr();
	display(a);
	do{
	  	player = player % 2;
		if(player == 0)
			{
				while(flag == 0)
					{
						printf("\nPlayer 1's turn\n");
						printf("\nEnter the position\n");
						scanf("%d", &x);
						if(a[x-1] == 'X' || a[x-1] == 'O')
							{
								printf("\nPosition already occupied\n");
								flag = 0;
							}
						else
							{
								flag = 1;
							}
					}
				a[x-1] = 'X';
				display(a);
				flag = 0;
				if((a[0] == 'X' && a[3] == 'X' && a[6] == 'X')||(a[1] == 'X' && a[4] == 'X' && a[7] == 'X')||(a[2] == 'X' && a[5] == 'X' && a[8] == 'X')||(a[0] == 'X' && a[1] == 'X' && a[2] == 'X')||(a[3] == 'X' && a[4] == 'X' && a[5] == 'X')||(a[6] == 'X' && a[7] == 'X' && a[8] == 'X')||(a[0] == 'X' && a[4] == 'X' && a[8] == 'X')||(a[2] == 'X' && a[4] == 'X' && a[6] == 'X'))
				break;
			}
		else
			{
				while(flag == 0)
					{
						printf("\nPlayer 2's turn\n");
						printf("\nEnter the position\n");
						scanf("%d", &x);
						if(a[x-1] == 'X' || a[x-1] == 'O')
							{
								printf("\nPosition already occupied\n");
								flag = 0;
							}
						else
							{
								flag = 1;
							}
					}
				a[x-1] = 'O';
				display(a);
				flag = 0;
				if((a[0] == 'O' && a[3] == 'O' && a[6] == 'O')||(a[1] == 'O' && a[4] == 'O' && a[7] == 'O')||(a[2] == 'O' && a[5] == 'O' && a[8] == 'O')||(a[0] == 'O' && a[1] == 'O' && a[2] == 'O')||(a[3] == 'O' && a[4] == 'O' && a[5] == 'O')||(a[6] == 'O' && a[7] == 'O' && a[8] == 'O')||(a[0] == 'O' && a[4] == 'O' && a[8] == 'O')||(a[2] == 'O' && a[4] == 'O' && a[6] == 'O'))
				break;
			}
		player++;
		count++;
	  }while(count < 9);
	win(a);
	getch();
}
void display(char arr[])
{
	printf("********** TIC   TAC   TOE **********");
	printf("\n Player 1:  X\n");
	printf("\n Player 2:  O\n");
	printf("\n   |   |  ");
	printf("\n %c | %c | %c ",arr[0],arr[1],arr[2]);
	printf("\n-----------");
	printf("\n   |   |  ");
	printf("\n %c | %c | %c ",arr[3],arr[4],arr[5]);
	printf("\n-----------");
	printf("\n   |   |  ");
	printf("\n %c | %c | %c ",arr[6],arr[7],arr[8]);
}
void win(char a[])
{
	if((a[0] == 'X' && a[3] == 'X' && a[6] == 'X')||(a[1] == 'X' && a[4] == 'X' && a[7] == 'X')||(a[2] == 'X' && a[5] == 'X' && a[8] == 'X')||(a[0] == 'X' && a[1] == 'X' && a[2] == 'X')||(a[3] == 'X' && a[4] == 'X' && a[5] == 'X')||(a[6] == 'X' && a[7] == 'X' && a[8] == 'X')||(a[0] == 'X' && a[4] == 'X' && a[8] == 'X')||(a[2] == 'X' && a[4] == 'X' && a[6] == 'X'))
		{
			printf("\nPlayer 1 wins....\nCongrats!!\n");
		}
	else if((a[0] == 'O' && a[3] == 'O' && a[6] == 'O')||(a[1] == 'O' && a[4] == 'O' && a[7] == 'O')||(a[2] == 'O' && a[5] == 'O' && a[8] == 'O')||(a[0] == 'O' && a[1] == 'O' && a[2] == 'O')||(a[3] == 'O' && a[4] == 'O' && a[5] == 'O')||(a[6] == 'O' && a[7] == 'O' && a[8] == 'O')||(a[0] == 'O' && a[4] == 'O' && a[8] == 'O')||(a[2] == 'O' && a[4] == 'O' && a[6] == 'O'))
		{
			printf("\nPlayer 2 wins....\nCongrats!!\n");
		}
else
		printf("\nDraw!!!!!\n");
}

