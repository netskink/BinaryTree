#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
#include "tree.h"
#include "unit.h"



int main(int argc, char *argv[]) {

	int iRC;
	tree_t *pTree = NULL;
	tree_t *pRoot = NULL;
	int i;

	iRC=EXIT_SUCCESS;

	if (argc != 1) {
		fprintf(stderr, "Usage: %s\n", argv[0]);
		iRC=EXIT_FAILURE;
		exit(iRC);
	}


	//pTree = addValsToTree1(pTree);
	//pTree = addValsToTree2(pTree);
	pTree = addValsToTree3(pTree);
	//walkTree(pTree);

	pRoot = pTree; /* the add vals to Tree returns the root, but search does not. */
	// This should find all these nodes.
	for (i=1;i<=10;i++) {
		pTree = searchTree(pRoot,i);
		if (NULL != pTree) {
			printf("found %d\n",pTree->iValue);
		}
	}	
	// This should not find any nodes.
	for (i=11;i<20;i++) {
		pTree = searchTree(pRoot,i);
		if (NULL != pTree) {
			printf("found %d\n",pTree->iValue);
		}
	}	


	walkTreeSearch(pRoot);
	
	exit(iRC);

}



