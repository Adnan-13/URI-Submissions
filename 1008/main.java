import static java.lang.System.*;
import java.util.*;
public class Main
{
    public static void main(String[] args)
    {
        Scanner k=new Scanner(in);
        int num=k.nextInt();
        int workHour=k.nextInt();
        float amount=k.nextFloat();
        float salary=workHour*amount;
        out.println("NUMBER = "+num);
        out.printf("SALARY = U$ "+"%.2f\n",salary);
    }
}