/**
 * @file    pa1.h
 * @author  Lacey Hunt (lhunt2@students.nic.edu)
 * @brief   token parsing program includes and definitions
 * @date    2023-09-11
 * 
 */

#ifndef PA1_H
#define PA1_H

#define MAXTOKEN 256

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <string.h>

int getTokens(char *s, char ***args);

#endif