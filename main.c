
static unsigned short my_strlen(char const *str)
{
	int i = 0;
	int length= 0;
	while (str[i] != '\0') {
		i += 1;
	}
	length = i;
	return lenght;

}

int main(int ac,char **av)
{
	char str[] = "hello";
	unsigned short len = my_strlen(str);
	printf("%i\n",len);
}
