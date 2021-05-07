import static java.lang.System.*;
import java.util.*;
public class Main
{
    public static void main(String[] args)
    {
        Scanner k=new Scanner(in);
        int n=k.nextInt();
        out.println(n);
        int count100=n/100;
        n%=100;
        int count50=n/50;
        n%=50;
        int count20=n/20;
        n%=20;
        int count10=n/10;
        n%=10;
        int count5=n/5;
        n%=5;
        int count2=n/2;
        n%=2;
        int count1=n;
        out.println(count100+" nota(s) de R$ 100,00");
        out.println(count50+" nota(s) de R$ 50,00");
        out.println(count20+" nota(s) de R$ 20,00");
        out.println(count10+" nota(s) de R$ 10,00");
        out.println(count5+" nota(s) de R$ 5,00");
        out.println(count2+" nota(s) de R$ 2,00");
        out.println(count1+" nota(s) de R$ 1,00");
    }
}