import static java.lang.System.*;
import java.util.*;
public class Main
{
    public static void main(String[] args)
    {
        Scanner k=new Scanner(in);
        int a,b,c,d;
        a=k.nextInt();
        b=k.nextInt();
        c=k.nextInt();
        d=k.nextInt();
        if(b>c&&d>a&&((c+d)>(a+b))&&c>=0&&d>=0&&(a%2==0))
        {
            out.println("Valores aceitos");
        }
        else
        {
            out.println("Valores nao aceitos");
        }
    }
}