#include "BinaryTree.h"

void bCreate(bTree *tree){
    *tree.root = NULL;
}
nAddress bCreateNode(infotype x){
    nAddress newNode;
    newNode = (nAddress) malloc(sizeof(TreeNode));
    if(newNode != NULL){
    	newNode->info = x;
    	newNode->left = NULL;
    	newNode->right = NULL;
	}
	return newNode
}
void bInsert(bTree *root, nAddress parent, infotype x){
    return;
}
nAddress bSearch(bTree root, infotype src){
    return;
}
void bUpgrade(bTree *root){
    return;
}
void bDelete(bTree *tree, nAddress *nodeDel){
    return;
}
int bDepth(nAddress root){
    return;
}
void bPost(nAddress root){
    return;
}
void bPre(nAddress root){
    return;
}
void bIn(nAddress root){
    return;
}
void bLevelOrder(nAddress root,int curLevel, int desLevel){
    return;
}
void bPrint(nAddress, char tab[]){
    return;
}
