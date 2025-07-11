//Assignment name  : sort_list
//Expected files   : sort_list.c
//Allowed functions:
//--------------------------------------------------------------------------------

//Write the following functions:

//t_list	*sort_list(t_list* lst, int (*cmp)(int, int));

//This function must sort the list given as a parameter, using the function
//pointer cmp to select the order to apply, and returns a pointer to the
//first element of the sorted list.

//Duplications must remain.

//Inputs will always be consistent.

//You must use the type t_list described in the file list.h
//that is provided to you. You must include that file
//(#include "list.h"), but you must not turn it in. We will use our own
//to compile your assignment.

//Functions passed as cmp will always return a value different from
//0 if a and b are in the right order, 0 otherwise.

//For example, the following function used as cmp will sort the list
//in ascending order:

int ascending(int a, int b)
{
	return (a <= b);
}

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	int		swap;
	t_list	*tmp;

	tmp = lst;
	while (lst->next != 0)
	{
		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}
int main()
{
    t_list *node1 = malloc(sizeof(t_list));
    t_list *node2 = malloc(sizeof(t_list));
    t_list *node3 = malloc(sizeof(t_list));
    t_list *node4 = malloc(sizeof(t_list));
    t_list *node5 = malloc(sizeof(t_list));
    t_list *head;

    head = node1;
    node1->next = node2;
    node2->next = node3; 
    node3->next = node4;
    node4->next = node5;
    node5->next = NULL;

    node1->data = 8;
    node2->data = 1;
    node3->data = 3; 
    node4->data = 0;
    node5->data = 2;

    head = sort_list(head, ascending);

    t_list *tmp = head;
    while(tmp)
    {
        printf("%d", tmp->data);
        tmp = tmp->next;
    }
    tmp = head;
    while(tmp)
    {
        t_list *next = tmp->next;
        free(tmp);
        tmp = next;
    }

    return 0;
}
