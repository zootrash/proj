#include <stdio.h>
#include "name.h"

/* main */

int main() {
	char *user = intro();
	
	char **howru_resp;
	howru_resp = howru(user);
	check_howru(howru_resp);
	
	return 0;
}
