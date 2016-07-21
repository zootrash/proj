#include <string.h>
#include "tokenizer.h"

#ifndef NAME_DEF
#define NAME_DEF 1

#define MAX_NAME_LENGTH 50
#define MAX_RESP_LENGTH 1024
#define MAX_TOKE_LENGTH 20
#define BAD_RESP_LENGTH 3

/*
 * header file for name
 */

/* introduce yourself. */
char *intro();

/* start a conversation. */
char **howru(char *user);

/* howru_bad response */
int howru_bad(char *resp);

/* howru_good response */
int howru_good(char *resp);

/* check howru_resp */
void check_howru(char **howru_resp);

#endif
