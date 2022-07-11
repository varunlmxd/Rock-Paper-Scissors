#include<stdio.h>
#include<string.h>
#include<time.h>
//function
int rockpaperscissors(char input,char result)
{
if(input==result)
return 0;
 if(input =='r' && result =='p')
return 1;
else if(input =='r' && result =='s')
return -1;
 if(input =='p' && result =='s')
return 1;
else if(input =='p' && result =='r')
return -1;
 if(input =='s' && result =='r')
return 1;
else if(input =='s' && result =='p')
return -1;
}

int main ()
{ 
    int num,result,gh;
    srand(time(0));
    num = rand()%3+1;//number generator
      char n;
    char res[3]={'r','p','s'};
    char sd = res[(num-1)];
       //start    
       printf("Enter your move\n'r' for Rock 'p' for Paper 's' for Scissors\n");
       scanf("%c",&n);
       result= rockpaperscissors(n,sd);
       //results
       printf("You choose %c and computer choose %c\n",n,sd);
       if(result == 0)
       printf("Match was draw\n");
      else  if(result == 1)
       printf("You Lost\n");
      else 
       printf("You Won\n");
     return 0;
}
