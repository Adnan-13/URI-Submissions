import static java.lang.System.*;
import java.util.*;
public class Main
{
    public static void main(String[] args)
    {
        Scanner k=new Scanner(in);
        double x1,y1,x2,y2;
        x1=k.nextDouble();
        y1=k.nextDouble();
        x2=k.nextDouble();
        y2=k.nextDouble();
        double d=Math.sqrt(Math.pow((x2-x1),2)+Math.pow((y2-y1),2));
        out.printf("%.4f\n",d);
    }
}