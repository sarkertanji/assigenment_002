                                                problem 001
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
       int num = 15,input , result2;
       printf("enter a input: ");
       scanf("%d",&input);

       while(input<0)
       {
           printf("enter a input: ");
           scanf("%d",&input);

       }


        result2 =  pow(input,0.2);
        for (int i = result2+1 ;i<= num + result2 ;i++)
        {
            int result = pow(i,5);
            printf("%d, ", result);
        }



    return 0;
}


                                    // problem -002 not complete yet , hope so i'll found a way soon 

/* Program to compute cosine series */
/* cos(x) = 1-x^2/2!+x^4/4!+x^6/6!+...+x^n/n! */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int fact(int number);
main(void)
{
        float x;
        double result ;
        int sum = 1;

     /* Read the Input x value in degrees */

        printf ("Input X Value (in degrees) :");
        scanf ("%f", &x);

    /*converting x to radians    result = pow(x,i)/fact(i); */
        x=x*3.1412/180;

      for(int i=1; i<=10;i++)
      {
         if(i%2==0)
         {

             printf("%d ",pow(-a,i));
         }
      }

   //    int result = fact(n);

    return 0;
}

 int fact(int number)
 {
    int sum=0;
    int fact =1;
    for (int i=1; i<=number; i++)
    {
        fact = fact*i;
        sum = sum+fact;
    }
     return fact;
 }


                                              //problem 003 

                             /*===============================================================
                                   This is the first draft,
                                     the program is all good but you need
                                        to read the question well 
                                            and try to understand what
                                                the fuck TA wanted.
                                                    i mean how to take input .                     
                               ==============================================================*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void armstrong_number (int number);
void Is_prime_number(int number);
void is_pallindrome(int number);

int main(void)
{
    int number;
    /*taking input */
    printf("Enter the number to check prime: ");
    scanf("%d",&number);
         /* Calling  armstrong_number function    */
            armstrong_number(number);

         /* Calling  Is_prime_number number function    */
            Is_prime_number(number);

         /* Calling  is_pallindrome function    */
            is_pallindrome(number);

    return 0;
}


void is_pallindrome(int number)
{
 int mod,result=0;
      int input = number;

    while(number>0)
    {
      mod = number % 10;

      result = ( result * 10 ) + mod;


      number = number / 10;
    }

    if(result == input )
    {
      printf("%d is Pallindrome  number. \n",input);
    }
    else
    {
      printf("%d is Pallindrome Number. \n",input);
    }

}


void armstrong_number (int number)
{
      int mod,result=0;
      int input = number;

    while(number>0)
    {
      mod = number % 10;

      result = result+ pow(mod,3);

      number = number / 10;
    }

    if(result == input )
    {
      printf("%d Is Armstrong  number. \n",input);
    }
    else
    {
      printf("%d Is Not Armstrong Number. \n",input);
    }

}

void Is_prime_number(int number)
{
    int  i,m=0,flag=0;
    m=number/2;

   for(i=2;i<=m;i++)
    {
          if(number % i == 0)
        {
            printf("%d Is Number Is not prime. \n",number);
            flag=1;
            break;
        }
   }
        if(flag == 0)

        {
         printf(" %d Is Number Is prime. \n",number);

        }
}

                                                     //   problem 004

                                                     /* this is the easyst one */
            
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char ch;

    /* Input alphabet from user */
    printf("Enter any character: ");
    scanf("%c", &ch);

    /* Switch ch value */
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("Vowel");
            break;

        case 'b':
        case 'c':
        case 'd':
        case 'f':
        case 'g':
        case 'h':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
        case 'z':
        case 'B':
        case 'C':
        case 'D':
        case 'F':
        case 'G':
        case 'H':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            printf("Consonant");
            break;

        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            printf("Number");
            break;


        default: printf("Others");
    }

    return 0;
}

                                        //problem 005

                            /*=================================================
                                in here i just write the basic structure.
                                you can understand how the program work from this.
                                so your task is to complete the
                                function.you have to write the following
                                function prime, even odd, and factorial.
                                and call them from the if_else statement.
                            ====================================================*/

 

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int menu;

    do
    {
     printf("Enter 1 for Factorial ,2 for Prime ,3 for Odd or even and 4 for exit the program: ");
     scanf("%d",&menu);

    if(menu == 1)
    {
        printf("\nFactorial\n");
        //make a factorial function and call it from here
    }
    else if(menu == 2)
    {
                printf("\nPrime\n");
                //make a ptime function and call it from here
    }

    else if(menu == 3)
    {
                  printf("\neven odd\n");
                  //make a even odd function and call it from here
    }


    }
    while(menu != 4 || menu >=5);

    return 0;
}




