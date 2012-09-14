int main(int argc, char **argv) {
	int token = 0;

	while (running) {
		token = yylex();
		if (!running) break;

		switch (token) {
			case KW_INTEGER: printf("KW_INTEGER "); break;
			case KW_FLOATING: printf("KW_FLOATING "); break;
			case KW_BOOLEAN: printf("KW_BOOLEAN "); break;
			case KW_CHARACTER: printf("KW_CHARACTER "); break;
			case KW_IF: printf("KW_IF "); break;
			case KW_THEN: printf("KW_THEN "); break;
			case KW_ELSE: printf("KW_ELSE "); break;
			case KW_WHILE: printf("KW_WHILE "); break;
			case KW_DO: printf("KW_DO "); break;
			case KW_INPUT: printf("KW_INPUT "); break;
			case KW_RETURN: printf("KW_RETURN "); break;
			case KW_OUTPUT: printf("KW_OUTPUT "); break;

			case OPERATOR_LE: printf("OPERATOR_LE "); break;
			case OPERATOR_GE: printf("OPERATOR_GE "); break;
			case OPERATOR_EQ: printf("OPERATOR_EQ "); break;
			case OPERATOR_NE: printf("OPERATOR_NE "); break;
			case OPERATOR_AND: printf("OPERATOR_AND "); break;
			case OPERATOR_OR: printf("OPERATOR_OR "); break;

			case TK_IDENTIFIER: printf("TK_IDENTIFIER "); break;
			case LIT_INTEGER: printf("LIT_INTEGER "); break;
			case LIT_FLOATING: printf("LIT_FLOATING "); break;
			case LIT_FALSE: printf("LIT_FALSE "); break;
			case LIT_TRUE: printf("LIT_TRUE "); break;
			case LIT_CHARARACTER: printf("LIT_CHAR "); break;
			case LIT_STRING: printf("LIT_STRING "); break;

			case TOKEN_ERROR:
				printf("Error line %d: unknown token\n", getLineNumber());
				running = 0;
				break;

			case ',':
			case ';':
			case ':':
			case '(':
			case ')':
			case '[':
			case ']':
			case '{':
			case '}':
			case '+':
			case '-':
			case '*':
			case '/':
			case '<':
			case '>':
			case '=':
			case '!':
			case '&':
			case '$':
				printf("SYMBOL(%c) ", token);
				break;

			default:
				printf("UNKNOWN(%d/%c) ", token, token);
				running = FALSE;
		}
	}
	
	printf("\n\nHash table:\n");
	hashPrint();
}
