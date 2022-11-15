#include <stdio.h>

int main()
{

    printf("Hello, ");

    int a,b;

    printf("Enter the numbers: ");
    scanf("%d %d", &a, &b);

    int resultc, resultt;

     resultc = a+b;

     resultt = a-b;   

    
    char ch;
    
    printf("Enter a character: ");
    
    scanf(" %c", &ch);  
    
   
   
    if (ch == 'c')
    {
        
        printf("Summation of the numbers are:%d", resultc);
        
    }
        
    else if (ch == 't') 
    {
        printf("Extraction of the numbers are:%d", resultt);
    }
            
    

    return 0;

}
