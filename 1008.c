#include <stdio.h>
 
int main() {
 
        int num, qnthoras;
        float horas, salario;
        scanf("%d%d%f", &num, &qnthoras, &horas);
        salario = qnthoras*horas;
        printf("NUMBER = %d\n", num);
        printf("SALARY = U$ %1.2f\n", salario);

        return 0;
}
