#include <iostream>
#include "BinaryTree.h""

int main() {
	bTree tree;
	bCreate(&tree);
	int pilih;
	do{
		system("cls");
		printf("1. Insert Node\n");
		printf("2. Delete Node\n");
		printf("3. Search Node\n");
		printf("4. Search Parent Node\n");
		printf("9. Exit\n");
		printf("\n");
		printf("Masukkan Pilihan	: ");
		fflush(stdin);
		scanf("%d", &pilih);
		switch(pilih){
			case 1:
				nAddress newNode;
				infotype newInfo, parent;
				printf("Masukkan nilai : ");
				scanf("%d",&newInfo);
				if(bSearch(tree.root, newInfo) != NULL){
					printf("DATA SUDAH ADA !!");
				}else{
					if(isTreeEmpty(tree)){
						bInsert(&tree, NULL, 'N', newInfo);
						printf("Data Dimasukkan Sebagai Parent !\n");
					}else{
						printf("Masukkan parent : ");
						scanf("%d", &parent);
						nAddress nodeParent = bSearch(tree.root , parent);
						if(nodeParent != NULL){
							char posisi;
							printf("Pilih posisi [L/R] : ");
							fflush(stdin);
							scanf("%c", &posisi);
							bInsert(&tree, nodeParent, posisi, newInfo);
						}else{
							printf("Parent Tidak Ada !!\n");
						}
					}
				}
				
				break;
			case 2:
				nAddress nodeDel;
				infotype infoDel;
				printf("Masukkan nilai : ");
				scanf("%d",&infoDel);
				if(bSearch(tree.root, infoDel) == NULL){
					printf("DATA TIDAK ADA !!");
				}else{
					if(isTreeEmpty(tree)){
						printf("TREE KOSONG !!");
					}else{
						nAddress nodeDel = bSearch(tree.root, infoDel);
						bDelete(&tree, &nodeDel);
					}
				}
				break;
			case 3:
				infotype infoSearch;
				printf("Masukkan nilai : ");
				scanf("%d",&infoSearch);
				if(bSearch(tree.root, infoSearch) != NULL){
					printf("DATA ADA");
				}else{
					printf("DATA TIDAK ADA");
				}
				break;
			case 4:
				nAddress searchChild, nParent;
				infotype infoSearchParent;
				printf("Masukkan nilai : ");
				scanf("%d",&infoSearchParent);
				searchChild = bSearch(tree.root, infoSearchParent);
				if(searchChild != NULL){
					nParent = bSearchParent(tree.root, searchChild);
					printf("Info Parent : %d\n", nParent->info);
				}else{
					printf("DATA TIDAK ADA");
				}
				break;
			default:
				break;
		}
		getche();
	}while(pilih != 9);
	exit(0);
	return 0;
}
