BinaryTree
==========

This is sample code for doing a binary search tree in C.

It is part of my google study effort.  Its been a while since I've done this. From memory I was doing a Binary Tree 
where the nodes to the left were less than or equal to the current node.  Turns out from reading this is a special type
of tree called a binary search tree.

Anyway, the code has a raw dump procedure which gives clues to where nodes are stored.  In has an insert function, search,
and inorder traversal which returns values in sorted order.  The difference in the dump and the in order walk sort code is 
simply where the values are printed out.

One thing of note in this code is the use of functions which return pointers so that the parameters do not require double 
pointers so that they can be modified.  ie. foo* Fun(foo *) instead of Fun(foo **).
