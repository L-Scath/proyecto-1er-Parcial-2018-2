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




//---------------------------leer va aqui---------------------------------///
void Archivo::imprimir(){
	int maxCarac=relleno.size();
	//cout<<"cantidad maxima de caracteres es: "<<maxCarac<<endl;
	int num=0;
	for(int i=0;i<maxCarac;i++){		
		if(i%4==0) {
			num++;		
		}		
	}	

	char **charcortados = new char*[num];
		for(int i=0;i<num;i++){		
			charcortados[i]=new char;
		}	
		
	int auxnum=0;		
	char separador;
		
		for(int i=0;i<maxCarac;i++){		
			if(i%4==0) {
				for(int k=0;k<4;k++){
					separador=relleno[i+k];
					charcortados[auxnum][k]=(separador);
					if(i+k>=maxCarac){
						charcortados[auxnum][k]=NULL;
					}
				}
				auxnum++;
			}						
		}
		
		
//-----------------------------esto se quitA-------------------//
			int x;
			int unsigned sad[num];
			string xd[5];
			int *bytes=new int[8];
			string salida="";
			char* nose=new char;
			
			for(int i=0;i<num;i++) {
				
				for(int j=0;j<4;j++){
						x=charcortados[i][j];				
					cout<<charcortados[i][j]<<"("<<x<<")"<<" ";	
					///
					for(int i=7;i>=0;i--){
						if(x%2==1){
							x=(x-1)/2;
							bytes[i]=1;
						}else{
					x=(x)/2;
					bytes[i]=0;
						}
					}
					
					salida="";
					
					for(int i=0;i<8;i++){
   							sprintf(nose,"%d", bytes[i]);								
						salida=salida+nose;											
					}
						xd[j]=salida;
						cout<<xd[j];				
						strcpy(nose,"");
					///								
				}
					xd[4]=xd[3]+xd[2]+xd[1]+xd[0];
					//cout<<xd[4];					
					sad[num]=atoi(xd[4].c_str());
					cout<<endl<<endl<<sad[num]<<endl;
			}			
//-----------------------------------------------------------------//			




/*for(int j=7;j>=0;j--){
		cout<<vector[j];
}*/
	
///////--------------------------------------------------------------////////////////

	
}

