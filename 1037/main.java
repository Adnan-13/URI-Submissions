import static java.lang.System.*;
import java.util.*;
public class Main
{
    public static void main(String[] args)
    {
        Scanner k=new Scanner(in);
        float num=k.nextFloat();
        if(num>=0&&num<=25)
        {
            out.println("Intervalo [0,25]");
        }
        else if(num>25&&num<=50)
        {
            out.println("Intervalo (25,50]");
        }
        else if(num>50&&num<=75)
        {
            out.println("Intervalo (50,75]");
        }
        else if(num>75&&num<=100)
        {
            out.println("Intervalo (75,100]");
        }
        else
        {
            out.println("Fora de intervalo");
        }
    }
}