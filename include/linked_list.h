#ifndef LINKED_LIST_H
#define LINKED_LIST_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list 
{
	int content;
	struct s_list *next;
	struct s_list *prev;
} t_list;

t_list	*ft_lstnew(int content);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(int));
void	ft_lstclear(t_list **lst, void (*del)(int));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void	push(t_list **lst, t_list *new);
t_list	*pop(t_list **lst);
void	ft_sa(t_list **lst);
void	ft_sb(t_list **lst);
void	ft_ss(t_list **lsta, t_list **lstb);
void	ft_pa(t_list **lsta, t_list **lstb);
void	ft_pb(t_list **lsta, t_list **lstb);
void	ft_free(t_list **lst);
void	ft_ra(t_list **lst);
#endif