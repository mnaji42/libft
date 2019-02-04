#include "libft.h"
#include <stdlib.h>
#include <ctype.h>

void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

void	ft_print_result2(int n)
{
	char c;

	if (n >= 10)
		ft_print_result2(n / 10);
	c = n % 10 + '0';
	write (1, &c, 1);
}

void	ft_print(t_list *li1)
{
	if (li1 == NULL)
		ft_putstr("Rien a afficher, la liste est vide\n");
	else
	{
		while((*li1).next != NULL)
		{
			ft_putchar('[');
			ft_putnbr(*(int*)((*li1).content));
			ft_putstr("] [");
			ft_print_result2(li1->content_size);
			ft_putstr("]\n");
			li1 = (*li1).next;
		}
		ft_putchar('[');
		ft_putnbr(*(int*)((*li1).content));
		ft_putstr("] [");
		ft_print_result2(li1->content_size);
		ft_putstr("]\n");
		li1 = (*li1).next;
	}
}

int		main(void)
{
//	t_list	*li;	
	t_list	*li1;
	t_list	*li2;
	t_list	*li3;
	t_list	*li4;
	t_list	*li5;
	t_list	*li6;
	t_list	*li7;
	t_list	*li8;
	t_list	*li9;
	t_list	*temp;
	int		i;
	char	*i1;
	char	i2;
	int		i3;
	int		i4;
	char	i5;
	char	*i6;
	char	*i7;
	int		i8;
	char	i9;

	i1 = "hello les copain";
	i2 = 'e';
	i3 = 42;
	i4 = 8;
	i5 = 'x';
	i6 = "Mehdi";
	i7 = "COUCOU";
	i8 = 27;
	i9 = 'z';
	li1 = ft_lstnew(&i1, sizeof(i1));
	li2 = ft_lstnew(&i2, sizeof(i2));
	li3 = ft_lstnew(&i3, sizeof(i3));
	li4 = ft_lstnew(&i4, sizeof(i4));
	li5 = ft_lstnew(&i5, sizeof(i5));
	li6 = ft_lstnew(&i6, sizeof(i6));
	li7 = ft_lstnew(&i7, sizeof(i7));
	li8 = ft_lstnew(&i8, sizeof(i8));
	li9 = ft_lstnew(&i9, sizeof(i9));
//	ft_lstadd(&li, li1);
	ft_lstadd(&li1, li2);
	ft_lstadd(&li1, li3);
	ft_lstadd(&li1, li4);
	ft_lstadd(&li1, li5);
	ft_lstadd(&li1, li6);
	ft_lstadd(&li1, li7);
	ft_lstadd(&li1, li8);
	ft_lstadd(&li1, li9);
	if (li1 == NULL)
		ft_putstr("la liste est vide");
	ft_putnligne(1);
	ft_print(li1);	
	ft_putseparation();
	temp = li1;
	i = ft_lstlen(temp);
	while (i > 0)
	{
		ft_printlink(temp);
		ft_putstr("taille = ");
		ft_putnbr((*temp).content_size);
		ft_putnligne(1);
		ft_putnbr(sizeof((*temp).content[0]));
		ft_putnligne(1);
		i--;
		temp = (*temp).next;
	}
	
	ft_putseparation();

	ft_printlst(li1);
	ft_putnligne(1);
	li1 = ft_lstdel_nlast(li1, 2);
	ft_printlst(li1);
	ft_putnligne(1);
	ft_printlst(li1);
	ft_putnligne(1);
	li1 = ft_lstdel_all(li1);
	ft_printlst(li1);
	ft_putseparation();
	ft_putnbr(sizeof(int));
	ft_putnligne(1);
	ft_putnbr(sizeof(char));
	ft_putnligne(1);
	ft_putnbr(sizeof(char*));
	ft_putnligne(1);
	ft_putnbr(sizeof(int*));
	ft_putnligne(1);
	ft_putnbr(sizeof(long int));
	ft_putnligne(1);

	ft_putseparation();
	t_list	*ls;
	t_list	*lss;
	int		tab[3] = {1, 21, 3};
	char	*str = "bonjour";
	char	*tempstr;
	int	*temptab;

	ls = ft_lstnew(&tab, sizeof(tab));
	lss = ft_lstnew(&str, sizeof(str));
	tempstr = ((*lss).content);
	temptab = ((*ls).content);

	ft_putnbr(tab[0]);
	ft_putstr("  ");
	ft_putchar(str[0]);
	ft_putnligne(1);
//	ft_putchar(tempstr[2]);

	ft_putseparation();

	ft_putnbr(sizeof(tab));
	ft_putstr("  ");
	ft_putnbr(sizeof(str));
	ft_putnligne(1);
	ft_putnbr((*ls).content_size);
	ft_putstr("  ");
	ft_putnbr((*lss).content_size);
	ft_putnligne(1);
	ft_putnbr(sizeof((*ls).content));
	ft_putstr("  ");
	ft_putnbr(sizeof((*lss).content));
	ft_putnligne(1);
	ft_putnbr(sizeof(tab[0]));
	ft_putstr("  ");
	ft_putnbr(sizeof(str[0]));
	ft_putnligne(1);
	ls = ft_lstdel_all(ls);
	ls = ft_lstdel_all(lss);
}
