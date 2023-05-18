package java;

import java.util.*;

class parallel{
    
    int b; int h;
    
    parallel(int x, int y){
       b=x;
       h=y; 
    }

    void area() throws Exception{
        
        if((b<0) ||(h<0) ){
            throw new Exception("Cannot compute the area: Breadth and height must be positive");
        }
        else{
          System.out.println("Area of the parallellogram = " + b*h);  
        }
    }
}
public class bdpos {
    public static void main(String[] args) {
        
        Scanner scan = new Scanner(System.in);
        int a = scan.nextInt();
        int b = scan.nextInt();
        scan.close();
        
        parallel obj = new parallel(a, b);
        try{
            obj.area();
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
}
