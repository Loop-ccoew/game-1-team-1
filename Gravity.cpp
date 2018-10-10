#include <iostream>

using namespace std;

int main()
{
  char a[7]={'G','R','A','V','I','T','Y'};
  int i,j;
  char k;
  for(i=0;i<7;i++)
  {
      if(a[i]=='A'||a[i]=='I')
      {
          cout<<a[i];
      }
      else
      {
          a[i]='-';
          cout<<a[i];
                }
  }
  cout<<"You have nine chances to guess"<<endl;
for(j=8;j>=0;j--)
  { char k;
      cout<<"Guess a letter"<<endl;
      cin>>k;
     
if (k=='G')
{
    a[0]='G';
    cout<<a[6];
}
else if (k=='R')
{
    a[1]='R';
    cout<<a[6];
    
}
else if (k=='V')
{
    a[3]='V';
    cout<<a[6];
    }
    else if (k=='T')
    {
        a[5]='T';
        cout<<a[6];
    }
    else if (k=='Y')
    {
        a[6]='Y';
        cout<<a[6];
            }
            else 
            {cout<<"Wrong guess"<<endl;}}
            if (char a[7]={'G','R','A','V','I','T','Y'})
  {
      cout<<"YOU WIN";
        }
        else
        { cout<<"YOU LOSE";}
getc;
   
   return 0;
}
