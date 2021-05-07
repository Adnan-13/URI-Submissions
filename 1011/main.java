import static java.lang.System.*;
import java.util.*;
public class Main
{
    public static void main(String[] args)
    {
        Scanner k=new Scanner(in);
        double r=k.nextDouble();
        double pi=3.14159;
        double vol=(4/3.)*pi*Math.pow(r,3);
        out.printf("VOLUME = "+"%.3f\n",vol);
    }
}