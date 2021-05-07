import static java.lang.System.*;
import java.util.*;
public class Main
{
    public static void main(String[] args)
    {
        Scanner k=new Scanner(in);
        double a,b,c,pi,area1,area2,area3,area4,area5;
        a=k.nextDouble();
        b=k.nextDouble();
        c=k.nextDouble();
        pi=3.14159;
        area1=(1/2.)*(a*c);
        area2=pi*Math.pow(c,2);
        area3=(1/2.)*c*(a+b);
        area4=Math.pow(b,2);
        area5=a*b;
        out.printf("TRIANGULO: "+"%.3f",area1);
        out.printf("\nCIRCULO: "+"%.3f",area2);
        out.printf("\nTRAPEZIO: "+"%.3f",area3);
        out.printf("\nQUADRADO: "+"%.3f",area4);
        out.printf("\nRETANGULO: "+"%.3f\n",area5);
    }
}