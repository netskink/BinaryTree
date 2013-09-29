struct tree {
	struct tree *pLeft;
	struct tree *pRight;
	int iValue;
};
typedef struct tree tree_t;


tree_t * addValue(tree_t *pTree, int value);

void walkTree(tree_t *pTree);

tree_t * searchTree(tree_t *pTree, int iValue);

void walkTreeSearch(tree_t *pTree);
