import static java.lang.System.*;
import java.util.*;
public class Main
{
    public static void main(String[] args)
    {
        Scanner k=new Scanner(in);
        int x=k.nextInt();
        int y=k.nextInt();
        double total=0;
        if(x==1)
        {
            total=y*4.00;
        }
        else if(x==2)
        {
            total=y*4.50;
        }
        else if(x==3)
        {
            total=y*5.00;
        }
        else if(x==4)
        {
            total=y*2.00;
        }
        else if(x==5)
        {
            total=y*1.50;
        }
        out.printf("Total: R$ %.2f\n",total);
    }
}