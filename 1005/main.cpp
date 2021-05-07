import static java.lang.System.*;
import java.util.*;
public class Main
{
    public static void main(String[] args)
    {
        Scanner k=new Scanner(in);
        float a=k.nextFloat();
        float b=k.nextFloat();
        double media=(a*3.5+b*7.5)/(3.5+7.5);
        out.printf("MEDIA = "+"%.5f\n",media);
    }
}