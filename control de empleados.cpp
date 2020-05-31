#include<stdio.h>
#include<stdlib.h>
 
 
struct empleado {
    int codigo;
    char nombre[30];
    char puesto[30];
    char departamento[30];
    int salario;
};
 
 
 
main() {
    int N;
    printf ( "Ingrese la numero de empleados: " );
    scanf ( "%d%*c", &N );
       printf ( "\n" );
    struct empleado E[N];
 
    int i;
 
    for ( i = 0; i < N; i++ ) {
        printf ( "Ingrese los datos del empleado %d\n", ( i + 1 ) );
           printf ( "\n" );
        printf ( "codigo del empleado:  " );
        scanf ( "%d%*c", &E[i].codigo );
        printf ( "\n" );
        printf ( "nombrel del empleado:  " );
        scanf ( "%19[^\n]%*c", E[i].nombre );
           printf ( "\n" );
        printf("departamento del empleado:  ");
        scanf ( "%19[^\n]%*c", E[i].departamento );
           printf ( "\n" );
        printf("puesto del empleado:  ");
        scanf ( "%19[^\n]%*c", E[i].puesto );
           printf ( "\n" );
        printf ( "salario del empleado:  " );
        scanf ( "%d%*c", &E[i].salario );
        printf ( "\n\n" );
    }
return 0;
}
