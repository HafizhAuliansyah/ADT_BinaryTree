#ifndef btree_h
#define btree_h
#include <stdio.h>
#include <stdlib.h>

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

/* Alokasi Node */
/* Mengembalikan address node baru yang sudah ter-Alokasi */
nAddress bCreateNode(infotype x);

/* Insert Node */
/* Menambahkan node baru sesuai parent yang dituju */
void bInsert(bTree *root, nAddress parent, infotype x);

/* Seach Node */
/* Mengembalikan address node yang dicari */
nAddress bSearch(bTree root, infotype src);

/* Upgrade Node */
/* Upgrade Parent dari node tertentu */
void bUpgrade(bTree *root);

/* Delete Node */
/* Menghapus node tertentu */
void bDelete(bTree *tree, nAddress *nodeDel);

/* Depth Tree */
/* Mengembalikan Depth dari tree */
int bDepth(nAddress root);

/* ---------------- TRAVERSAL Tree ---------------- */
void bPost(nAddress root); // Postorder traversing
void bPre(nAddress root); // Preorder traversing
void bIn(nAddress root); // Inorder traversing
void bLevelOrder(nAddress root,int curLevel, int desLevel);

/* PRINT TREE */
/* Menampilkan isi tree */
void bPrint(nAddress, char tab[]);

#endif
