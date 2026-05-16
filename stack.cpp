#include<iostream>

using namespace std;

#define TAM 10


struct Pilha{
	
	int dados[TAM];   	   	   	
	int topo;
	
};

bool isEmpty(Pilha p){
	
	if(p.topo < 0 ){
		
		return true;
	}
	else{
		
		return false;
	}
	
	
}
bool isFull(Pilha p){
	
	return p.topo == TAM-1;
	
}


void empilharPrato(Pilha &p,int x){
	
	if(isFull(p)){
	
		cout<<"pilha cheia";
	
		return;
	}
	p.topo++;
	p.dados[p.topo] = x;
	
	
	
}

void exibir(Pilha p){
	
	if(isEmpty(p)){
		cout<<"lista vazia";
		return;
	}
	
	for(int i = p.topo ; i >=  0 ; i-- ){
		
		cout<<p.dados[i];
		cout<<endl;
		
	}
	
}

int desempilhar(Pilha &p){
	
	if(isEmpty(p)){
	
		cout<<"pilha vazia";
		return -1;
	}
	
	return p.dados[p.topo--]; 
	
}


void topo(Pilha p){
	
	if(isEmpty(p)){
		
		cout<<"pilha vazia";
		return;
	}
	
	cout<<p.dados[p.topo];
	
	
	
}

int main(int argc, char** argv){
	
	Pilha p ;
	p.topo = - 1;
	
	empilharPrato(p,1);
	empilharPrato(p,2);
	empilharPrato(p,3);
	empilharPrato(p,4);
	cout<<"pilha: "<<endl;
	exibir(p);
	
	cout<<endl;
	
	desempilhar(p);
	exibir(p);
	
	cout<<"topo: ";
	topo(p);
	return 0;
}