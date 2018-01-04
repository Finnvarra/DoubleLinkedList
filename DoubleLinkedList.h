#ifndef __DOUBLELINKEDLIST_H__
#define __DOUBLELINKEDLIST_H__
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

//struct declarations
typedef struct DoubleLinkedList DoubleLinkedList;
typedef struct node node;
typedef struct node{
    int length;
    void* data;
    char* request;
    struct node* prev;
    struct node* next;
};

typedef struct DoubleLinkedList{
    node* head;
    node* tail;
    int count;
};

//initialize funtions
void remove_tail(DoubleLinkedList* dll);
void clear_list(DoubleLinkedList* dll);
DoubleLinkedList* init();
void destroy(DoubleLinkedList* dll);
void insert(DoubleLinkedList* dll, void* n, int l, char* req);
void* find(DoubleLinkedList* dll, char* req);

#endif /* __DOUBLELINKEDLIST_H__ */
