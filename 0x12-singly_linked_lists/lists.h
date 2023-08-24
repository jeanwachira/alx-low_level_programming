#ifndef LISTS_H
#define LISTS_H

#include <stddef.h> // Include this for size_t definition

// Define the struct for the singly linked list node
typedef struct ListNode {
    char *str;
    unsigned int len;
    struct ListNode *next;
} ListNode;

// Define the typedef for the list_t type
typedef ListNode list_t;

// Function prototypes
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
