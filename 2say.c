#include<stdio.h>
#include<ctype.h>
int main() {

        char numchar[3];
        printf("\n Enter the integer number: ");
        scanf("%s",numchar);
        
        if(numchar[2]!='\0')
        {
                printf("\n Number is greater than 100");
        }
        else
        {
                if(numchar[1]=='\0') // one digit numbers [0-9]
                {
                        char n = numchar[0];
                        printf("%s",numchar(n));
                }
                else // two digit numbers
                {
                        char n1 = numchar[0];
                        char n2 = numchar[1];
                        if(n1=='0')
                        {
                                printf("%s",numchar(n2));
                        }
                        if(n1=='1')
                        {
                                if(n2=='0')
                                {
                                        printf("\nTen\n");
                                }
                                if(n2=='1')
                                {
                                        printf("\nEleven\n");
                                }
                                if(n2=='2')
                                {
                                        printf("\nTwelve\n");
                                }
                                if(n2=='3')
                                {
                                        printf("\nThirteen\n");
                                }
                                if(n2=='4')
                                {
                                        printf("\nFourteen\n");
                                }
                                if(n2=='5')
                                {
                                        printf("\nFifteen\n");
                                }
                                if(n2=='6')
                                {
                                        printf("\nSixteen\n");
                                }
                                if(n2=='7')
                                {
                                        printf("\nSeventeen\n");
                                }
                                if(n2=='8')
                                {
                                        printf("\nEighteen\n");
                                }
                                if(n2=='9')
                                {
                                        printf("\nNineteen\n");
                                }       
                        } 
                        if(n1=='2')
                        {
                                if(n2=='0')
                                        printf("\nTwenty\n");
                                else
                                {
                                        printf("Twenty %s",numchar(n2));
                                }
                                        
                        }
                        if(n1=='3')
                        {
                                if(n2=='0')
                                        printf("\nThirty\n");
                                else
                                {
                                        printf("Thirty %s",numchar(n2));
                                }
                                        
                        }
                        if(n1=='4')
                        {
                                if(n2=='0')
                                        printf("\nFourty\n");
                                else
                                {
                                        printf("Forty %s",numchar(n2));
                                }
                                        
                        }
                        if(n1=='5')
                        {
                                if(n2=='0')
                                        printf("\nFifty\n");
                                else
                                {
                                        printf("Fifty %s",numchar(n2));
                                }                                       
                        }
                        if(n1=='6')
                        {
                                if(n2=='0')
                                        printf("\nSixty\n");
                                else
                                {
                                        printf("Sixty %s",numchar(n2));
                                }                                       
                        }
                        if(n1=='7')
                        {
                                if(n2=='0')
                                        printf("\nSeventy\n");
                                else
                                {
                                        printf("\nSeventy %s\n",numchar(n2));                                }                                       
                        }
                        if(n1=='8')
                        {
                                if(n2=='0')
                                        printf("\nEighty\n");
                                else
                                {
                                        printf("\nEighty %s\n",numchar(n2));
                                }                                       
                        }
                        if(n1=='9')
                        {
                                if(n2=='0')
                                        printf("\nNinety\n");
                                else
                                {
                                        printf("\nNinety %s\n",numchar(n2));
                                }                                       
                        }                       
                }
        }                                                                                 return 0;       
                                                                                      }
