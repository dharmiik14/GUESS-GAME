#include<stdio.h>
int main()
{
    int secret=25;
    int guess ;
    int attempt= 0;
     printf("======== NUMBER GUESSING GAME ==========\n");
     printf ("guess the number between 1 to 50 :");
     scanf("%d",& guess);
    
    
    
while(guess!= secret)
{
    attempt++ ;
    if (guess> secret)
    {
        printf (" too high! try again.\n");
    }
        else
        {
        printf ("too low !try again. \n"); 

        }
        printf("\n guess the number between 1 and 50:");
        scanf("%d",& guess);
}
 
attempt++;

printf ("\n congratulation! you guess the correct number .\n");
printf("total attempt: %d\n", attempt);
   

printf(" ======= GAME OVER ==========");
 return 0 ;
}