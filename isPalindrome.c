/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#define MAXLEN 10
bool isPalindrome(char* s){
    int n = strlen(s);
    if(s[n - 1] == '\n')
        n--;
    for(int i = 0; i < n/2; i++)
    {
        if(s[i] != s[n-i-1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    printf("Hello World");
    char input[MAXLEN];
    printf("Enter string: ");
    fgets(input, MAXLEN, stdin);
    puts(input);
    if(isPalindrome(input))
    {
        printf("is palindrome");
    }
    else
    {
        printf("is not palindrome");
    }
    
    return 0;
}