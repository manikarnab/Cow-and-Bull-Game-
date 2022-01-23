#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    printf("\n\t\t Welcome mastermind");
    printf("\n\t\tEnter any key start the game....... ");
	getch();

	int n,a=0,b=0,c,d,a1,b1,c1,d1,B=0,C,i=1;
	srand(time(NULL));
	while(a==b||a==c||a==d||b==c||b==d||c==d)
	{
		a=rand()%10;
		b=rand()%10;
		c=rand()%10;
		d=rand()%10;
	}
	lineno8:
	while(B!=4)
	{
		n=0;
		while(a1==b1||a1==c1||a1==d1||b1==c1||b1==d1||c1==d1||n<123||n>9876)
		{
			printf("\n GUESS : ");
			scanf("%d",&n);
			d1=n%10;
			c1=(n/10)%10;
			b1=(n/100)%10;
			a1=(n/1000)%10;	
		}
		B=0; C=0;
		if(a1==b||a1==c||a1==d){ C=C+1; } else if(a1==a) { B=B+1; }
		if(b1==a||b1==c||b1==d){ C=C+1; } else if(b1==b) { B=B+1; }
		if(c1==b||c1==a||c1==d){ C=C+1; } else if(c1==c) { B=B+1; }
		if(d1==b||d1==c||d1==a){ C=C+1; } else if(d1==d) { B=B+1; }
		
		printf("BULLS\tCOWS\n %d \t %d \n",B,C);
		if(B==4)
			{
				printf("\n YOU WON IN %d CHANCES",i);
			}
        ++i;
		}
		getch();
        printf("\n\t\tPlay Again .\n\t\tEnter any key......");
        getch();
        goto lineno8;
		return 0;
}

