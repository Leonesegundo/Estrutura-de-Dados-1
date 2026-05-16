#include<iostream>

using namespace std;

#define TAM 10


struct Pilha{
	
	char dados[TAM];   	   	   	
	char topo;
	
};
 // Questao 2

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


void push(Pilha &p,char x){
	
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
	
	for(int i = p.topo ; i >= 0  ; i--){
		
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

void inverterPilha(Pilha &p){
	
	Pilha aux;
	aux.topo = -1;
	
	while(!isEmpty(p)){
		
		push(aux, desempilhar(p));
		
	}
	
	p = aux;
}

int main(int argc, char** argv){
	
	Pilha p;
	p.topo = -1;
	
	push(p,'l');
	push(p,'e');
	push(p,'o');
	
	exibir(p);
	
	cout<<"topo: ";
	topo(p);
	cout<<endl;
	
	
	cout<<"invertida: "<<endl;
	inverterPilha(p);
	exibir(p);
	
	return 0;
}