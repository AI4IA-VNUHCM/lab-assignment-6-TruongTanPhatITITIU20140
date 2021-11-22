/*
4. Receive a string, remove all blank spaces at begin and
end of the string and leave only one blank space between words.
Ej:
 ________________________________________________
| Input: "  this  is an   unformatted  string "  |
| Output: this is an unformatted string          |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ej4(char *str){
	//Your codes here
	int i, j;
  for(i=j=0; str[i]; ++i) {
    if(!isspace(str[i]) || (i > 0 && !isspace(str[i-1]))) str[j++] = str[i];
  }
  str[j] = '\0';
	printf("%s\n",str);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];

	Ej4(testcase);

	return 0;
}