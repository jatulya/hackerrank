
//import java.io.*;
import java.util.Scanner;
import java.util.regex.*;

public class ipaddress {

    public static void main(String[] args) {
        Matcher bool;
        Pattern p = new MyRegex().pattern;
        Scanner in = new Scanner(System.in);
        while(in.hasNext()){
            String IP = in.next();
            bool = p.matcher(IP);
            System.out.println(bool.matches());
        }
        in.close();
    }
}

class MyRegex{
    
    String zeroTo255 = "(\\d{1,2}|(0|1)\\d{2}|2[0-4]\\d|25[0-5])";
    public String ip_pattern = zeroTo255 + "\\." + zeroTo255 + "\\." + zeroTo255 + "\\." + zeroTo255;
    Pattern pattern = Pattern.compile(ip_pattern);   
    
}