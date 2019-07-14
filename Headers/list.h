#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

#define TITLE_SIZE 50

typedef struct content{
    // conteúdo dos nós
    
    int key;
}Content;

typedef struct node{
    struct node* prev;
    struct node* next;
}Node;

typedef struct list{
    char title[TITLE_SIZE];
    int size;
    Node* head;
    Node* tail;
}List;

// functions
List create(char* title);
#endif // LIST_H_INCLUDED