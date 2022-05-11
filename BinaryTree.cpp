#include "BinaryTree.h"

void bCreate(bTree *tree){
    tree->root = NULL;
}
nAddress bCreateNode(infotype x){
    nAddress newNode;
    newNode = (nAddress) malloc(sizeof(TreeNode));
    if(newNode != NULL){
    	newNode->info = x;
    	newNode->left = NULL;
    	newNode->right = NULL;
	}
	return newNode;
}
bool isTreeEmpty(bTree tree){
	return (tree.root == NULL);
}
// Start Hafizh
void bInsert(bTree *root, nAddress parent, char position ,infotype x){
    nAddress newNode;
    newNode = bCreateNode(x);
    if(newNode != NULL){
    	if(parent == NULL){
    		root->root = newNode;
		}else{
			if( toupper(position) == 'L' && parent->left == NULL){
				parent->left = newNode;
			}else if( toupper(position) == 'R' && parent->right == NULL){
				parent->right = newNode;
			}else{
				printf("GAGAL INSERT !!\n");
				return;
			}
			printf("BERHASIL INSERT !!\n");
		}
	}
}
nAddress bSearch(nAddress root, infotype src){
    nAddress searchNode;
    if(root == NULL){
    	return NULL;
	}else{
		if(root->info == src){
			return root;
		}else{
			searchNode = bSearch(root->left, src);
			if(searchNode == NULL)
				return bSearch(root->right, src);
			else
				return searchNode;
		}
	}
}
nAddress bSearchParent(nAddress root, nAddress searchChild){
	nAddress searchNode;
	if(root == NULL){
		return NULL;
	}else{
		if(root->left == searchChild || root->right == searchChild){
			return root;
		}else{
			searchNode = bSearchParent(root->left, searchChild);
			if(searchNode == NULL)
				return bSearchParent(root->right, searchChild);
			else
				return searchNode;
		}
	}
}
void bUpgrade(bTree *root){
    return;
}
void bDelete(bTree *tree, nAddress *nodeDel){
    if(isTreeEmpty(*tree)){
    	printf("Tree Kosong");
    	return;
	}else{
		nAddress nCurrent, nParent;
		nCurrent = *nodeDel;
		if(nCurrent == tree->root && nCurrent->left == NULL){
			tree->root = NULL;
			return;
		}
		nParent = bSearchParent(tree->root, nCurrent);
		if(nParent != NULL){
			if(nParent->left == nCurrent){
				nParent->left = NULL;
			}else if(nParent->right == nCurrent){
				nParent->right = NULL;
			}else{
				printf("GAGAL DELETE !! \n");
				return;
			}
			printf("BERHASIL DELETE");
		}
		free(*nodeDel);
	}
    	
}
int bDepth(nAddress root){
    if(root == NULL){
    	return -1;
	}else{
		int left = bDepth(root->left);
		int right = bDepth(root->right);
		if(left > right)
			return left + 1;
		else
			return right + 1;
	}
}
// End Hafizh
// Start Salman 
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
// End Salman
