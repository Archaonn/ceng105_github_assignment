#include <stdio.h>

int main()
{

    printf("Hello");

    int a,b;

    printf("Enter the numbers: ");
    scanf("%d %d", &a, &b);

    int result;

    result = a+b;

    printf("Summation of the numbers is %d", result);
    
    char ch;
    
    printf("enter a character: ");
    scanf("%c", &ch);

    return 0;

}
