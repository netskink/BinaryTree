#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
#include "tree.h"


/* This tree is a simple binary search tree. You insert values into it
 * and it does not autobalance.  The insert order will 
 * determine the shape of the tree.
 *
 *
 * BST use convention that when given a value to 
 * store in the tree, its put it in the left 
 * branch when it is less than or equal to the node value.
 */


/* given a node it will insert a value into the tree
 * such that it maintains BST form.  It is assumed
 * the called gives it the root node.
 */
tree_t * addValue(tree_t *pTree, int value) {

	tree_t *pRoot = pTree;


	if (NULL == pTree) {
		pTree = malloc(sizeof(tree_t));
		pTree->iValue = value;
		pTree->pLeft = NULL;
		pTree->pRight = NULL;
		return (pTree);
	}

	if (value <= pTree->iValue ) {
		pTree->pLeft = addValue(pTree->pLeft,value);
	} else {
		pTree->pRight = addValue(pTree->pRight,value);
	}

	return (pRoot);
}

/* this simply walks the tree from a node
 * and prints out the values with some text about which 
 * branch it is taking.
 */
void walkTree(tree_t *pTree) {

	if (NULL == pTree) {
		return ;
	}

	printf("Node Value: %d\n", pTree->iValue);

	/* These if checks for null are not needed
     * walk the tree, but its handy for printing out
     * left and walk for only non leaf nodes.
     */
	if (NULL != pTree->pLeft) {
		printf("\twalk left\n");
		walkTree(pTree->pLeft);
	}

	if (NULL != pTree->pRight) {
		printf("\twalk right\n");
		walkTree(pTree->pRight);
	}

}
/* This is considered an in order traversal
 * but where you print node values is different.
 * Consquently, it generates a sorted list.
 */
void walkTreeSearch(tree_t *pTree) {

	if (NULL == pTree) {
		return ;
	}


	/* These if checks for null are not needed
     * walk the tree, but its handy for printing out
     * left and walk for only non leaf nodes.
     */
	walkTreeSearch(pTree->pLeft);

	printf("Node Value: %d\n", pTree->iValue);

	walkTreeSearch(pTree->pRight);

}

/*
 * This code searches a tree for a node with a given value.
 * It returns NULL if it is not found.
 * It retuns the node if it is found.
 */
tree_t * searchTree(tree_t *pTree, int iValue) {

	if (NULL == pTree) {
		return (NULL);
	}

	if (pTree->iValue == iValue) {
		return (pTree);
	}

	if (iValue < pTree->iValue) {
		pTree = searchTree(pTree->pLeft, iValue);
	} else {
		pTree = searchTree(pTree->pRight, iValue);
	}

	return(pTree);

}




