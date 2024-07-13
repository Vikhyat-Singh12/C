/*
Input:
<h1> This is a Heading </h1>

Output:
This is a Heading


*/


/*
#include <stdio.h>
#include<string.h>
char parser(char str[])
{   int a;
    a=strlen(str);
    for (int i = 5; i < a-5; i++)
    printf("%c",str[i]);}
int main()
{
    char str[] = "<h1> This is the Heading <h1>";
    printf("The parcer is: ");parser(str);    
    return 0;
}

*/

#include<stdio.h>
#include<string.h>

void parser(char* string){
    int in = 0;          //Variable to track wheather we are inside a tag or not
    int index = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == '<')
        {
            in = 1;
            continue;
        }
        else if (string[i] == '>')
        {
            in = 0;
            continue;
        }
        if (in == 0)
        {
            string[index] = string[i];
            index ++;
        }
        
        
        
    }
    string[index] = '\0';

    // Removing the  traling spaces from the beggning
    while (string[0] == ' ')
    {
        // Shift the string to the left 
        for (int i = 0; i < strlen(string); i++)
        {
            string[i] = string[i+1];
        }
        
    }
    // Removing the  traling spaces from the end
    while (string[strlen(string) - 1] == ' ')
    {
        string[strlen(string)-1] = '\0';
            
    }
    
    

    
}
int main(){
    char string[] = "<h1>              This is a Heading           </h1>";
    parser(string);
    printf("The parser string is: ~~%s~~",string);
    
    return 0;
}


