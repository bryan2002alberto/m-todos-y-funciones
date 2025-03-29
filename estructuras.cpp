 #include <iostream>
using namespace std;
struct Estudiante{
	int *codigo;
	string *nombre;
	int **notas;

};
main() {
	Estudiante estudiante;

	int fila=0,columna=0;
	cout <<"cuantos estudiantes desea agregar";
	cin>>fila;
	
	cout <<"cuantas notas por estudiantes desea agregar";
	cin>>columna;
	
	estudiante.codigo = new int [fila];
	estudiante.nombre = new string [fila];
	estudiante.notas = new int *[fila];
	for (int i=0;i<fila;i++){
		estudiante.notas[i]= new int [columna];

	}
	cout <<"__________ingreso de notas_______"<<endl;
	for (int i=0;i<fila;i++){
	cout <<"codigo["<<i<<"]: ";
	cin>>estudiante.codigo[i];
	cin.ignore();
	cout <<"nombre completo["<<i<<"]: ";
	getline(cin,estudiante.nombre[i]);
	for (int ii=0;ii<columna;ii++){
	cout <<"ingrese nota:["<<ii<<"]: ";
	cin>>*(*(estudiante.notas+i)+ii);
	}
	cout<<"____________________"<<endl;
}
	cout <<"________mostrar datos"<<endl;

	for (int i=0;i<fila;i++){
		estudiante.notas[i]= new int [columna];

	}
	cout <<"__________ingreso de notas_______"<<endl;

	for (int i=0;i<fila;i++){
	cout <<"codigo["<<i<<"]: "<<estudiante.codigo[i]<<endl;
	cout <<"nombre completo["<<i<<"]: "<<estudiante.nombre[i]<<endl;
	for (int ii=0;ii<columna;ii++){
		cout <<"ingrese nota:["<<ii<<"]: "<<*(*(estudiante.notas+i)+ii)<<endl;
	}
	cout<<"____________________"<<endl;
}
	
	for (int i=0;i<fila;i++){
	delete[] estudiante.notas[i];
	}	
	
	delete[]estudiante.codigo;
	delete[]estudiante.nombre;
	delete[]estudiante.notas;
	
	system("pause");
}



/*
using namespace std;
struct estudiante{
	int codigo[4];
	string nombre[4];
	int nota[4];
		
};
main() {
	estudiante estudiante;
	for (int i=0;i<4;i++){
	cout <<"____________________ "<<endl;
	cout <<"ingrese codigo: ";
	cin>>estudiante.codigo[i];
	cin.ignore();
	cout <<"ingrese nombre completo: ";
	getline(cin,estudiante.nombre[i]);
	cout <<"ingrese nota: ";
	cin>>estudiante.nota[i];
	;
	}
	for (int i=0;i<4;i++){
		cout <<"____________________ "<<endl;
		cout <<"codigo: "<<estudiante.codigo[i]<<endl;
		cout <<"nombre completo: "<<estudiante.nombre[i]<<endl;
		cout <<"nota: "<<estudiante.nota[i]<<endl;
	
	}
	
	system("pause");
}
*/
