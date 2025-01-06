// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     printf("hello");
//     return 0;
// }

// #include<stdio.h>
// int main(){
// int a,b;
// printf("enter the first number");
// scanf("%d",&a);
// printf("enter the second number");
// scanf("%d ",&b);
// printf("the sum of the numbers is %d",a*b);
// return 0;
// }

// #include<stdio.h>
// //area of square
// int main(){
//     float radius;
//     printf("enter radius");
//     scanf("%f",&radius);
//     printf("area is:%f",3.14*radius*radius);
//     return 0;
//     }

// Author Ajay Khadka
// Date:27 Nov 2024
// Program to print number from 1 to 10

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i;
//     for(i=0;i<=10;i++){
//         printf("%d\n",i);
//     }
//      return 0;

// #include<stdio.h>
// int main(){
//     int a=5,b=6;
//     printf("sum of the num is %d",a+b);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int n, reverse = 0, remainder;

//     printf("Enter an integer: ");
//     scanf("%d", &n);

//     while (n != 0) {
//         remainder = n % 10;
//         reverse = reverse * 10 + remainder;
//         n /= 10;
//     }

//     printf("Reversed number: %d\n", reverse);

//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("enter the first number");
//     scanf("%d",&a);
//     printf("enter the second number");
//     scanf("%d",&b);
//     printf("the sum of two numbers are %d",a+b);
//     return 0;
// }
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i=0;
//     for (i;i<9;i++){
//         printf("%d \n",i);
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i=0,j=3;
//     for(i;j;i<9,j<8,i++,j++){
//     printf("%d,%d",i,j);
//     }
//     return 0;
// }
//  #include<stdio.h>
//  int main(){
//     int a=8,b=9,c;
//     printf("enter the value");
//     scanf("%d",&c);
//     printf("sum of the sum is %d", a+b*c);
//     return 0;
//  }
//    #include<stdio.h>
//    int main(){
//     int a=5,b,c=3;
//     printf("enter the value of number");
//     scanf("%d\n",&b);
//     printf("sum of the number is %d\n",a-b+c);
//     return 0;
//    }
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//    int i=0,j=0;
//    for(i,j;i<9;j<i,i++){
//     printf("%d,%d",i,j);
//    }
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int num;

//     printf("Enter an integer: ");
//     scanf("%d", &num);

//     if (num % 2 == 0) {
//         printf("%d is even.\n", num);
//     } else {
//         printf("%d is odd.\n", num);
//     }

//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int num1, num2;

//     printf("Enter two integers: ");
//     scanf("%d %d", &num1, &num2);

//     if (num1 > num2)
//         printf("The largest number is %d\n", num1);
//     else if (num2 > num1)
//         printf("The largest number is %d\n", num2);
//     else
//         printf("Both numbers are equal.\n");

//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int a,b=7,c;
//     printf("enter the num");
//     scanf("%d\n",&a);
//     printf("enter the num2");
//     scanf("%d\n",&b);
//     printf("the sum of the num is %d",a*b+c);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("enter the first num ");
//     scanf("%d ",&a);
//     printf("enter the second num ");
//     scanf("%d ",&b);
//     printf("enter the third num ");
//     scanf("%d ",&c);
//     printf("sum of the num is %d ", a+b-c);
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int number;
//     printf("Enter the number(1-10)");
//     scanf("%d", &number);
//     if (number == 8)
//     {
//         printf("This is 8");
//     }

//     else if (number == 7)
//     {
//         printf("This is 7");
//     }
//     else if(number!=7){
//         printf("this is not 7");

//     }
//     else
//     {
//         printf("This is not 8");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int number;
//     printf("enter the number(1-6)");
//     scanf("%d",&number);
//     if (number == 6)
//     {
// printf("this is 6");
//     }
//     else
//     {
//         printf("this is not 6");
//     }
//     return 0;

// }
// #include <stdio.h>
// int main()
// {
//     int age;
//     printf("enter the age ");
//     scanf("%d", &age);
//     if (age >= 18)
//     {
//         printf("you can vote");
//     }
//     else if (age < 17)
//     {
//         printf("you are teenage");
//     }
//     else
//     {
//         printf(" you can't vote");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i;
//     for( i=0;i<10;i++){
//         printf("the output is\n %d", i);
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int sub;
//     printf("enter the sub");
//     scanf("%d", &sub);
//     if (sub > 33)
//     {
//         printf("passed");
//     }
//     else if (sub < 30)
//     {
//         printf("you are hopeless");
//     }
//     else
//     {
//         printf("failed");
//     }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int age;
//     printf("enter the age");
//     scanf("%d",&age);
//     if (age >25)
// {
//     printf("you can marry");
// }
// else if (age <25)

// {
//     printf("you can't marry");

// }
// return 0;
// }
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//  int i,j; 
//  for(i=0,j=0;i<10,j<10;i++,j++){
//     printf("%d, %d\n",i,j);
//  }
//     return 0;
// }
// #include<stdio.h>
// int main(){
//    int a,b,c=9;
//    printf("enter the first numeber");
//    scanf("%d", &a);
//    printf("enter the second number");
//    scanf("%d", &b);
//    printf("the sum of the number is %d",a*b+c);
//    return 0;
// }
// #include<stdio.h>
// int main(){
//     int a,b=8;
//     printf("enter the number");
//     scanf("%d",&a);
//     printf("sum of the num is %d",a*b);
//     return 0;
// }
// #include<stdio.h>
// int main(){
// int i=2;
// do {
//     printf("number %d\n",i);
//     i++;
// }while (i<=20);
//      return 0;
// }
// #include<stdio.h>
// int main(){
//     int i=1;
//     while (i<=10){
//         printf("number %d\n",i);
//         i++;
//     }
    
//     return 0;
// }  
// #include<stdio.h>
// int main(){
//     int a=0;
//     while (a<=23){
//         printf("number %d\n",a);
//         a++;
//     }
// return 0;
// }
// #include<stdio.h>
// int main(){
//     int number ;
//    printf("enter the number");
//    scanf("%d\n",&number);
//  if (number >60)
//  {
//     printf("you are getting old");
//  }
//  else if (number < 60){
//     printf("you are okay");
//  }
//  return 0;
//    }

// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int a=0;
//     for(a;a<=18;a++){
//     printf("%d\n",a);}
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int a,b=7,c;
//     printf("enter the first num");
//     scanf("%d\n",&a);
//     printf("enter the second num");
//     scanf("%d\n",&c);
//     printf("sum of the num is %d, %d\n",a*b*c);
//     return 0;
// }
// #include<stdio.h>
// int main(){
//     int a,b,c=7;
//     printf("enter the first num");
//     scanf("%d",&a);
//     printf("enter the second num");
//     scanf("%d",&b);
//     printf("the sum of the num is %d",a+b*c);
//     return 0;

// }
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int h;
//     for (h=0;h<50;h++){
//     printf("%d\n",h);
//     }
//     return 0;
// }

// #include<stdio.h>
// int main(){
//    int num;
// printf("enter the num");
// scanf("%d\n",&num);
// if (num > 18){
// printf("you is able to vote");
// }
// else if (num < 18)
//  {
//    printf("you is not able to vote");
// }
// return 0;
// }
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//    int r;
// for (r=1; r<20;r++){
// printf("%d\n",r);
// }
//    return 0;
// }
#include<stdio.h>
int main(){
    int a=6,b;
    printf("enter the num");
    scanf("%d",&b);
    printf("sum of the num is %d",a*b);
    return 0;
}




