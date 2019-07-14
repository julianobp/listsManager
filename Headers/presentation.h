#ifndef PRESENTATION_H_INCLUDED
#define PRESENTATION_H_INCLUDED

#include <stdio.h>
#include <stdbool.h>

// CONSTANTS
#define CREATE 1
#define INSERT 2
#define REMOVE 3
#define COPY 4
#define REPLACE 5
#define MERGE 6
#define BREAK 7
#define SORT 8
#define SEARCH 9
#define PRINT 10
#define DELETE 11
#define DESCRIBE 12
#define EXIT 0

void menu();

#define BACK 0

#define NOMINATE 1
int createMenu();

void insertMenu();
void breakMenu();
void sortMenu();
void printMenu();

#endif // PRESENTATION_H_INCLUDED