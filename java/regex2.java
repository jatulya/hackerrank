package java; //!!!!!do not use this line in your solution for hackerrank!!!

import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class regex2 { //use class name as "Solution"

    public static void main(String[] args) {

        String regex = "\\b(\\w+)(?:\\W+\\1\\b)+"; //
        Pattern p = Pattern.compile(regex, Pattern.CASE_INSENSITIVE); //

        Scanner in = new Scanner(System.in);
        int numSentences = Integer.parseInt(in.nextLine());
        
        while (numSentences-- > 0) {
            String input = in.nextLine();
            
            Matcher m = p.matcher(input);
            
            while (m.find()) {
                input = input.replaceAll(m.group(), m.group(1)); //
            }
            
            System.out.println(input);
        }
        
        in.close();
    }
}

/*  explaination of pattern
 * /b -> boundary, which means that the string that are to be matched had to be a whole
        string itself 
        for eg. Goodbye bye bye 
        here 'bye bye' matched the first and second 'bye' as words, not the 'bye' from 'Goodbye' 
 * (/w+) -> includes lowercase and uppercase letters, digits and underscores
 * (?: -> this starts a non-capturing group which means it would capture the group without capturing 
        the matched results (here, it would catch the white spaces)
 * /W -> [^a-zA-z0-9_]
 * /1 -> backslash 1 stands for the bracketed word to be repeated
 * +  -> the plus in the end tells that the word can be repeated multiple time
*/

