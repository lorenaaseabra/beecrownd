#include <stdio.h>
#include <string.h>
int main (){
    char word[10];
	while (scanf(" %[^\n]", word) != EOF){
		if (strcmp(word, "esquerda") == 0){
			printf("ingles\n");
                }else if (strcmp(word, "direita") == 0){
			printf("frances\n");
                }else if (strcmp(word, "nenhuma") == 0){
			printf("portugues\n");
                }else if (strcmp(word, "as duas") == 0){
			printf("caiu\n");
                }
	}
} 