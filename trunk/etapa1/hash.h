#ifndef HASH_H
#define HASH_H

#define HASHTABLE_SIZE	1024
#define HASHKEY		127

struct THashNode;
typedef struct THashNode *HashNode;

struct THashNode {
	struct THashNode *next;
	char *identifier;
	int type;
};

HashNode hashTable[HASHTABLE_SIZE];

void hashInit();
void hashAdd(char *identifier, int type);
void hashPrint();
HashNode hashFind(char *identifier, int type);

#endif
