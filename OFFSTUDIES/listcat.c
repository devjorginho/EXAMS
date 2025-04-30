//    ____                   __                 _       __        
//   / __ \___ _   __       / /___  _________ _(_)___  / /_  ____ 
//  / / / / _ \ | / /  __  / / __ \/ ___/ __ `/ / __ \/ __ \/ __ \
// / /_/ /  __/ |/ /  / /_/ / /_/ / /  / /_/ / / / / / / / / /_/ /
///_____/\___/|___/   \____/\____/_/   \__, /_/_/ /_/_/ /_/\____/ 
//                                    /____/                     
//	devjorginho 😎 | GitHub: https://github.com/devjorginho

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef	struct c_list {
	void *content;
	void *next;
}	t_list;

void	printlist(t_list *head)
{
	int	i;

	i = 0;
	while(head)
	{
		printf("Node: %d, Content: %s\n", i, (char *)head->content);
		head = head->next;
		i++;
	}

}

void	*listcat(void *content, char *s1, char *s2)
{
	char *result;
	char *ptr;
	int	totalbytes;
	t_list	*head;
	t_list	*node1;
	t_list	*node2;

	totalbytes = strlen(s1) + strlen(s2);
	result = malloc((totalbytes + 1) * sizeof(char));
	ptr = result;
	while(*s1)
		*ptr++ = *s1++;
	while(*s2)
		*ptr++ = *s2++;
	*ptr = '\0';
	head = malloc(sizeof(t_list));
	node1 = malloc(sizeof(t_list));
	node2 = malloc(sizeof(t_list));
	if(!head || !node1 || !node2)
		return(NULL);

	head->next = node1;
	node1->next = node2;
	node2->next = NULL;

	head->content = result;
	node1->content = s1;
	node2->content = s2;

	return(head);
}
int main()
{
	char *s1 = "Hello, ";
	char *s2 = "Jorginho !";
	t_list	*list;
	list = listcat(NULL, s1, s2);
	if(!list)
		return(1);
	printlist(list);

	free(list->content);
	t_list *tmp1 = list->next;
	t_list *tmp2 = tmp1->next;
	free(tmp2);
	free(tmp1);
	free(list);

	return (0);
}
