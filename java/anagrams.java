import java.util.Scanner;

public class anagrams {

    static boolean isAnagram(String a, String b) {
       a=a.replace(" ", "").toLowerCase();
       b=b.replace(" ", "").toLowerCase();
       char [] a1 = a.toCharArray();
       char [] b1 = b.toCharArray();
       java.util.Arrays.sort(a1); 
       java.util.Arrays.sort(b1);
       if(java.util.Arrays.equals(a1, b1))
        return true;
       else 
         return false;  
    }
    public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}