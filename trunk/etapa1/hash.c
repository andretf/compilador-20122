#include <stdlib.h>
#include "hash.h"

void hashInit() {
	for (int i = 0; i < HASHTABLE_SIZE; i++) {
		hashTable[i] = NULL;
	}
}

void hashAdd(char *identifier, int type) {
	char *fixedIdentifier;

	// Node already exists?
	if (hashFind(identifier, type) != NULL) {
		return;
	}

	// Allocate a new node.
	HashNode newNode = (HashNode)calloc(1, sizeof(struct THashNode));
	newNode->type = type;

	// Copy the identifier string.
	if ((type == LIT_STRING) || (type == LIT_CHAR)) {
		newNode->identifier = calloc(strlen(identifier) + 1, sizeof(char));
		strcpy(newNode->identifier, &identifier[1]);
		newNode->identifier[strlen(newNode->identifier)-1] = 0;
	} else {
		newNode->identifier = calloc(strlen(identifier) + 1, sizeof(char));
		strcpy(newNode->identifier, identifier);
	}
	
	// Get the element key.
	int elementIndex = strlen(newNode->identifier) % HASHKEY;
	
	// If this is the first one, just insert it.
	// Otherwise, insert the new node in the list.
	if (hashTable[elementIndex] == NULL) {
		hashTable[elementIndex] = newNode;
	} else {
		HashNode element = hashTable[elementIndex];
		
		while (element->next) {
			element = element->next;
		}
		
		element->next = newNode;
	}
}

void hashPrint() {
	for (int i = 0; i < HASHTABLE_SIZE; i++) {
		if (hashTable[i] != NULL) {
			HashNode element = hashTable[i];

			printf("hashTable[%d]: ", i);

			while (element) {
				printf("[%s,type:%d]", element->identifier, element->type);
				element = element->next;
			}
			
			printf("\n");
		}
	}
}

HashNode hashFind(char *identifier, int type) {
	// Get the element.
	int elementIndex = strlen(identifier) % HASHKEY;
	HashNode element = hashTable[elementIndex];

	// Find it in the list.
	while (element) {
		// Found it?
		if ((strcmp(identifier, element->identifier) == 0) && (element->type == type)) {
			return element;
		} else {
			element = element->next;
		}
	}
		
	return NULL;
}
