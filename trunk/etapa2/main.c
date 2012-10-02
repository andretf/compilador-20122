int main(int argc, char *argv[]) {
        if(argc < 2) {
                printf("Use etapa2 <file_name>\n");
                exit(1);
        }

	yyin = fopen(argv[1], "r");
        initMe();
        printf("%d", yyparse());
       
        hash_print();
        fclose(yyin);

	int token;
	int running = 1;

	initMe();
/*	while(running) {
		token = yylex();
		if (token == 0) 
			running = 0;
	}
*/
	PrintTable(token);
}
