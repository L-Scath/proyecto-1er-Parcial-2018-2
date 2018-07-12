#include <iostream>
#include<stdlib.h>
#include<conio.h>
#include "Archivo.h"
#include<string.h>

using namespace std;
Archivo::Archivo(){
	tamano=0;
	relleno2=new char;
	titulo="hola";
	relleno="hola";
}

void Archivo::escribir(){
	/*cout << "Ingresa el nombre del archivo a crear(sin el .txt): ";
        cin.sync();
        getline(cin, titulo);
        cout << "Ingresa el contenido del archivo: ";
        getline(cin, relleno);
        titulo += ".txt";
        ofstream archiv(titulo.c_str(), ios::out);
        archiv << relleno << endl;
        archiv.close();
    cout << "El archivo ha sido creado correctamente" << endl;
    tamano= sizeof(relleno);*/
  
}




//---------------------------leer va aqui---------------------------------///
void Archivo::imprimir(){

	//cout<<"cantidad maxima de caracteres es: "<<maxCarac<<endl;
	
ifstream vBeta;
	string otracadena="";
     int sum=0;
     int x;
     
     vBeta.open("PRUEBA.txt",ios::in);
   

/*if(!arreglaDO.is_open())
      arreglaDO.open("PRUEBA.txt", ios::in);
      */
      
      if(vBeta.fail()){
      	cout << "no se pudo abrir el archivo....";
      	exit(1);
      	
	  }
      while(!vBeta.eof()){
      	
      	getline(vBeta, title);
    	otracadena=otracadena+title;
	  }
	  title=otracadena;
	  maxCarac=title.size();
	  vBeta.close();
	  
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
					separador=title[i+k];
					charcortados[auxnum][k]=(separador);
					if(i+k>=maxCarac){
						charcortados[auxnum][k]=NULL;
					}
				}
				auxnum++;
			}						
		}
		
		
//-----------------------------esto se quitA-------------------//
	
			int *bytes=new int[8];
			string salida="";
			char* nose=new char;
			
			for(int i=0;i<num;i++) {
				for(int j=0;j<4;j++){
						x=charcortados[i][j];				
					cout<<charcortados[i][j]/*<<"("<<x<<")"<<" "*/;	
					///
					for(int i=0;i<8;i++){
						if(x%2==1){
							x=(x-1)/2;
							bytes[i]=1;
						}else{
					x=(x)/2;
					bytes[i]=0;
						}
					}
					

					
					for(int i=0;i<8;i++){
   							sprintf(nose, "%d", bytes[i]);
								
						salida=salida + nose;
						}
						//salida=salida + "\n";
					///								
				}			
				
			}		
			int unsigned *vbytes=new unsigned int[num];
			char *equis=new char;
			char ye[31];
			
			int acum=0;			
					
			strcpy(equis,salida.c_str());		
			for(int p=0;p<salida.length();p++){							
				if(p%31==0){
					for(int k=0;k<31;k++){
					ye[k]=equis[p+acum];	
					sprintf(ye, "%d", bytes[num]);
					acum++;
				}				
				
					cout<<"    ["<<acum<<"]";
					cout<<vbytes[num]<<endl;
				}
				
			}
//-----------------------------------------------------------------//			




/*for(int j=7;j>=0;j--){
		cout<<vector[j];
}*/
	
///////--------------------------------------------------------------////////////////


	
	  
	

	
}
