import static java.lang.System.*;
import java.util.*;
public class Main
{
    public static void main(String[] args)
    {
        Scanner k=new Scanner(in);
        int time,speed,distance;
        time=k.nextInt();
        speed=k.nextInt();
        distance=time*speed;
        double fuel=distance/12.;
        out.printf("%.3f\n",fuel);
    }
}