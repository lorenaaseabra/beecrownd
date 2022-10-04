#include <stdio.h>

void insertionSort(int arr[], int n)
{
    int i, chave, j;
    for (i = 1; i < n; i++)
    {
        chave = arr[i];
        j = i - 1;
 
        while (j >= 0 && arr[j] > chave)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = chave;
    }
}
 

int main(int argc, char const *argv[])
{
    int inicio, num, cont = 0;
    char pak[200];
    int keep_num[200];
    while (scanf("%d", &inicio) != EOF)
    {
        if(inicio == 1)
            {
                scanf("%s %d", pak, &num);
                keep_num[cont] = num;
                cont++;
            }
            insertionSort(keep_num, cont);
        if (inicio == 0)
        {
            for (int i = 0; i < cont; i++)
            {
                printf("Package %03d\n",keep_num[i]);

            }
            cont = 0;
            printf("\n");

        }

    }

    return 0;
}