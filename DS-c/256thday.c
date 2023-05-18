//program to find 256th day of the year given in Russian calender

/* Julian Calender -> 32nd day is Feb 14 (but somehow 256th day is same as the normal calender)
    the leap years -> divisible by 4
    till 1918
    Gregorian Calender -> modern day calender
    leap year -> divisble by 4 and not divisible by 100
                 divisible by 400 */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

void dayofprgrmmer(char year[]){

    int yearint;
    yearint = atoi(year);
    char day1[11] = "12.09.";    
    strcat(day1, year);
    char day2[11] = "13.09.";
    strcat(day2, year);
    char day3[11] = "26.09.";
    strcat(day3, year);

    if (yearint<1918){
        /*printf("%s\n", day1);
        printf("%s\n", day2);*/
        if(yearint%4 == 0) printf("%s", day1);
        else  printf("%s", day2);
    }
    else if (yearint == 1918)
        printf("%s",day3);
    else{
        if ((yearint%4 == 0 && yearint%100 != 0) || yearint%400 == 0) 
            printf("%s", day1);
        else printf("%s", day2);
    }

}

int main(){

    char year[4];
   // printf("Enter the year: ");
    scanf("%s", year);
   // printf("The day of the programmer (256th day of the year) is at: ");
    dayofprgrmmer(year);
    return 0;
}