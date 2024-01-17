#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

    struct agac{
	int veri;
    struct agac *sag;
    struct agac *sol;
};

typedef struct agac node;

node*ekle(node*agac, int x){
	
	if (agac==NULL) {
		node *tree =(node*) malloc (sizeof(node));
		
		tree-> sag=NULL;
		tree-> sol=NULL;
		tree-> veri=x;
		return tree;
	}


if (agac->veri<x){
	agac->sag = ekle (agac->sag, x);
	return agac;
}
agac->sag sol= ekle(agac->sol,x);
return agac;
}

void listele(node*agac){
	if(agac==NULL)
	return;
	listele(agac->sol);
	printf("%d",agac->veri);
	listele(agac->sag);
}
	

int main(){
	node*agac=NULL;
	agac = ekle(agac,1);
	agac = ekle(agac,3);
	agac = ekle(agac,5);
	listele(agac);
	
	
}


 


