import static java.lang.System.in;
import static java.lang.System.out;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(in);
        
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            String encoded = sc.next();
            int shift = sc.nextInt();
            
            for(int i = 0; i < encoded.length(); i++)
            {
                int charToPrint = (int)encoded.charAt(i);
                
                charToPrint -= shift;
                
                if(charToPrint < 65)
                {
                    charToPrint += 26;
                }
                
                out.print((char)charToPrint);
            }
            
            out.println();
        }
    }
    
}
