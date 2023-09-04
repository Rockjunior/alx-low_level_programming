###0x0B. C - malloc, free###

malloc (Memory Allocation):

malloc stands or "memory allocation" and is a function in C used to dynamically allocate memory on the heap.
It takes one argument, which is the number of bytes to allocate, and returns a pointer to the first byte of the allocated memory block.
The allocated memory is uninitialized, and it should be explicitly initialized before use.
If malloc fails to allocate memory (e.g., due to insufficient memory available), it returns a special value called NULL.

free (Memory Deallocation):

free is a function in C used to deallocate (release) memory that was previously allocated using malloc or related functions.
It takes a single argument, which is a pointer to the memory block to be deallocated.
After calling free, the memory is no longer valid for use, and the pointer should not be dereferenced.
Failure to free allocated memory can lead to memory leaks, where memory is allocated but never released, causing the program to consume more and more memory over time.
Usage Tips:

Always check the return value of malloc to ensure that memory allocation was successful before using the allocated memory.
After using allocated memory, remember to call free to release it to prevent memory leaks.
Do not use or dereference a pointer to memory that has been freed; doing so can result in undefined behavior.
It's a good practice to set the pointer to NULL after freeing the memory to avoid accidentally using it again.
Use dynamic memory allocation (e.g., malloc) when the size of data structures is not known at compile time or when you need to manage memory dynamically during program execution.