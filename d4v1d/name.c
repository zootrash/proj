#include <stdio.h>
#include <stdlib.h>

#include "name.h"

/*
 * source file for name
 */

char *intro() {
	char *user = malloc(sizeof(char)*MAX_NAME_LENGTH);

	printf("Hello, I am D4v1d. What is your name?\n");
	scanf("%s", user);
	printf("Nice to meet you %s.\n\n", user);
	return user;
}

char **howru(char *user) {
	char *line = malloc(sizeof(char)*MAX_RESP_LENGTH);
	char **tokens;  
	int size = 200;
	int i;

	printf("How are you doing today, %s?\n", user);
	fgets(line, size ,stdin);
	scanf("%[^\n]%*c", line);
	tokens = tokenize(line, " ");
	return tokens;
	/*
	for(i=0; tokens[i]; i++) {
		printf("token: '%s'\n", tokens[i]);
	} */

}

int howru_bad(char *resp) {
	char *bad_resp[] = {"bad", "crap", "not good"};
	int i = 0;
	int check = 0;
	
	while(i < BAD_RESP_LENGTH) {
		check = strcmp(bad_resp[i], resp);
		i++;
	}

	// if a bad_resp was detected, ret 0.
	if(check == 0) {
		return 0;
	} else {
		return 1;
	}
}

void check_howru(char **howru_resp) {
	int i;
	int check;
	for(i=0; howru_resp[i]; i++) {
		check = howru_bad(howru_resp[i]);	
	}

	if(check == 0) {
		printf("Sorry to hear about that.\n");
	} else {
		printf("hmm.\n");
	}
}
