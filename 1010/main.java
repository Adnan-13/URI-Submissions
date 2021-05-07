import static java.lang.System.*;
import java.util.*;
public class Main
{
    public static void main(String[] args)
    {
        Scanner k=new Scanner(in);
    	int product1=k.nextInt();
      	int units1=k.nextInt();
      	float price1=k.nextFloat();
      	int product2=k.nextInt();
      	int units2=k.nextInt();
      	float price2=k.nextFloat();
      	float total=(units1*price1+units2*price2);
      	out.printf("VALOR A PAGAR: R$ "+"%.2f\n",total);
    }
}