//#include "list.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};

t_list *sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *head = lst;
    int buff;

    while (lst->next)
    {
        if (!(cmp(lst->data, lst->next->data)))
        {
            buff = lst->data;
            lst->data = lst->next->data;
            lst->next->data = buff;
            lst = head;
        }
        else
            lst = lst->next;
    }
    return (head);
}

/*
int ascending(int a, int b)
{
	return (a <= b);
}

void print_list(t_list *lst)
{
    while (lst != NULL)
    {
        printf("%d ", lst->data);
        lst = lst->next;
    }
    printf("\n");
}

// test


int main()
{
    t_list *head = (t_list*)malloc(sizeof(t_list));
    head->data = 5;
    head->next = (t_list*)malloc(sizeof(t_list));
    head->next->data = 3;
    head->next->next = (t_list*)malloc(sizeof(t_list));
    head->next->next->data = 8;
    head->next->next->next = (t_list*)malloc(sizeof(t_list));
    head->next->next->next->data = 1;
    head->next->next->next->next = NULL;

    printf("Original list: ");
    print_list(head);

    t_list *sorted = sort_list(head, ascending);

    printf("Sorted list: ");
    print_list(sorted);

    return 0;
}*/