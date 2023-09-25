###0x13. C - More singly linked lists###

###Requirements###

###General###

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
 * struct listint_s - singly linked list
  * @n: integer
   * @next: points to the next node
    *
     * Description: singly linked list node structure
      * 
       */
       typedef struct listint_s
       {
           int n;
               struct listint_s *next;
               } listint_t;


###About More singly linked lists###

A singly linked list is a fundamental data structure in computer science and programming. It is a linear data structure that consists of a sequence of elements, called nodes, where each node points to the next node in the sequence. The last node in the list typically points to a special value called "null" or "None" to signify the end of the list. Singly linked lists are used to store and manage collections of data in a dynamic and efficient manner.

Here are some key concepts and components of singly linked lists in C:

#Node Structure: 
In C, you typically define a structure to represent each node in the singly linked list. The structure contains two components:

Data: This is the actual data or value you want to store in the list.
Next Pointer: This is a pointer to the next node in the list.
Here's an example of a node structure in C:


struct Node {
    int data;          // Data stored in the node
        struct Node* next; // Pointer to the next node
        };

#Head Pointer: 
A singly linked list is usually represented by a reference to the first node in the list. This reference is often called the "head pointer." It points to the beginning of the list and is used to traverse the list.

#Operations:

        Insertion: You can insert a new node at the beginning (prepend) or end (append) of the list, or at a specific position in the list.
        Deletion: You can delete a node from the list by updating the next pointer of the previous node to skip the node you want to delete.
        Traversal: You can traverse the list from the head to the end, visiting each node one by one.
        Search: You can search for a specific value in the list by traversing it and comparing values.
        Modification: You can update the data in a node if needed.
#Dynamic Memory Allocation: 
In C, you typically use dynamic memory allocation functions like malloc to allocate memory for each new node. It's essential to free the memory (using free) when you're done with a node to prevent memory leaks.

#Termination Condition: 
You use the next pointer of the last node to indicate the end of the list. This pointer is set to NULL or a similar null value to signify the list's end.

#Advantages:

        Singly linked lists have a dynamic size and can grow or shrink as needed.
        Insertions and deletions at the beginning of the list are efficient because you only need to update a few pointers.
        Memory is allocated on-demand, which can be efficient in terms of memory usage.
        
#Drawbacks:

        Random access is inefficient; to access an element at a particular position, you must traverse the list from the beginning.
        Extra memory is required for storing the next pointers, which can increase memory overhead.
       

Singly linked lists are often used in various programming tasks, including implementing other data structures like stacks and queues, managing dynamic data, and solving specific problems where their characteristics are advantageous. They provide a simple and efficient way to organize and manipulate collections of data.

#<RoMAn/>
