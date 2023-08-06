import java.math.BigDecimal;
import java.util.*;
class bigDeci{

    public static void main(String []args){
        //Input
        Scanner sc= new Scanner(System.in);
        int n=sc.nextInt();
        String []s=new String[n+2];
        for(int i=0;i<n;i++){
            s[i]=sc.next();
        }
      	sc.close();
        
        Comparator<String> myCompare = new Comparator<String>()  //the comparator interface
        {
            public int compare(String s1, String s2)
            {
                BigDecimal b1 = new BigDecimal(s1);
                BigDecimal b2 = new BigDecimal(s2);
                return b2.compareTo(b1);
            }
        };    
        Arrays.sort(s,0,n,myCompare); 
        //Output
        for(int i=0;i<n;i++)
        {
            System.out.println(s[i]);
        }
    }

}