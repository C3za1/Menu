#include<iostream>
#include <math.h>
#include <string>
#include <sstream>
using std::string;
using std::stringstream;
using std::ostringstream;

using namespace std;

int main(int argc, char** argv) 
{

	int opc;
	
	
	cout<<"----Menu----\n\n\t1.- Imprimir Matriz\n\t2.- Ecuacion de Primer grado.\n\t3.- Ecuacion de Segundo grado.\n\t4.- Matriz 4x4.\n\t5.- Salir.\n";
	cin>>opc;
	
	switch(opc)
	{
	
	case 1:
		float estatura, peso, c, d;
    string res="";
    
	do
	{
	
    cout<<"ingresa estatura"<<endl;
    cin>>estatura;
    cout<<"ingresa peso"<<endl;
    cin>>peso;
    
    c=estatura*estatura;
    d=peso/c;
    cout<<"masa corporal es de"<<endl<<d;
    cout<<endl;
    cout<<"tu indice es:"<<endl;
  
 	 if(d<=18.49)
      cout<<"infra peso";
	
	else
	if(18.50<d&&d<=24.99)
    	cout<<"peso normal";
	
	else
	if(25<d&&d<=29.99)
    	cout<<"sobre peso";
	
	else
	if(30<d&&d<=34.99)
    	cout<<"obesidad leve";
	
	else
	if(35<d&&d<=39.99 )
    	cout<<"obesidad media";
	
	else
	if(d>40)
    	cout<<"obecidad morbido";
	
	cout<<endl;
	}	
	while (opc==1);
	break;
	case2:
	
		float x[4]={};
		float y[4]={};
	
	cout<<"Ecuacion: 3x+2y=5\n";
	
	for(int i=0;i<5;i++)
	{
	cout<<"\nIngrese valor de y: ";
	cin>>y[i];
	
	y[i]=((2*y[i])-5)/3;
	
	}
	
	cout<<"\nDespejando x...\n\nResultados:\n";
	cout<<"\ty:\tx:";
	
	for(int i=0;i<5;i++)
	{
	cout<<"\n\t"<<y[i]<<"\t"<<x[i];
	}
	break;
	case3:
			do
			{
			string resp="";
			double a=0.0, b=0.0, c=0.0, f=0.0, s=0.0;
			cout<<"ecuacion de segundo grado"<<endl;
			 cout<<"dame el valor para 'a' "<<endl;
			 cin>>a;
			 cout<<"ingresa el valor para 'b'"<<endl;
			 cin>>b;
			 cout<<"ahora ingresa el valor para 'c'"<<endl;
			 cin>>c;
			 cout<<"tus valores asignados son:"<<a<<","<<b<<","<<c<<endl;
			 f=(-b+sqrt(b*b-4.0*a*c ))/2.0/a;
			 s=(-b-sqrt(b*b-4.0*a*c))/2.0/a;
			 cout<<"el valor de  x1 es:"<<f<<endl;
			 cout<<"el valor de  x2 es:"<<s<<endl;
		 
		      cout<<"deseas continuar en el programa?...";
		      cin>>resp;
		}
		while (opc==3);
		break;
	case4:
		
	int i;
	int n=0;
	int opcion;
	
	for(n;n<1;n++)
	{
	cout<<"Ingrese un valor: ";
	cin>>i;
	cout<<endl;
	
	int mat[4][4]={};//2x2=4 elementos
	mat[0][0]=i;
	mat[1][1]=i;
	mat[0][1]=0;
	mat[1][0]=0;
 	mat[2][2]=i;
	 mat[3][3]=i;
 
	
	for(int x=0;x<4;x++)//2 numero de filas
	{
		for(int y=0;y<4;y++)//2 numero de columnas
		{
			cout<<mat[x][y]<<" | ";
		}
		cout<<endl<<endl;
	}
	
	}
	break;
	
	}
	}
