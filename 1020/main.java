import static java.lang.System.*;
import java.util.*;
public class Main
{
    public static void main(String[] args)
    {
        Scanner k=new Scanner(in);
        int age=k.nextInt();
        int year=age/365;
        age%=365;
        int month=age/30;
        age%=30;
        int day=age;
        out.print(year+" ano(s)\n"+month+" mes(es)\n"+day+" dia(s)\n");
    }
}