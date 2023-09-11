/**
 * @file    main.c
 * @author  Lacey Hunt (lhunt2@students.nic.edu)
 * @brief   token parsing assignment main fxn
 * @date    2023-09-11
 * 
 */

#include "pa1.h"
int main()  //int argc, char *argv[]
{
    char **arrOfTokens=malloc(MAXTOKEN), *input;
    char buffer[MAXTOKEN];

    printf("%s\n","Please, enter the string: ");
    
    // get user string and get rid of trailing \n
    input=fgets(buffer,MAXTOKEN,stdin);
    if (input[strlen(input) - 1] == '\n')
    {
        input[strlen(input) - 1] = '\0';
    }

    // create tokens
    int numTokens = getTokens(input, &arrOfTokens);

    // display tokens
    printf("\nTotal Number of Tokens = %i\n",numTokens);
    for(int i=0;i<=numTokens;i++)
    {
        printf("Token %i: %s\n",i,(arrOfTokens)[i]);
    }
    return 0;
}