import static java.lang.System.*;
import java.util.*;
public class Main
{
    public static void main(String[] args)
    {
        Scanner k=new Scanner(in);
        int a,b,c;
        a=k.nextInt();
        b=k.nextInt();
        c=k.nextInt();
        int max=a;
        if(b>max)
        {
            max=b;
        }
        if(c>max)
        {
            max=c;
        }
        out.print(max+" eh o maior\n");
    }
}