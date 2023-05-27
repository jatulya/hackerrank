import java.util.*;
import java.util.regex.*;

public class tagcontent{
	public static void main(String[] args){
		
		Scanner in = new Scanner(System.in);
		int testCases = Integer.parseInt(in.nextLine());
		
        while(testCases>0){
			
            String line = in.nextLine();
			Pattern pattern = Pattern.compile("<(.+)>([^<]+)</\\1>");
            Matcher matcher = pattern.matcher(line);    
            boolean found = false;
            
            while(matcher.find()){
                
                System.out.println(matcher.group(2)); //printing the contents
                found = true;
                
            }
          
            //when the match isnt found
            if (!found)
                System.out.println("None");		
			testCases--;
		}
        in.close();
	}
}

/*
 * () -> grouping
 * <  -> first group should start with this tag
 * .+ -> inside this tag, anything can be there
 * >  -> first group should end with this
 * [^<] -> the second group should not start with '<'
 * +  -> other than specified, it can have anything
 * </ -> third group should be starting with this
 * \1 -> 3rd grp should have everything that was in the first group
 */


