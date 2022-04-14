#ifndef btree_h
#define btree_h

/*
File		: BinaryTree.h
Deskripsi	: Spesifikasi program ADT Binary Tree Dinamis
Author		: M Hafizh Auliansyah & Salman Alfarisi
Created		: 14-1-2022
*/

// Struktur Data Tree
typedef int infotype;
typedef struct TreeNode *nAddress;

typedef struct TreeNode{
	infotype info;
	nAddress left;
	nAddress right;
};

struct bTree{
	nAddress root;
};

/* Constructor */
/* Inisialisasi root tree menjadi NULL */
void bCreate(bTree *tree);

nAddress bCreateNode(infotype x);

void bInsert(bTree *root, nAddress parent, infotype x);

nAddress bSearch(bTree root, infotype src);

void bUpgrade(bTree *root);

void bDelete(bTree *tree, nAddress *nodeDel);

int bDepth(nAddress root);

void bPrint(nAddress, char tab[]);

#endif
