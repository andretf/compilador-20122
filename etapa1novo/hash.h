#define HASHSIZE 1024

struct symbol {
	int address;
	int type;
	char* token;
	struct symbol* next;
};
typedef struct symbol Node;

Node* hashTable[HASHSIZE];

int initHashTable (Node* table[]);
int getAddress (char* token);
Node* getSymbol (char* token);
Node* InsertSymbol (int type, char* token);
void PrintTable (Node* table[]);
