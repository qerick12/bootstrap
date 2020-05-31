#include <iostream>
#include <fstream>


using namespace std;
int main()
{
//Variables Globales
		double n;
		double j;
		double a;
		double am;
		int i = 0;
		char path[200];
		int total = 0;

	ofstream fichero;
	
	std::cout << "Bienvenido !! iniciemos con su carga de datos !!!\n";
	std::cout << "ingrese el path para guardar su archivo :\n";
	std::cin >> path;
	fichero.open(path);
	std::cout<<"cuantos registros desea ingresar ?\n";
	std::cin>>total;
    
	
	while (i < total)
	{	
		  std::cout<<"Que desea ingresar :\n";
		  std::cout<<"1		EDAD 0-12			niños\n";
		  std::cout<<"2		EDAD 13-29			jovenes\n";
		  std::cout<<"3		EDAD 30-59			adultos\n";
		  std::cout<<"4     EADAD 60+			Adultos mayores\n";
		  
		  std::cout<<"ingrese un numero :";
		  int numero = 0;
		  std::cin>>numero;
		  switch (numero){
		  	case 1:
		  		{
		  			n = n+1;
				  break;
				  };
			case 2:
		  		{
		  			j= j+1;
				  break;
				  };	  
		  
		  case 3:
		  		{
		  			a = a+1;
				  break;
				  };
			case 4:
		  		{
		  			am = am+1;
				  break;
				  };
			
			}
		  fichero<< n<<","<<j<<","<<a<<","<<am;
	      i = i +1;

	}
	 
	
	fichero.close();
	std::cout << "puede verificar su archivo en la ruta ", path;
	std::cout.clear();
	
	std::cout<<"conteo :";
	std::cout<<"1		EDAD 0-12			niños		%d"<<n<<"\n";
	std::cout<<"2		EDAD 13-29			jovenes		%d"<<j<<"\n";
	std::cout<<"3		EDAD 30-59			adultos		%d"<<a<<"\n";
	std::cout<<"4     EADAD 60+			Adultos mayores	%d"<<am<<"\n";
		  
	std::cout<<"..... Lectura del archivo: .....";
	
	char cadena[128];
  	ifstream fe(path);
 	 while (!fe.eof()) {
    fe >> cadena;
    cout << cadena << endl;
  	}
  	fe.close();
  	system("pause");

    return 0;
}
