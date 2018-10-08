//IF_I_STAY
import java.util.Scanner;
public class hollywood
{
    public static void main()
    {
         Scanner sc=new Scanner(System.in);
        int f=0;int c=9;int x=0;
        char h[]={'Ⓗ','Ⓞ','Ⓛ','Ⓛ','Ⓨ','Ⓦ','Ⓞ','Ⓞ','Ⓓ'};
        char m[]={'I','_',' ','I',' ','_','_','A','_'};
        while(f==0)
        {
            System.out.println("Your challenge :\n");
            for(int i=0;i<9;i++)
            System.out.print(m[i]);
            System.out.println("\n");
            for(int i=0;i<9;i++)
            System.out.print(h[i]);
            System.out.println("\nEnter your guess:\n");
            char ch=sc.next().charAt(0);
            if(ch=='f')
            {
                System.out.println("CONGRATULATIONS YOUR GUESS IS CORRECT");
                m[1]='F';
                for(int i=0;i<9;i++)
                System.out.print(m[i]);
            }
            else if(ch=='s')
            {
                System.out.println("CONGRATULATIONS YOUR GUESS IS CORRECT");
                m[5]='S';
                for(int i=0;i<9;i++)
                System.out.print(m[i]);
            }
            else if(ch=='t')
            {
                System.out.println("CONGRATULATIONS YOUR GUESS IS CORRECT");
                m[6]='T';
                for(int i=0;i<9;i++)
                System.out.print(m[i]);
            }
            else if(ch=='y')
            {
                System.out.println("CONGRATULATIONS YOUR GUESS IS CORRECT");
                m[8]='Y';
                for(int i=0;i<9;i++)
                System.out.print(m[i]);
            }
            else if(m[1]=='F' && m[5]=='S' && m[6]=='T' && m[8]=='Y')
            { System.out.println("YOU WON");
                break;
            }
            else 
            {
                System.out.println("You lost a chance");
                h[x]=' ';
                for(int i=0;i<9;i++)
                System.out.print(h[i]);
                x++;
                if(x==9)
                {
                    System.out.println("YOU LOST");
                    f++;
                }
            }
        }
    }
}
                
            