###0x17. C - Doubly linked lists###

A doubly linked list is a data structure that consists of a sequence of elements, where each element points to both its previous and next element in the sequence. In contrast to a singly linked list, where each element only has a reference to the next element, a doubly linked list allows for easier traversal in both directions.

Here are some key features and concepts related to doubly linked lists:

1. **Node Structure:**
   - Each node in a doubly linked list contains two pointers/references: one pointing to the previous node and another pointing to the next node.
   - The first node in the list is called the head, and the last node is called the tail.
   - The previous pointer of the head and the next pointer of the tail are usually set to NULL to indicate the boundaries of the list.

2. **Advantages:**
   - **Bidirectional Traversal:** The main advantage of a doubly linked list is that it allows for easy traversal in both directions. This is useful in scenarios where you need to navigate the list in reverse.

   - **Insertion and Deletion:** Insertion and deletion of nodes at both ends and in the middle of the list can be more efficient compared to a singly linked list because you have direct access to the previous node.

3. **Operations:**
   - **Insertion:**
     - Inserting a node in a doubly linked list involves updating the next and previous pointers of the surrounding nodes.

   - **Deletion:**
     - Deleting a node also requires updating the next and previous pointers of the surrounding nodes to maintain the integrity of the list.

   - **Traversal:**
     - Traversal can be done in both directions, starting from the head or the tail.

4. **Implementation:**
   - Here's a simple example of a doubly linked list node in C++:

     ```cpp
     struct Node {
         int data;
         Node* next;
         Node* prev;
     };
     ```

5. **Drawbacks:**
   - **Space Overhead:** Doubly linked lists require more memory compared to singly linked lists due to the extra storage needed for the previous pointers.

   - **Complexity:** The additional pointers make the implementation and maintenance of doubly linked lists slightly more complex than singly linked lists.

Doubly linked lists are used in various scenarios, such as when you need efficient insertion and deletion operations in both directions or when bidirectional traversal is essential. However, in many cases, the extra complexity and memory overhead may not be necessary, and a singly linked list might be sufficient. The choice between the two depends on the specific requirements of the task at hand.
