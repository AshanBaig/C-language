/*Exercises
1. Write a C program to display the first n odd natural numbers and their sum using for, while and
do-while loop. */
#include <stdio.h> //lab2Q1
// void main(){
//     int n; 
//     printf("Enter the nth number:");
//     scanf("%d",&n);
//     printf("for loop:\t");
//     for (int i=1;i<=n;i+=2){
//         printf("%d\t",i);
//     }
//     printf("\nWhile Loop:");
//     int j=1;
//     while (j<=n){
//         printf("\t%d",j);
//         j+=2;
//     }
//     printf("\nDo-While Loop: ");
//     int k=1;
//     do {
//         printf("%d\t",k);
//         k+=2;
//     }while (k<=n);      }

/*2. Write a C program to make the following pattern as a pyramid with an asterisk.
    *
   * *
  * * *
 * * * *                */

// void main(){
//     for (int i=1;i<=4;i++){
//         for (int space=i;space<4;space++){
//             printf(" ");
//         }
//         for (int j=1;j<=i;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
// }

/*3. Write a C program to compare two strings without using string library functions. */

// int compare_string(){
//     char str1[]="Hello";
//     char str2[]="Hello1";
//     int i=0;
//     while (str1[i]!='\0' || str2[i]!='\0' ){
//         if (str1[i]!=str2[i]){
//             return 0;
//         }
//         i+=1;
//     }
//     return 1;
// }
// void main(){
//     int result=compare_string();
//     if (result==1){
//         printf("Both strings are equal");
//     }
//     else{
//         printf("Strings are not equal");
//     }
// }

/*4. Write a C program to read a sentence and replace lowercase characters with uppercase and vice
versa. */

// #include <string.h>
// char* lower_upper(char *str1){
//     int len=strlen(str1);
//     for (int i=0;i<len;i++){
//     if (str1[i]>='a' && str1[i]<='z'){
//         str1[i]=str1[i]-32;
//     }
//     else if (str1[i]>='A' && str1[i]<='Z'){
//          str1[i]=str1[i]+32;
//     }
//     else{
//         printf("");
//     }
//     }
//     return str1;
// }
// void main(){
//     char str1[]="Hello,tHIS iS mY fIRST pROGRAM ";
//     printf("%s",lower_upper(str1));
// }

/*5. Write a C program to print all unique elements in an array. */
// hoqw to find size of array sizeof(array_name/sizeof(arrayname[0]))

// void main(){
//     int nums[]={1,2,3,2,4,1,5,3};
//     int len = sizeof(nums)/sizeof(nums[0]);
//     int should_print;
//     printf("Unique Numbers are !\n");
//     for (int i = 0; i < len; i++)
//     {
//         int count=0;
//         for (int j = 0; j < len; j++)
//         {
//            if (count>1){
//             break;
//            }
//            if (nums[i]==nums[j]){
//             count+=1;
//            } 
        
//         }
//         if (count==1){
//             printf("%d \n",nums[i]);
//         }
//     }        
// }

#include <stdio.h>
void addDistances(int feet1, int inches1, int feet2, int inches2, int *resultFeet,int *resultInches) {
    *resultFeet = feet1 + feet2;
    *resultInches = inches1 + inches2;
    if (*resultInches >= 12) {
        *resultFeet += *resultInches / 12;
        *resultInches = *resultInches % 12;
    }
}
void main() {
    int feet1, inches1;
    int feet2, inches2;
    int resultFeet;
    int resultInches;
    printf("Enter first distance (feet inches): ");
    scanf("%d %d", &feet1, &inches1);
    printf("Enter second distance (feet inches): ");
    scanf("%d %d", &feet2, &inches2);
    addDistances(feet1, inches1, feet2, inches2,&resultFeet,&resultInches);
    printf("Sum of distances: %d feet %d inches \n", resultFeet, resultInches);
}
