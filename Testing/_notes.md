# Errors
## Keep track of all errors and how I solved them

### printf needs to return total length of printed characters, how can I do that?
Pointers.
By declaring a <code>int counter</code> in my printf() function I could pass its address through all the sub functions and dereference it to increment every time a new character was printed.


### %p only shows half of the memory address
I was using int as data type. But memory addresses needs more space, so I changed it to unsigned long and now the full adressess is printed out.

### use of undeclared identifier 'ft_printf'
In my header file, I didn't have the printf function. So it was declared after all the other functions..
So I simply had to add it to the header file.

```C
int		ft_printf() // added this
size_t	ft_strlen(const char *s);
int		ft_putchar(char c);
int		ft_putstr(char *str);
...
```

### %d and %i crashed in tests where number is negative
The problem was that in those cases, the minus sign was printed and my internal counter did not count it. So I added <code>minus_sign</code> variable in my <code>putnbr</code>function that would increment when then number was negative 
```C
int minus_sign;
...
minus_sign = 0;
if (nbr < 0)
{
	minus_sign++; // added this
	ft_putchar('-');
	nbr = -nbr;
	ft_putnbr(nbr);
}
```