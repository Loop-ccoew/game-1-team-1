#include<stdio.h>

int main()
{int a=0; char ch; int j=0,i,t;
char ch1='\0',ch5='\0', ch7='\0';
char s[]={'h','o','l','l','y','w','o','o','d'};
printf("HOLLYWOOD     \n");
printf("/ /i/ /a/ /i/ /c/ \n");
for(i=0;i<20;i++)
{
	printf("\n guess the letter\n");
	scanf("%c",&ch);
	if(ch=='t')
	{
		ch1='t'; printf("correct\n");
		printf("%c",ch1);
		printf("/i/");
		printf("%c",ch1);
		printf("/a/");
		printf("%c",ch5);
		printf("/i/");
		printf("%c",ch7);
		printf("\n");
		a++;
		}
	if(ch=='n')
	{
		ch5='n';
		 printf("correct \n");
				printf("%c",ch1);
		printf("/i/");
		printf("%c",ch1);
		printf("/a/");
		printf("%c",ch5);
		printf("/i/");
		printf("%c",ch7);
		printf("\n");
				a++;
	}
	if (ch=='c')
	{
		ch7='c';
		 printf("correct \n");
				printf("%c",ch1);
		printf("/i/");
		printf("%c",ch1);
		printf("/a/");
		printf("%c",ch5);
		printf("/i/");
		printf("%c",ch7);
		printf("\n\n");
				a++;
	}
	if(a==3)
	 {printf("you win \n");
	break;}
	
 if((ch!='t')&&(ch!='n')&&(ch!='c'))	{j++;printf("\n");
	for( t=j;t<9;t++)
	{
		printf("%c",s[t]);

	}printf("\n");
	}
	if(j==9)
	{printf("you lose \n "); break;}

}
	return 0;

}

