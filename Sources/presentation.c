#include "presentation.h"
#include "list.h"

void menu(){
    int answer, result;
    
    while (true){
        printf("----------------------------------------------------|\n");
        printf("PRINCIPAL MENU                                      |\n");
        printf("----------------------------------------------------|\n");
        printf("%d - Create a empty list                             |\n", CREATE);
        printf("%d - Insert a new node                               |\n", INSERT);
        printf("%d - Remove a node                                   |\n", REMOVE);
        printf("%d - Copy a list to a new list                       |\n", COPY);
        printf("%d - Replace the contents of the list B with list A  |\n", REPLACE);
        printf("%d - Merge two lists                                 |\n", MERGE);
        printf("%d - Break a list in two parts                       |\n", BREAK);
        printf("%d - Sort a list                                     |\n", SORT);
        printf("%d - Search a key                                    |\n", SEARCH);
        printf("%d - Print a list                                   |\n", PRINT);
        printf("%d - Delete a list                                  |\n", DELETE);
        printf("%d - Describe a list                                |\n", DESCRIBE);
        printf("\n%d - Exit\n", EXIT);
        
        scanf("%d", &answer);
        
        if (answer == EXIT)
            return;
        else{
            switch (answer){
                case CREATE:
                    result = createMenu(); 
                    break;
                
                default:
                    printf("\nERROR:\nInvalid Answer! Try again.\n\n");
                    break;
            }
        }
    }
}

int createMenu(){
    int answer, result;
    char title[TITLE_SIZE];

    printf("Enter the title of the list\n");
    scanf("%s", title); // consertar o problema de ler espacos em branco
    printf("%s\n",title);
    result = create(title);
    return result;
}