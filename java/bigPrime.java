import java.io.*;
import java.math.*;
public class bigPrime {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        String n = bufferedReader.readLine();
        bufferedReader.close();
        BigInteger s = new BigInteger(n);
        boolean prime = s.isProbablePrime(18);
        if (prime)
            System.out.println("prime");
        else 
            System.out.println("not prime");
    }
}
