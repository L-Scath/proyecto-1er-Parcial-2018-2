#include "Archivo.h"
#include <string.h>

Archivo::Archivo(){
	tamano=0;
	relleno2=new char;
	titulo="hola";
	relleno="hola";
}

void Archivo::escribir(){
	cout << "Ingresa el nombre del archivo a crear(sin el .txt): ";
        cin.sync();
        getline(cin, titulo);
        cout << "Ingresa el contenido del archivo: ";
        getline(cin, relleno);
        titulo += ".txt";
        ofstream archiv(titulo.c_str(), ios::out);
        archiv << relleno << endl;
        archiv.close();
    cout << "El archivo ha sido creado correctamente" << endl;
    tamano= sizeof(relleno);
}

void Archivo::leer(){	
	ifstream archiv(titulo.c_str(), ios::in);	
	archiv.getline(relleno2, sizeof(relleno2));	
	archiv.close();	
}

void Archivo::imprimir(){
	int maxCarac=relleno.size();
	cout<<"cantidad maxima de caracteres es: "<<maxCarac<<endl;
	int num=0;
	for(int i=0;i<maxCarac;i++){		
		if(i%4==0) {
			num++;
			cout<<relleno.c_str()+i<<" "<<num<<endl;
		}		
	}	

	int parasumar [num][4];	
	int auxnum=0;	
	char charseparad;
	
		for(int i=0;i<maxCarac;i++){		
			if(i%4==0) {
				for(int k=0;k<4;k++){
					charseparad=relleno[i+k];
					parasumar[auxnum][k]=(charseparad);
				}
				auxnum++;
			}						
		}
	
			for(int i=0;i<num;i++) {
				for(int j=0;j<4;j++){				
					cout<<parasumar[i][j]<<"      ";						
				}			
					cout<<endl;
			}
			
	
}
