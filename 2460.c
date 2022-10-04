#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct{

	int num;
	int position;

} person;

void main ()
{

	int qtdPeople, qntPeopleLeft;
	int i, idPeople;
	person queue[51000];

	scanf("%d", &qtdPeople);

	memset(queue, 0, sizeof(queue));

	for (i = 0; i < qtdPeople; i++)
	{
		scanf("%d", &idPeople);
		queue[i].num = idPeople;
		queue[idPeople].position = i;

	}

	scanf("%d", &qntPeopleLeft);

	for (i = 0; i < qntPeopleLeft; i++)
	{
		scanf("%d", &idPeople);
		queue[queue[idPeople].position].num = 0;
	}

	bool flag = false;

	for (i = 0; i < qtdPeople; i++){
		if (queue[i].num)
		{
			if (flag == true && i != qtdPeople){
				printf(" ");
                        }
			flag = true;
			printf("%d", queue[i].num);
		}
                
        }

	printf("\n");
}