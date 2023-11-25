typedef struct		s_list
{
	struct s_list	*next;
	void		*data;
}			t_list;

int	ft_list_size(t_list *begin_list)
{
	int	len;

	len = 0;
	if (begin_list)
		len = 1;
	while (begin_list->next)
	{
		len++;
		begin_list = begin_list->next;
	}
	return (len);
}
