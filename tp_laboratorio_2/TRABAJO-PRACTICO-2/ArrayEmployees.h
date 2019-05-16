#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIBRE 0
#define OCUPADO 1



typedef struct
{
    int isEmpty;
    float salary;
    char name[50];
    char lastName[50];
    int id;
    int sector;
}Employee;


/* \brief permite ingresar los datos a cargar en el array*/


Employee getEmployee();


/* \brief Hardcode de empleados (IGNORAR ESTA FUNCION)*/

void initEmployee(Employee[],int);


/* \brief ordena alfabeticamente y por sector a los empleados*/


void sortEmployees(Employee listing[], int len);


/* \brief un printf con los datos de cade empleado*/


void printEmployee(Employee);


/* \brief ejecuta getEmployee(), permitiendo ingresar los datos de los campos*/


int addEmployee(Employee [], int );


/* \brief verifica si el array esta lleno*/


int fullArray(Employee listing[],int len);


/* \brief verifica si el empleado solicitado existe*/


int existEmployee(Employee listing[],int len);


/* \brief realiza los calculos soliciados en las consignas del TP, para luego informarlos*/


void arrayInformation(Employee listing[], int len);


/* \brief permite borrar un empleado del sistema*/


int deleteEmployee(Employee listing[], int len);


/* \brief permite editar los datos de un empleado*/


int editEmployee(Employee listing[], int len);




