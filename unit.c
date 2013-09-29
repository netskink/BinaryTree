#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
#include "tree.h"
#include "unit.h"

/*
 * These are primative unit tests.
 */

/* This tree is created with data that
 * makes a long skinny tree to the right.
 */
tree_t * addValsToTree1(tree_t *pTree) {

	// add ten values to the tree
	int values[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int i;

	for (i=0;i<10;i++) {
		pTree = addValue(pTree, values[i]);
	}

	return (pTree);

}

/* This tree is created with data that
 * makes a long skinny tree to the left.
 */
tree_t * addValsToTree2(tree_t *pTree) {

	// add ten values to the tree
	int values[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	int i;

	for (i=0;i<10;i++) {
		pTree = addValue(pTree, values[i]);
	}

	return (pTree);

}

/* This tree is created with data that
 * makes a somewhat balanced tree.
 */
tree_t * addValsToTree3(tree_t *pTree) {

	// add ten values to the tree
	int values[] = { 5, 3, 8, 2, 4, 7, 10, 1, 6, 9  };
	int i;

	for (i=0;i<10;i++) {
		pTree = addValue(pTree, values[i]);
	}

	return (pTree);

}


