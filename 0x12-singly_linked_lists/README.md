###0x12. C - Singly linked lists###

#####Concepts####

For this project, we expect you to look at this concept:

Data Structures -> https://intranet.alxswe.com/concepts/120

####Requirements###


####General###


Allowed editors: vi, vim, emacs
All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
All your files should end with a new line
A README.md file, at the root of the folder of the project is mandatory
Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
You are not allowed to use global variables
No more than 5 functions per file
The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
You are allowed to use _putchar
You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called lists.h
Don’t forget to push your header file
All your header files should be include guarded


###More Info###

Please use this data structure for this project:

/**
 * struct list_s - singly linked list
  * @str: string - (malloc'ed string)
   * @len: length of the string
    * @next: points to the next node
     *
      * Description: singly linked list node structure
       */
       typedef struct list_s
       {
           char *str;
               unsigned int len;
                   struct list_s *next;
                   } list_t;




####About Singly linked lists####

Singly linked lists are a fundamental data structure used in computer programming. They consist of a sequence of nodes, where each node contains an element and a pointer to the next node in the sequence. The first node is called the head, and the last node is called the tail, with the tail pointing to a null reference.

Singly linked lists are commonly used because they allow for efficient insertion and deletion of elements at any position in the list. However, accessing an element in the middle of the list can be slower than accessing an element in an array, as each node must be traversed until the desired element is found.

Singly linked lists can be used to implement other data structures, such as stacks, queues, and hash tables. They can also be used to represent a sequence of operations or events in an application.

In this Directory, you will find a simple implementation of a singly linked list in C, along with examples of how to use it. The code uses dynamic memory allocation to create and delete nodes, and includes functions to add, remove, and search for elements in the list.


###Rockjunior###
