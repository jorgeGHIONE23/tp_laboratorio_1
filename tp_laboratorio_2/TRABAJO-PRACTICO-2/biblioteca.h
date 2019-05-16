#ifndef BIBLIOTECA_H_INCLUDED
#define BIBLIOTECA_H_INCLUDED

/* \brief menu de opciones*/
int pedirOpcionMenu(char texto[],char opcion[]);

/* \brief permite ingresar un texto y validar que se trate de datos char*/

int getString(char mensaje[],char input[]);

/* \brief permite verificar si la string analizada es de solo numeros*/

int soloNumeros(char str[]);

/* \brief permite ingresar un string que contenga solo numeros*/

int getStringNumero(char mensaje[],char input[]);

/* \brief permite ingresar un valor entero*/

int getInt(char mensaje[], int *input);


/*\brief permite ingresar un valor float*/

void getFloat(char mensaje[],float *numero,float tamMin,float tamMax);

/* \brief ejecuta a getEmployee(), permitiendo ingresar los datos en los campos del array*/

void cargarArray(Employee listado[], int len);

/* \brief muestra una TABLA con los empleados*/

int mostrarArray(Employee listing[], int len);

/* \brief establece todos los lugares del array como libres*/

void construirArray(Employee listado[], int len);

/* \brief busca un lugar libre dentro del array*/

int dameLugarLibre(Employee listado[], int len);

#endif // BIBLIOTECA_H_INCLUDED
