#include <stdio.h>
int main()
{
    int age;
    printf("enter the age ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("you can vote");
    }
    else if (age < 17)
    {
        printf("you are teenage");
    }
    else
    {
        printf(" you can't vote");
    }
    return 0;
}
// #include<stdio.h>
// int main(int argc, char const *argv[])
// {
//     int i;
//     for( i=0;i<10;i++){
//         printf("the output is %d\n", i);
//     }
//     return 0;
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

