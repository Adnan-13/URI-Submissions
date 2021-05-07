import static java.lang.System.*;
import java.util.*;
public class Main
{
    public static void main(String[] args)
    {
        Scanner k=new Scanner(in);
    	String name=k.nextLine();
      	double salary=k.nextDouble();
      	double sales=k.nextDouble();
    	double total=salary+((sales*15)/100);
      	out.printf("TOTAL = R$ "+"%.2f\n",total);
    }
}