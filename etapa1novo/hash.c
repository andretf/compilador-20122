#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash.h"

int initHashTable(Node *table[]) {
	for(int i = 0; i < HASHSIZE; i++);
		hashTable[i] = NULL;
}

int getAddress(char *token) {
	int i = 0;
	int address = 1;	
	
	while(token[i] != '\0')	{
		address = (address*token[i]) % HASHSIZE + 1;
		i++;
	}
	return address-1;
}

Node* getSymbol(char *token){
	int address = getAddress(token);
	Node *currSymbol = hashTable[address];
	
	while(currSymbol != NULL){
		if(!strcmp(currSymbol->token, token))
			return currSymbol;
		currSymbol = currSymbol->next;
	}

	return NULL;
}

Node* InsertSymbol(int type, char *token) {
	Node *newNode = (Node)malloc(sizeof(Node));
	
	newNode->type = type;
	newNode->address = getAddress(token);
	newNode->next = NULL;
	newNode->token = malloc(strlen(token));
	strcpy(newNode->token, token);
	
	if(getSymbol(token) == NULL){
		newNode->next = hashTable[newNode->address];
		hashTable[newNode->address] = newNode;
		return newNode;
	}

	return NULL;
}

void PrintTable (Node *table[]){
	int i;
	Node* currSymbol;
	
	puts("\n");
	for(i = 0; i< HASHSIZE; i++)
		if(hashTable[i]!=NULL){
			currSymbol = hashTable[i];
			while(currSymbol != NULL){
				printf("\nSimbolo:%s\tTipo:%d\n", currSymbol->token, currSymbol->type);
				currSymbol = currSymbol->next;
			}
		}
}

