/*si el nivel es 2 el sueldo semanal es de
4 salarios minimos x dia
si el nivel es 3 el sueldo semanal es de
5 salarios minimos x dia

Adicional al sueldo semanal se le suma un bono de dependencia de la antiguiedad en anios que tiene trabajando en la empresa
si la antiguedad es entre 1 y 5 años, bono de 500
si la antiguedad es entre 6 y 10 años, bono de 700
si la antiguedad es es mas de 10 años, bono de 1000
NOTA: la informacion que se debe de leer es: departamento, nivel, año de ingreso
*/
# include <E:/DHBA_F2024/DHBA_Funcs.h>

using namespace std;

class claAdm:public persona2
{
	string depto;
	int nivel, yact, yingre, numsm, sdosem, salmin, bono,years,ad;
	
	public:
		void Leeadm();
		void Calcadm();
	    void Listadm();
		
		claAdm()
		{
			salmin=207.44;
			yact= RetA();
		}
};
void claAdm::Leeadm()
{    
	cout<<"Nivel: ";
	cin>>nivel;
	
	cin.ignore();
	cout<<"Departamento: ";
	getline(cin,depto);
	
	cout<<"Anio de ingreso: ";
	cin>>yingre;
}

void claAdm::Calcadm()
{    
	years=yact-yingre;
	
	switch(nivel)
	{
		case 1: 
		sdosem=3*salmin;
		ad=3;
		break;
		case 2 :
		sdosem=4*salmin;
		ad=4;
		break;
		case 3:
		sdosem=5*salmin;
		ad=5;
		break;
		default: 
		cout<<"Opcion incorrecta:";
		break;
	}
	if(years>=1 && years<=5)
	{
		bono=500;
	}
	if(years>=6 && years<=10)
	{
		bono=700;
	}
	if(years>10)
	{
		bono=1000;
	}
}

void claAdm::Listadm()
{   
	cout<<"Departamento: "<< depto <<endl;
	cout<<"Nivel: "<< nivel << endl;
	cout<<"Numero de salarios: "<< ad <<endl;
	cout<<"Sueldo semanal: "<< sdosem <<endl;
	cout<<"Bono: "<<bono <<endl;
	cout<<"Anios: "<<years <<endl;
	cout<<"Sueldo total: "<<sdosem + bono<< endl<< endl;
}

int main (void)
{ 
	system("cls");
	Inicio();
	Titulos("ClaAdmPer");
	
	persona2 B;

    B.Pleer();
    B.Pproc();
    
    
    system("cls");
	Inicio();
	Titulos("ClaAdmPer");
	
	claAdm x;
	
	x.Leeadm();
	x.Calcadm();
	
	system("cls");
	Inicio();
	Titulos("ClaAdmPer");
	
	B.Pesc();
	x.Listadm();

	
	cout << "\n\nProceso terminado.  Oprima una tecla...";
    getch ( );   return (0);
} 