/**
  *print_name - name
  *@name: address of name
  *@f: address of function ths prints
  *
  *Return: void.
  */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}

