#include <stdio.h>
#include <string.h>
int uc = 0;
int op;
int ope;
int entradasn;
int cosn = 0;
int asientosnormales = 50;
int asientosvip = 10;
int asientos3D = 30;
char nb[3][20];
int ap;
int password = 123456789;
int main(void)

{

    do
    {
        printf("  Menu  \n");
        printf(" 1) Venta de entradas\n");
        printf(" 2) Estadisticas de ventas\n");
        printf(" 3) Salir\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("Seleccione Pelicula\n");
            printf(" 1) Normal\n");
            printf(" 2) Vip\n");
            printf(" 3) 3D\n");
            scanf("%d", &ope);
            switch (ope)
            {
            case 1:
                printf("Ingresar numero de entradas que desea comprar\n ");
                scanf("%d", &entradasn);

                if (entradasn < asientosnormales)
                {
                    entradasn *= 8;
                    printf("Costo Total de Entradas normales es de : %d\n", entradasn);
                    if (entradasn < 40)
                    {
                        printf("No tiene descuento\n");
                    }
                    if (entradasn >= 40 && entradasn < 80)
                    {
                        printf("Tiene 5 porciento de descuento\n");
                        entradasn /= 05;
                        printf("Descuento %d\n", entradasn);
                    }
                    if (entradasn > 80 && entradasn < 120)
                    {
                        printf("Tiene 10 porciento de descuento\n");
                        entradasn /= 1;
                        printf("Descuento %d\n", entradasn);
                    }
                    if (entradasn > 120)
                    {
                        printf("Tiene 5 porciento de descuento\n");
                        entradasn /= 15;
                        printf("Descuento %d\n", entradasn);
                    }
                }

                break;
            case 2:
                printf("Ingresar numero de entradas que desea comprar\n ");
                scanf("%d", &entradasn);

                if (entradasn < asientosvip)
                {
                    entradasn *= 15;
                    printf("Costo Total de Entradas normales es de : %d\n", entradasn);
                    if (entradasn < 40)
                    {
                        printf("No tiene descuento\n");
                    }
                    if (entradasn >= 40 && entradasn < 80)
                    {
                        printf("Tiene 5 porciento de descuento\n");
                        entradasn /= 05;
                        printf("Descuento %d\n", entradasn);
                    }
                    if (entradasn > 80 && entradasn < 120)
                    {
                        printf("Tiene 10 porciento de descuento\n");
                        entradasn /= 1;
                        printf("Descuento %d\n", entradasn);
                    }
                    if (entradasn > 120)
                    {
                        printf("Tiene 5 porciento de descuento\n");
                        entradasn /= 15;
                        printf("Descuento %d\n", entradasn);
                    }
                }
                break;
            case 3:
                printf("Ingresar numero de entradas que desea comprar\n ");
                scanf("%d", &entradasn);

                if (entradasn < asientos3D)
                {
                    entradasn *= 12;
                    printf("Costo Total de Entradas normales es de : %d\n", entradasn);
                    if (entradasn < 40)
                    {
                        printf("No tiene descuento\n");
                    }
                    if (entradasn >= 40 && entradasn < 80)
                    {
                        printf("Tiene 5 porciento de descuento\n");
                        entradasn /= 05;
                        printf("Descuento %d\n", entradasn);
                    }
                    if (entradasn > 80 && entradasn < 120)
                    {
                        printf("Tiene 10 porciento de descuento\n");
                        entradasn /= 1;
                        printf("Descuento %d\n", entradasn);
                    }
                    if (entradasn > 120)
                    {
                        printf("Tiene 5 porciento de descuento\n");
                        entradasn /= 15;
                        printf("Descuento %d\n", entradasn);
                    }
                }
                break;

            default:
                break;
            }
            break;
        case 2:
            printf("dos\n");
            break;
        case 3:
            printf("Salir\n");
            break;

        default:
            printf("Vuelve a intentar \n");
            break;
        }

    } while (op == 3);
    return 0;
}
