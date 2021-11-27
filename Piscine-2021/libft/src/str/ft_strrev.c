char	*ft_strrev(char *str)
{
	int	start;
	int	end;
	char	tmp;

	start = 0;
	end = 0;
	while (str[end])
		end++;
	end -= 1;
	while (start < end)
	{
		tmp = str[start];
		str[start++] = str[end];
		str[end--] = tmp;
	}
	return (str);
}