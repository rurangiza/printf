# printf
## 🔖 Implementing the printf() function
In this project, I had to implement the printf function.

<code>printf()</code> is a function that helps you display text in your terminal. It is the equivalent of <code>print()</code> in __Python__ and <code>console.log()</code> in __Javascript__.

It is an essential tool for debugging and understanding what happens in your code.

Re-building is not only an interresting problem to solve but also permits to better understand how it works and discover its less known capabilities.

## 🔖 How printf() works

You give it a string as argument and it will display the result in the terminal.

```C
// Library to access the printf function
#include <stdio.h>

int main(void)
{
    // Call printf with the string you want to print to the terminal
    printf("Hello, world!");
}
```

```shell
$ Hello, world!
```

But the fun starts when you include the content of your variables in the string you want to display.

Here is how it works:

```c
#include <stdio.h>

int main(void)
{
    // Declare a variable
    int age;

    // Assign a value to your variable
    age = 26;
    // Print text including the value of my variable
    printf("My name is Arsene and I am %d years old", age);
}
```
```shell
$ My name is Arsene and I am 26 years old
```

If you take a look, to achieve that, I added <code>%d</code> in my string and <code>age</code> (my variable) as an argument after the string of text.

<code>%d</code> is a format specifiers. 

Format specifiers are combinations of characters, starting with the <code>%</code> sign and followed by one or more characters. They allow us to insert data of any type within a text so we can display it in the terminal. 

Here are the most common ones:

| Format Specifiers | Type of Output |
| :---              | :---        |
| %c | A character |
| %s | A string or sequence of characters |
| %d or %i | A decimal integer or signed integer |
| %u | An unsigned integer |
| %x | An integer in hexadecimal format (lowercase) |
| %X | An integer in hexadecimal format (uppercase) |
| %p | A memory address in the hexadecimal format |


To take advantage of their capabilities, we simply call the printf() function and:
1. Add a string as first argument. Also works with empty strings
2. Create variables you want to display
3. Include the format specifier corresponding to the data type of your variable.
4. add  your variable name as an argument after the string argument.

```c
#include <stdio.h>

int main(void)
{
    char    *name;
    int     age;
    
    name = "Arsene";
    age = 26;

    printf("My name is %s and I am %d which is %x in hexadecimal", name, age, age);
}
```
```shell
$ My name is Arsene and I am 26 which is 1a in hexadecimal
```

You can include as many format specifiers and variables as you want. And it works because printf() is what is called a variadic function.

Fancy word to say that it can take a variable number of arguments.

In the first exemple, there was only a string as argument.

In the second exemple I added a variable then added three arguments in the previous exemple. 

And the is the main challenge in implementing a printf() like function.

## 🔖 What was challenging
### Understanding how variadic functions work

- <code>va_lsit</code>
- <code>va_start</code>
- <code>va_arg</code>
- <code>va_end</code>

### Counting the number of characters printed
### 