/*
3. Receive a string, find the shortest and longest word in that string.
Ex:
 __________________________________________________________
| Input: "This is a string with shortest and longest word" |
| Output: Shortest word: a                                 |
|         Longest word: shortest                           |
|__________________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void Ex3(char *str){
	//Your codes here
	int i, length = 0;
	int max_len = 0, max_idx = 0;
	int min_len = strlen(str), min_idx = 0;

	for(i = 0; i < strlen(str); i++)
	{
		if(str[i] != ' ')
			length++;
		else
		{
			if(length > max_len)
			{
				max_len = length;
				max_idx = i - max_len;
			}
			if(length < min_len)
			{
				min_len = length;
				min_idx = i - min_len;
			}
			length = 0;
		}
	}
	if(length > max_len)
	{
		max_len = length;
		max_idx = i - max_len;
	}
	if(length < min_len)
	{
		min_len = length;
		min_idx = i - min_len;
	}
	printf("Shortest word: ");
	for(i = min_idx; i < min_idx + min_len; i++)
		printf("%c", str[i]);
	
	printf("\nLongest word: ");
	for(i = max_idx; i < max_idx + max_len; i++)
		printf("%c", str[i]);
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	char *testcase = argv[1];
	
	Ex3(testcase);
	
	return 0;
}
