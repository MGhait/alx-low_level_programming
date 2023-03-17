# task 0X00.c

## first proplem in flie 0-preprocessor

 Write a script that runs a C file through the preprocessor and save the result into another file.
 - The C C file name will be saved in the variable `$CFILE`
 - The output should be saved in the file `c`

**Example**
```bash

julien@ubuntu:~/c/0x00$ cat main.c 
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ ./0-preprocessor 
julien@ubuntu:~/c/0x00$ tail c
# 942 "/usr/include/stdio.h" 3 4

# 2 "main.c" 2


# 3 "main.c"
int main(void)
{
 return (0);
}
julien@ubuntu:~/c/0x00$ 

```


### Important Notes in writting the file

> we must write the doucmentation in our c file to match the betty 
"we check on worning and errors by typing betty CFileName"
the way to get betty libarary will be explaind after that

*The way to write the documentation to match the betty requirments is:*

```
After including the needed libararies
#include <stdio.h>
we start a documentation comment it starts wit '/**' at first line and keeps line empty between them started with star it will be like below

/**
 * main - Entry point
 *
 * Description: A C program that -description_of_your_program-
 *
 * Return: Always 0 (Success)
*/
```
