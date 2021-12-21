#include "b_tree.h"

int main(){

	int reg1[] = {1, 33, 99, 54, 13};
	int reg2[] = {55, 91, 07, 1, 9, 40, 80};
	
	Record r;
  	Pagina *btree = CreateBTree();
  	int ordem = 2;

  	printf("\nInserção\n");
  	printf("==========================");
  	for(int i=0; i<5; i++){
    	r.key = reg1[i];
    	Insere(&btree, r);
	  	printf("\nImpressão\n");
	  	Imprime(&btree, 0);
  	}
  	
  	printf("\n\n");
  	printf("\nImpressão Total\n");
  	Imprime(&btree, 0);

  	printf("\n\n");
  	printf("==========================");
	printf("\nRemoção\n");

  	for(int i=0; i<7; i++){
  		Remove(&btree, reg2[i], &ordem);
	  	printf("\nImpressão Total\n");
	  	Imprime(&btree, 0);
  	}
	
	return 0;

}