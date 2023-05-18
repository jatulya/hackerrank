package java;

import java.util.Locale;
import java.util.Scanner;
import java.util.Locale.*;
import java.text.*;
public class currency {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        double payment = scanner.nextDouble();
        scanner.close();
        String us = NumberFormat.getCurrencyInstance(Locale.US).format(payment);
        String china = NumberFormat.getCurrencyInstance(Locale.CHINA).format(payment);
        String france = NumberFormat.getCurrencyInstance(Locale.FRANCE).format(payment);
        String in = NumberFormat.getCurrencyInstance(new Locale("en", "in")).format(payment);
        System.out.println("US: " + us);
        System.out.println("India: " + in);
        System.out.println("China: " + china);
        System.out.println("France: " + france);
        
        }
    
}
