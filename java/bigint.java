import java.util.*;
import java.math.*;

public class bigint {

    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        String s1 = scan.nextLine();
        String s2 = scan.nextLine();
        scan.close();
        BigInteger int1 = new BigInteger(s1);
        BigInteger int2 = new BigInteger(s2);
        System.out.println(int1.add(int2));
        System.out.println(int1.multiply(int2));
       
    }
}