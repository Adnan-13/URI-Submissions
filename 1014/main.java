import static java.lang.System.*;
import java.util.*;
public class Main
{
    public static void main(String[] args)
    {
        Scanner k=new Scanner(in);
        int x=k.nextInt();
        float y=k.nextFloat();
        float consumption=x/y;
        out.printf("%.3f km/l\n",consumption);
    }
}