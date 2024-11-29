




## PRINTF PROJECT
## BY JEAN-ALAIN AND BLANDINE




# _printf() in the C programming language
This project involves recreating the printf function in the C library. The printf function sends formatted output to stdout (standard output stream) by formatting the argument(s) passed and converting the argument(s) to a string. This version will be used as _printf.



# Environment
Our printf was tested on Ubuntu 22.04 Tests carried out under ElementaryOS 5.1 and VirtualBox on Ubuntu via Vagrant(1.9.1)


# Distribution of the repository
Once cloned, the repository will contain the following files:



|FILE		    |DESCRIPTION                                                    |
|:-:            |:-:
|main.h         |header file with prototypes                                     |
|function.c	    | contains functions for writing to the buffer memory            |
|get_op_func.c	| contains the array of specifiers and their associated functions|
|_print.c	    | contains the printf function                                   |


|specifier |output|
|:-:       |:-:   
|c |characters|
|s |character string|
|% |character percent|
|d or i |int in signed decimal|

## FLOWCHART

![image](https://github.com/user-attachments/assets/e5958fe2-d9a0-494f-9458-47601bd2f5fc)

## Exemple

#### main fil|e
```c
#include  "main.h"

int  main(void)
{
    _printf("Hello, World!");

return (0);

}
```

#### output

```sh
Hello,  World
```

Or you can use this commandline directly in your terminal:

```Bash
https://github.com/JaRenie-spec/holbertonschool-printf/blob/main/_printf.c
```

## How to start

- To compile the code, and execute it, enter this command line :

```Bash
gcc  -Wall  -Werror  -Wextra  -pedantic  *.c
```

## How to try it
This is a main you can use to tested out the _ptrintf function

```C
#include  <limits.h>
#include  <stdio.h>
#include  "main.h"
/**
* main - Entry point
*
* Return: Always 0
*/
int  main(void)
{
    int len;
    int len2;
    unsigned  int ui;
    void  *addr;

    len =  _printf("Let's try to printf a simple sentence.\n");
    len2 =  printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned  int)INT_MAX +  1024;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len =  _printf("Percent:[%%]\n");
    len2 =  printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");

    return (0);
}
```
compile and run the executable

```Bash
user@ubuntu:~/holbertonschool-printf/printf$  gcc  -Wall  -Wextra  -Werror  -pedantic  -Wno-format  *.c
user@ubuntu:~/holbertonschool-printf/printf$  ./printf
Let's try to printf a simple sentence.
Let's  try  to  printf  a  simple  sentence.
Length:[39,  39]
Length:[39,  39]
Negative:[-762534]
Negative:[-762534]
Character:[H]
Character:[H]
String:[I  am  a  string  !]
String:[I  am  a  string  !]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
user@ubuntu:~/holbertonschool-printf/printf$
```

You can open a man page and get more information about it.

```Bash
user@ubuntu:~/holbertonschool-printf/printf$  **man  ./man_3_printf**
```

## Authors

*  **Jean-Alain RENIE**  _alias_ https://github.com/JaRenie-spec
*  **Blandine SOILEUX**  _alias_ https://github.com/sira-djam
