#include <stdio.h>
/*Q1 Write a C program that accepts an employee's ID, total worked hours in a month and the amount
 received per hour. Print the ID and salary (with two decimal places) of the employee for a
 particular month. */
// int main(){
//     int ID;
//     float worked_hours,amount;
//     printf("Enter your Employee ID:");
//     scanf("%d",&ID);
//     printf("Enter total worked hours in a month:");
//     scanf("%f",&worked_hours);
//     printf("Enter the amount recieved per hour:");
//     scanf("%f",&amount);
//     printf("Employee ID:%d  \nTotal Salaray of the Month:%.2f",ID,worked_hours*amount);
// }
/*Q2 Write a C program that takes the height and width of a rectangle as an input from user and
compute the perimeter and area of a rectangle.*/
// int main(){
//     float  height,width;
//     printf("Enter height of the rectangle:");
//     scanf("%f",&height);
//     printf("Enter the width of a rectangle:");
//     scanf("%f",&width);
//     printf("Perimeter of rectangle is:%.2f",2*(height+width));     
//     printf("\nArea of rectangle is: %.2f",height*width);     
    
// }

/*Q3 Write a C program to accept the height of a person in centimeters and categorize the person
according to his height. (Height < 150cm – Dwarf, Height=150cm – Average, Height>=165cm –
Tall).*/
// int main(){    //lab1 Q3
//     int height;
//     printf("Enter your height in centimeter:");
//     scanf("%d",&height);
//     if (height<150){
//         printf("Dwarf");
//     }
//     else if (height==150){
//         printf("Averege");
//     }
//     else if( height>=160){
//         printf("Tall");    
//     }
//     else{
//         printf("No Condition define");
//     }
// }
/*Q4 Write a program in C to convert a decimal number to a binary number using functions.
*/
// void decimal_to_binary(int dec){
//     int bin[16];
//     int count=0;
//     while (dec>0){
//         bin[count]=dec%2;
//         dec=dec/2;
//         count+=1;
//     }
//     printf("\nBinary : ");
//     for  (int j=count-1;j>=0;j--){
//         printf("%d",bin[j]);
//     }
// }
// int main(){
//     int dec;
//     printf("Enter decimal number:");
//     scanf("%d",&dec);
//     int a;
//     decimal_to_binary(dec);
//     return 0;
// }

/*5. Write a function to calculate the nth Fibonacci number and call it recursively to print the
Fibonacci series.*/
int fibo(int  n,int a,int b){
     if (n <= 0) {
        return 0; // Base case: no more terms to print
    }
    printf("%d\t",a);
    fibo(n-1,b,a+b);
}
int main(){
    int n;
    printf("Enter the nth number for fibonachi series:");
    scanf("%d",&n);
    fibo(n,1,2);
    return 0;
}