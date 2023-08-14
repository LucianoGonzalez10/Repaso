#include <stdio.h>
#include <stdlib.h>

void cargarArreglo(int arreglo[], int dimension);
int cargarArregloUsuario(int arreglo[], int dimension);
float calcularPromedio(int arreglo[], int validos);
int cargarArregloCaracteres(char arregloCaracteres[], int dimension);
void invertirArreglo(char arreglo[], int validosCarac);
void mostrarArreglo(char arregloCaracteres[], int validosCarac);

int main()
{
    int arreglo[100];
    char arregloCaracteres[100];
    cargarArreglo(arreglo, 100);
    int i = 0;
    int validos = cargarArregloUsuario(arreglo, 100);

    while(i < validos){
        printf("Num: %i \n", arreglo[i]);
        i++;
    }

    float promedio = calcularPromedio(arreglo, validos);
    printf("El promedio es: %f \n", promedio);

    int validosCarac = cargarArregloCaracteres(arregloCaracteres, 100);

    invertirArreglo(arregloCaracteres, validosCarac);

    mostrarArreglo(arregloCaracteres, validosCarac);

    return 0;
}

void cargarArreglo(int arreglo[], int dimension){
    int i = 0;
    while(i < dimension){
        arreglo[i] = -1;
        i++;
    }
}

int cargarArregloUsuario(int arreglo[], int dimension){
    int i = 0;
    char control = 's';

    printf("Desea cargar valores? \n");
    fflush(stdin);
    scanf("%c", &control);

    while(control == 's' && i<dimension){

        printf("Ingrese el numero a cargar en el arreglo: \n");
        scanf("%i", &arreglo[i]);


        printf("Desea seguir cargando numeros? \n");
        fflush(stdin);
        scanf("%c", &control);
        i++;
    }
return i;
}

float calcularPromedio(int arreglo[], int validos){
    int i = 0;
    int suma = 0;
    float promedio = 0;
    while(i<validos){
      suma = suma + arreglo[i];
      i++;
    }

    promedio =  (float) suma  / validos;

    return promedio;
}

int cargarArregloCaracteres(char arregloCaracteres[], int dimension){
    int i = 0;
    char control = 's';

    printf("Desea cargar valores? \n");
    fflush(stdin);
    scanf("%c", &control);

    while(control == 's' && i<dimension){

        printf("Ingrese el caracter a cargar en el arreglo: \n");
        fflush(stdin);
        scanf("%c", &arregloCaracteres[i]);


        printf("Desea seguir cargando caracteres? \n");
        fflush(stdin);
        scanf("%c", &control);
        i++;
    }
return i;
}

void invertirArreglo(char arregloCaracteres[], int validosCarac){
    int i = 0;
    int j = validosCarac-1;
    while(i < j){
        char variable = arregloCaracteres[i];
        arregloCaracteres[i] = arregloCaracteres[j];
        arregloCaracteres[j] = variable;
        i++;
        j--;
    }
    }

    void mostrarArreglo(char arregloCaracteres[], int validosCarac){
        int i = 0;
        while(i < validosCarac){
        printf("%c \n", arregloCaracteres[i]);
        i++;
    }
    }
