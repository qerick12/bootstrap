#include <iostream>
#include <fstream>


using namespace std;
int main()
{
//Variables Globales
	struct Datos
	{
		int peso;
		int edad;
		int altura;
		char genero[100];

	};


	int i = 0;
	int total = 0;
	int f_c = 0;
	int m_c = 0;
	double f_p = 0;
	double m_p = 0;
	double p_p = 0;
	double e_p =0;
	double a_p = 0;
	char path[200];

	ofstream fichero;
	
	std::cout << "Bienvenido !! iniciemos con su carga de datos !!!\n";
	std::cout << "ingrese el path para guardar su archivo :\n";
	std::cin >> path;
	fichero.open(path);
	std::cout<<"cuantos registros desea ingresar ?";
	std::cin>>total;
	Datos *ingreso = new Datos[total];
    
    while (i<total){
      std::cout<<"ingrese su edad: ";
      std::cin>>ingreso[i].edad;
      std::cout<<"ingrese su altura: ";
      std::cin>>ingreso[i].altura;
      std::cout<<"ingrese su genero: ";
      std::cin>>ingreso[i].genero;
      std::cout<<"ingrese su peso";
      std::cin>> ingreso[i].peso;
      
      if (ingreso[i].genero =="F" || ingreso[i].genero =="f" ){
	  f_c = f_c+1;
	  };
	  if (ingreso[i].genero =="M" || ingreso[i].genero =="m" ){
	  m_c = m_c+1;
	  };
	  a_p = a_p + ingreso[i].altura; 
	  p_p = p_p + ingreso[i].peso;
	  
	  fichero<< ingreso[i].genero <<","<<ingreso[i].peso <<","<<ingreso[i].edad<<","<<ingreso[i].altura;
      i = i +1;
	}
    
    
	fichero.close();
	std::cout << "puede verificar su archivo en la ruta ", path;
	std::cout.clear();
	
	std::cout<<"--------------------------reporte-------------------------------";
    std::cout<<"no			genero			edad			altura			peso\n";


	i = 0;
	while (i<total){
		
	std::cout<<i<<"			%d"<<ingreso[i].genero<<"			%d"<<ingreso[i].edad<<"			%d"<<ingreso[i].altura<<"			%d"<<ingreso[i].peso<<"\n";
		i = i +1;
	}
	std::cout<<"\n"<<"------------------------------promedios-----------------------------";
	f_p = f_c / total;
	m_p = m_c/total;
	a_p = a_p/total;
	p_p = p_p /total;
	
	cout<<"F = %d"<<f_p<<"\n";
	cout<<"M = %d"<<m_p<<"\n";
	cout<<"Estatura = %d"<<a_p<<"\n";
	cout<<"Peso = %d"<<p_p<<"\n";
	return 0;
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
