#include <iostream> //Declaracion de librerias

int sum (int, int); //Declaracion de funciones
int res (int, int);
int mul (int, int);
int residuo (int, int);
float division (float, float);

using namespace std;

int main() 
{
	int num1,num2,op; //Declaración de variables a utilizar
	float x,y; //Variables para division
	
	do {
		system ("cls");
	cout<<"\tCalculadora basica de operaciones"<<endl; //Menu principal
	cout<<"Ingrese 1 para suma"<<endl;
	cout<<"Ingrese 2 para resta"<<endl;
	cout<<"Ingrese 3 para multiplicacion"<<endl;
	cout<<"Ingrese 4 para division"<<endl;
	cout<<"Ingrese 5 para residuo"<<endl;
	cout<<"Ingrese 6 para salir"<<endl<<endl;
	cin>>op;
	system ("cls");
	if (op<=5) {
	cout<<"Ingrese el primer numero: "; //Ingreso de datos
	cin>>num1;
	cout<<"Ingrese el segundo numero: ";
	cin>>num2;
	x=num1;
	y=num2;
	system("cls");
	}

	switch (op) { //Switch case para imprimir resultados de las funciones
		case 1:
			cout<<"El resultado de la suma es: "<<sum(num1,num2)<<endl;
			system ("pause");
			break;
		case 2:
			cout<<"El resultado de la resta es: "<<res(num1,num2)<<endl;
			system ("pause");
			break;
		case 3:
			cout<<"El resultado de la multiplicación es: "<<mul(num1,num2)<<endl;
			system ("pause");
			break;
		case 4:
			cout<<"El resultado de la división es: "<<division(x,y)<<endl;
			system ("pause");
			break;
		case 5:
			cout<<"El residuo de la división es: "<<residuo(num1,num2)<<endl;
			system ("pause");
			break;
		case 6:
			system("cls");
			break;
		default:
			cout<<"Operacion Inválida"<<endl; //Operacion invalida en caso de seleccionar opcion que no esta en el menu
			system ("pause");
			break;
	}
	
	} while (op <6); //Bucle para repetir programa, no sale a menos que el usuario ingrese un 6
	return 0;
}

int sum (int num1, int num2) { //Funcion para sumar
	return num1+num2;
}
int res (int num1, int num2) { //Funcion para restar
	return num1-num2;
}
int mul (int num1, int num2) { //Funcion para multiplicar
	return num1*num2;
}
int residuo (int num1, int num2) { //Funcion para sacar residuo
	return num1%num2;
}
float division(float x, float y) { //Funcion para division
	   if (y != 0) {
        return x / y;
    } else {
        cout << "La division entre cero no es permitida." << endl;
        return 0;
    }
}