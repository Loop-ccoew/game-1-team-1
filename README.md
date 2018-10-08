# game-1-team-1
game-1-team-1 created by GitHub Classroom
//titanic
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a=0; char ch; int pos, j=0;
char ch1='\0',ch5='\0',ch7='\0';
char s[]={'h','o', 'l', 'l', 'y', 'w', 'o', 'o', 'd'};

cout<<"HOLLYWOOD";
cout<<" /  /i/ /a/ /i/ /  \n";


for(int i=0;i<9;i++)
{
cout<<"guess the letter=";
cin>>ch;


 if(ch=='t')
   { ch1='t'; cout<<"correct\n";
   cout<<"/"<<ch1<<"/i/"<<ch1<<"/a/"<<ch5<<"/i/"<<ch7<<"/\n";a++;
   }

 else if (ch=='n')
    {ch5='n';  cout<<"correct \n";
    cout<<"/"<<ch1<<"/i/"<<ch1<<"/a/"<<ch5<<"/i/"<<ch7<<"/\n";a++;
    }
 else if (ch=='c')
   { ch7='c'; cout<<"correct \n";
   cout<<"/"<<ch1<<"/i/"<<ch1<<"/a/"<<ch5<<"/i/"<<ch7<<"/\n"; a++;
   }
  else
 {
  j++;
 for (int t=j;t<9;t++)
 cout<<s[t];
 }
 if(a==3)
 break;
 cout<<"\n";
 }
 cout<<ch1<<"/i/"<<ch1<<"/a/"<<ch5<<"/i/"<<ch7<<"\n";
getch();
}
