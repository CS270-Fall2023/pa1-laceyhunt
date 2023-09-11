/**
 * @file    pa1.c
 * @author  Lacey Hunt (lhunt2@students.nic.edu)
 * @brief   Parsing a user-entered string into tokens
 * @date    2023-09-06
 * 
 */
#include "pa1.h"
/**
 * @brief Get the Tokens object
 * 
 * This function should accept a (C-type) string and a pointer to a pointer to `char` 
 *          (or, if you prefer, a pointer to an array of pointers to `char`) 
 *          (i.e., a pointer to the same type as `argv` in a C program), 
 *      and should point `args` to an array with each element being a pointer pointing 
 *      to the separate tokens extracted from the string, and it should return a number of 
 *      tokens. If some problem occurred during the operation of the function, the value 
 *      returned should be `-1`. 
 * 
 * @param s         input
 * @param args      ptr to array of tokens
 * @return int      total num of tokens
 */
int getTokens(char *s, char ***args)
{
    int start=0;
    int length=strlen(s)+1;
    int numTokens=0;

    // for whole string
    for(int end=0; end<length; end++)
    {
        if(isspace(s[end])||s[end]=='\0') // came across space separating tokens or end of input
        {
            // get rid of leading spaces
            while(start<length && isspace(s[start]))  
            {
                start++;
            }
            if(start>=end) continue; 
            
            // dynamically allocate memory for token
            (*args)[numTokens]=malloc((end-start)+1);

            // copy token into array of tokens
            strncpy((*args)[numTokens], &s[start], end-start);
            ((*args)[numTokens])[end-start]='\0';
            
            // increment and ready for next token
            numTokens++;
            (*args)[numTokens]=NULL;
            start=end;
        }
    }

    return numTokens;
}
