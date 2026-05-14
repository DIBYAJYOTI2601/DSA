# Linked List 
## What is Linked list 
-> A Linked List is a linear data structure, but unlike arrays, its elements are not stored in contiguous memory locations. Instead, elements can be scattered anywhere in the computer's memory.

To keep them organized, each element (called a Node) contains two things:
Data: The actual value you want to store (e.g., an integer, a string, or an object).
A Pointer (Next): A memory address that "points" to the exact location of the next Node in the sequence.

Visually, it looks like a chain:
[Head] -> [Data | Pointer] -> [Data | Pointer] -> [Data | Pointer] -> NULL

Head: A pointer that keeps track of the very first node. If you lose the head, you lose the whole list!

NULL (or nullptr in C++): The pointer of the very last node points to nothing, signifying the end of the list.

Why use them?
Dynamic Size: You can grow or shrink the list at runtime without reallocating massive blocks of memory.
Easy Insertions/Deletions: If you want to insert a node in the middle, you don't have to shift all the following elements (like you do in an array). You just update a couple of pointers.