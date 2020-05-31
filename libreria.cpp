#include <iostream>
#include <fstream>


using namespace std;
int main()
{
//Variables Globales
	struct Datos
	{
		int posicion;
		int modelo;
		int cantidad;
		char fecha[100];

	};

	Datos *ingreso = new Datos[100];


	double Modelo1 = 10.00;
	double Modelo2 = 15.00;
	double Modelo3 = 18.50;
	double Modelo4 = 25.00;
	int dia = 0;
	int mes = 0;
	int anio = 0;
	int cantidad = 0;
	char nombre_archivo1[30] = "";
	char path[200] = "";
	int mod = 0;
	int cont = 1;
	int i = 0;
	int contm1=0;
	int contm2 = 0;
	int contm3 = 0;
	int contm4 = 0;
	ofstream fichero;
	
	std::cout << "Bienvenido !! iniciemos con su carga de datos !!!\n";
	std::cout << "ingrese el path para guardar su archivo :\n";
	std::cin >> path;
	fichero.open(path);
	while (cont == 1)
	{
		i = +1;
		std::cout << "Que modelo desea ingresar\n";
		std::cin >> mod;
		switch (mod)
		{
		case 1:
		{
			contm1 = contm1 + 1;
			ingreso[i].posicion = i;
			ingreso[i].modelo = 1;
			std::cout << "ingrese la cantidad :\n";
			std::cin >> ingreso[i].cantidad;
			fichero << ingreso[i].cantidad;
			std::cout << "Dia:\n"; 
			
			std::cin >> ingreso[i].fecha;
			fichero << ingreso[i].fecha;


			break;
		};
		case 2:

		{
			contm2 = contm2 + 1;
			ingreso[i].posicion = i;
			ingreso[i].modelo = 2;
			std::cout << "ingrese la cantidad :\n";
			std::cin >> ingreso[i].cantidad;
			std::cout << "Dia:\n";
			std::cin >> ingreso[i].fecha;
			fichero << "" << ingreso[i].modelo <<","<< ingreso[i].fecha <<"," <<ingreso[i].cantidad;

			break;
		};
		case 3:

		{
			contm3 = contm3 + 1;
			ingreso[i].posicion = i;
			ingreso[i].modelo = 3;
			std::cout << "ingrese la cantidad :\n";
			std::cin >> ingreso[i].cantidad;
			std::cout << "Dia:\n";
			std::cin >> ingreso[i].fecha;
			fichero << "" << ingreso[i].modelo <<","<< ingreso[i].fecha <<"," <<ingreso[i].cantidad;

			break;
		};
		case 4:

		{
			contm4 = contm4 + 1;
			ingreso[i].posicion = i;
			ingreso[i].modelo = 4;
			std::cout << "ingrese la cantidad :\n";
			std::cin >> ingreso[i].cantidad;
			std::cout << "Dia:\n";
			std::cin >> ingreso[i].fecha;
			fichero << "" << ingreso[i].modelo <<","<< ingreso[i].fecha <<"," <<ingreso[i].cantidad;

			break;
		};
		default:
			std::cout << "¡¡error!!!";
			break;
		};

		std::cout << "Desea ingresar otro producto ? ingrese 1 si y 0 no \n";
		std::cin >> cont;
	}

	

	std::cout << "---------------------------------------------\n";
	std::cout << "-                                           -\n";
	std::cout << "-Se mostrara el resultado de ventas totales:-\n";
	std::cout << "-                                           -\n";
	std::cout << "---------------------------------------------\n";

	std::cout << "total de modelo 1 es :%d",(contm1*Modelo1),"\n";
	std::cout << "total de modelo 2 es :%d", (contm2*Modelo1), "\n";
	std::cout << "total de modelo 3 es :%d", (contm3*Modelo1), "\n";
	std::cout << "total de modelo 4 es :%d", (contm4*Modelo1), "\n";


    
	fichero.close();
	std::cout << "puede verificar su archivo en la ruta ", path;
	std::cout.clear();
	cont = 0;
	while (cont =0){
	
	std::cout<<"desea modificar los valores :\n";
	std::cout<<"que valor desea modificar :\n";
	std::cin>>i;
	        ingreso[i].posicion = i;
			std::cout << "ingrese la cantidad :\n";
			std::cin >> ingreso[i].cantidad;
			std::cout << "Dia:\n";
			std::cin >> ingreso[i].fecha;
			std::cin>>ingreso[i].modelo;
	std::cout<<"desea modificar otro valor ?\n";		
	};
	
	std::cout<<"..... finalizado .....";



    
    return 0;
}
