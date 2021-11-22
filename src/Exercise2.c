/*
2. Receive n strings from the input and sort them ascendingly.
Ex:
 _________________________________________
| Input: one two three                    |
| Output: one three two                   |
|_________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex2(int n, char *str[]){
	//Your codes here
	int a[n];

	for (int i = 0; i < n; i++){
		a[i] = i;
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			int a = 0;

			while (str[a[i]][a] != '\0'){
				if (str[a[i]][a] > str[a[j]][a]) {
					int temp = a[i];
					a[i] = a[j];
					a[j] = temp;
					break;
				} else if (str[a[i]][a] == str[a[j]][a]) {
					a++;
				}
				else {
					break; 
				}
			}
		}
	}

	for (int i = 0; i < n; i++) {
		printf("%s ", str[a[i]]);
	}
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	char *testcase[argc];
	int i;
	for(i=0; i<argc; i++){
		testcase[i] = argv[i+1];
	}
	
	Ex2(argc, testcase);
	
	return 0;
}
