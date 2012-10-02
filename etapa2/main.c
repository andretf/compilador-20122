int main(int argc, char *argv[]) {
	int token;
	int running = 1;

	initMe();
	while(running) {
		token = yylex();
		if (token == 0) 
			running = 0;
		PrintTable(token);
	}
}
