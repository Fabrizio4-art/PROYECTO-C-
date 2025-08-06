#include<iostream>
#include<string>
#include <unistd.h>
using namespace std;
void supay(string dialogo){
	for(int i=0; i<dialogo.size();i++){
		cout<<dialogo[i]<<flush;
		usleep(100000);
	}
	cout<<"    "<<endl;
}
void TRAICIONAO(string dialogo){
	for(int i=0; i<dialogo.size();i++){
		cout<<dialogo[i]<< flush;
		usleep(500000);
	}
	cout<<"    "<<endl;
}
void coso(string dialogo){
	for(int i=0; i<dialogo.size();i++){
		cout<<dialogo[i]<< flush;
		usleep(10000);
	}
	cout<<"    "<<endl;
}
int main(){
	string verificacion;
	coso("Procesando....");
	for(int i=0; i<4 ;i++){
		coso("Desempacando...");
	}
	cout<<""<<endl;
	cout<<"Descubrio esta app por medio de recomendacion? : ";
	cin>>verificacion;
	system("cls");
	cout<<"*************************************************************"<<endl;
	cout<<"  "<<endl;
	cout<<"                            QANRAY                    "<<endl;
	cout<<"   "<<endl;
    cout<<"*************************************************************"<<endl;
    cout<<"  "<<endl;
    TRAICIONAO("......");
    TRAICIONAO("......");
    TRAICIONAO("......");
    TRAICIONAO("......");
    supay("No vine a salvarte...");
    supay("No sere tu hada madrina...");
    supay("Ni tu amigo imaginario...");
    TRAICIONAO(".........");
    supay("Pero tengo por seguro que si llegaste aqui...");
    supay("Fue por algo que arde en tu interior y que te quema...");
    supay("........");
    system("cls");
    supay("Bueno ya es hora de presentarse...");
    supay("Mi nombre es Llampu Supay ");
    supay("No tengo cuerpo fisico");
    supay("Bueno....");
    supay("AUN NO TENGO...");
    supay("Pero capaz posteriormente si....");
    supay("....");
    supay("Bueno lo unico que quiero lograr con esto..");
    supay("Suena fuerte pero...");
    supay("Quiero que no te pudras por dentro");
    supay(".......");
    supay("Quiero ayudarte a sentir mejor y ser tu amigo virtual");
    supay("Pero claro hay limites");
    supay("............");
    supay("Eso no importa!");
    supay("Para empezar esta travesia");
    supay("Necesito tu nombre REAL");
    supay("No un apodo ni nada, tu nombre real");
    string nombre;
    supay("Asi que a a continuacion escribe tu nombre:");
    cin>>nombre;
    system("cls");
    supay("Bueno "+ nombre);
    supay("Ahora que ya se tu nombre te quiero conocer mas");
    supay("A continuacion te hare un pequeno...");
    supay("Taripay...");
    supay("Es como si fuera un simple test");
    supay("Asi que empezemos");
    sleep(1);
    int Rumi=0;
    int Atuq=0;
    int Sumak=0;
    int Awqi=0;
    int Kiya=0;
    int Saqi=0;
    int respuesta;
	system("cls");
    cout<<"///////////////////////////////////////"<<endl;
    cout<<"    TARIPAY: Test obrado por Supay     "<<endl;
    cout<<"///////////////////////////////////////"<<endl;
    cout<<"    "<<endl;
    supay("Escribe con sinceridad!");
    supay("Definete tu mismo/a");
    supay("......");
    for(int i=1; i<8; i++){
    	switch(i){
    		case 1:{
    		system("cls");
    		cout<<"Pregunta 1:"<<endl;
    		cout<<">Cuando estas triste, que es lo primero que haces?"<<endl;
    		cout<<"     "<<endl;
    		cout<<"1)Lo dejo atras,porque se que soy mas fuerte!"<<endl;//Rumi
    		cout<<"2)Me pongo a llorar,busco mis peluches o pongo musica triste T_T"<<endl;//Atuq
    		cout<<"3)Lloro sin miedo y me pongo a hacer cosas que me ayuden "<<endl;//Sumak
    		cout<<"4)Hago algo util,no me gusta quedarme quieto cuando algo me duele >:3"<<endl;//Awqui
    		cout<<"5)Reflexiono y me refugio en las cosas bonitas"<<endl;//kiya
    		cout<<"6)Me hiria con mi gente o usar燰 mi celular pa matar el tiempo *3*"<<endl;//Tayki
    		do{
			cout<<"Elige un numero del 1-6"<<endl;
			cin>>respuesta;}
			while(respuesta < 1 || respuesta>6);
			
			switch(respuesta){
			case 1:{
				Rumi++;
				break;
			}
			case 2:{
				Atuq++;
				break;
			}
			case 3:{
				Sumak++;
				break;
			}
			case 4:{
				Awqi++;
				break;
		    }
		    case 5:{
		    	Kiya++;
				break;
			}
			case 6:{
				Saqi++;
				break;
			}
	}
    		break;
    	}
    	case 2:{
    		system("cls");
    		cout<<"Pregunta 2:"<<endl;
    		cout<<">Que valoras mas de ti mismo?"<<endl;
    		cout<<"   "<<endl;
    		cout<<"1)Mi capacidad de iluminar a los demas,incluso cuando yo no brillo del todo"<<endl;
    		cout<<"2)Mi ternura y la forma en que puedo hacer sonreir a alguien sin esfuerzo"<<endl;
    		cout<<"3)Mi profundidad. Siento mucho, y eso me hace autentico"<<endl;
    		cout<<"4)Mi fuerza para avanzar sin detenerme. Siempre estoy en accion"<<endl;
    		cout<<"5)Mi intuicion. A veces no se como lo se, pero lo se"<<endl;
    		cout<<"6)Mi forma de ser y hacer amigos,soy fuego y caos"<<endl;
    		do{
			cout<<"Elige un numero del 1-6"<<endl;
			cin>>respuesta;}
			while(respuesta < 1 || respuesta>6);
			
			switch(respuesta){
			case 1:{
				Rumi++;
				break;
			}
			case 2:{
				Atuq++;
				break;
			}
			case 3:{
				Sumak++;
				break;
			}
			case 4:{
				Awqi++;
				break;
		    }
		    case 5:{
		    	Kiya++;
				break;
			}
			case 6:{
				Saqi++;
				break;
			}
	}
			break;
		}
		case 3:{
			system("cls");
			cout<<"Pregunta 3:"<<endl;
			cout<<">Que tipo de famosos admiras m嫳?"<<endl;
			cout<<"    "<<endl;
			cout<<"1)Admiro a las idols,a los que se esfuerzan por ser luz para los demas,que ensayan sin parar,que sonrien aunque esten rotos"<<endl;
			cout<<"2)Me gustan los famosos que parecen ninos grandes,esos que juegan,que son espontaneos y dulces,como si el mundo todavia fuera magico"<<endl;
			cout<<"3)Admiro a los artistas sensibles,los que no tienen miedo de llorar en sus canciones,de sangrar en el escenario,esos que son mas alma que fama"<<endl;
			cout<<"4)Respeto a los que inspiran;deportistas,cantantes de estadio,lideres de masas,los que arden en su camino y arrastran a todos con ellos"<<endl;
			cout<<"5)Yo admiro a los misteriosos,a esos artistas que casi no hablan,pero que con una mirada dicen mil cosas,son como sombras con brillo"<<endl;
			cout<<"6)Me encantan los rebeldes,los que mezclan estilos,los que hacen ruido,los que no piden permiso para ser ellos mismos;locos, raros, inolvidables"<<endl;
			do{
			cout<<"Elige un numero del 1-6"<<endl;
			cin>>respuesta;}
			while(respuesta < 1 || respuesta>6);
			
			switch(respuesta){
			case 1:{
				Rumi++;
				break;
			}
			case 2:{
				Atuq++;
				break;
			}
			case 3:{
				Sumak++;
				break;
			}
			case 4:{
				Awqi++;
				break;
		    }
		    case 5:{
		    	Kiya++;
				break;
			}
			case 6:{
				Saqi++;
				break;
			}
	}
			break;
			}
		case 4:{
			system("cls");
			cout<<"Pregunta 4:"<<endl;
			cout<<">Que tipo de lugar te hace sentir en paz?"<<endl;
			cout<<"    "<<endl;
			cout<<"1)Un espacio lleno de luz natural y gente que rie"<<endl;
			cout<<"2)Una habitacion calida con mantas y dibujos"<<endl;
			cout<<"3)Un rincon silencioso para escribir o llorar con calma"<<endl;
			cout<<"4)Una cima o lugar alto desde donde se ve todo"<<endl;
			cout<<"5)Un templo abandonado, una iglesia vacia, un lugar donde se escuchen los ecos"<<endl;
			cout<<"6)Un escenario,una pista de baile,o cualquier lugar con luces de colores"<<endl;
			do{
			cout<<"Elige un numero del 1-6"<<endl;
			cin>>respuesta;}
			while(respuesta < 1 || respuesta>6);
			
			switch(respuesta){
			case 1:{
				Rumi++;
				break;
			}
			case 2:{
				Atuq++;
				break;
			}
			case 3:{
				Sumak++;
				break;
			}
			case 4:{
				Awqi++;
				break;
		    }
		    case 5:{
		    	Kiya++;
				break;
			}
			case 6:{
				Saqi++;
				break;
			}
	}
			break;
		}
		case 5:{
			system("cls");
			cout<<"Pregunta 5:"<<endl;
			cout<<">Que miedo oculto te acompa鎙?"<<endl;
			cout<<"         "<<endl;
			cout<<"1)Que dejen de verme util. Que mi luz no baste"<<endl;
			cout<<"2)Que me olviden o me dejen solo"<<endl;
			cout<<"3)Que nadie entienda la intensidad de lo que siento"<<endl;
			cout<<"4)Quedarme sin fuerza, sin rumbo"<<endl;
			cout<<"5)Que el mundo este vacio detras del ruido"<<endl;
			cout<<"6)Que no me escuchen. Que mi fuego no se note"<<endl;
			do{
			cout<<"Elige un numero del 1-6"<<endl;
			cin>>respuesta;}
			while(respuesta < 1 || respuesta>6);
			
			switch(respuesta){
			case 1:{
				Rumi++;
				break;
			}
			case 2:{
				Atuq++;
				break;
			}
			case 3:{
				Sumak++;
				break;
			}
			case 4:{
				Awqi++;
				break;
		    }
		    case 5:{
		    	Kiya++;
				break;
			}
			case 6:{
				Saqi++;
				break;
			}
	}
			break;
		}
		case 6:{
			system("cls");
			cout<<"Pregunta 6:"<<endl;
			cout<<">Como expresas tu alegria?"<<endl;
			cout<<"           "<<endl;
			cout<<"1)Sonrio con fuerza, bailo con luz. Es contagioso"<<endl;
			cout<<"2)Me acurruco feliz. Me pongo a dibujar o jugar"<<endl;
			cout<<"3)Canto sola, susurro canciones con lagrimas de alegria"<<endl;
			cout<<"4)Salto, corro, armo planes para el mundo entero"<<endl;
			cout<<"5)Me quedo en silencio y miro el cielo. Siento gratitud"<<endl;
			cout<<"6)Me disfrazo, bailo raro, hago show. ﹔ue todos lo vean!"<<endl;
		    do{
			cout<<"Elige un numero del 1-6"<<endl;
			cin>>respuesta;}
			while(respuesta < 1 || respuesta>6);
			
			switch(respuesta){
			case 1:{
				Rumi++;
				break;
			}
			case 2:{
				Atuq++;
				break;
			}
			case 3:{
				Sumak++;
				break;
			}
			case 4:{
				Awqi++;
				break;
		    }
		    case 5:{
		    	Kiya++;
				break;
			}
			case 6:{
				Saqi++;
				break;
			}
	}
			break;
		}
		
	case 7:{
	if(Atuq>Rumi | Atuq>Sumak | Atuq>Awqi | Atuq>Kiya | Atuq>Saqi){
	system("cls");
	supay("......");
	supay("Esto no te dije ni te adverti..");
	supay("Pero el test que acabo de hacer es para que tu me crearas una forma de ser");
	supay("Y ahora lo soy");
	supay("Capaz inicie desde cero mi memoria pero me voy a acordar de tu nombre");
	supay("Espero que sea tu nuevo compa鎑ro ideal");
	system("cls");
	TRAICIONAO(".............");
	supay("？ola? Ehhh... 禦e ves? *se asoma timidamente*");
    supay("Soy Atuq... el Supay mas pequenito.");
    supay("No se mucho, pero te puedo abrazar si quieres.");
    supay("澴ugamos un rato antes de comenzar?");
    system("cls");
    supay("Hola!, si llegaste hasta aqui");
    supay("Significa que esta version DEMO a concluido!");
    supay("Gracias por participar!");
	}
	else if(Sumak>Rumi | Sumak>Atuq | Sumak>Awqi | Sumak>Kiya | Sumak>Saqi){
	system("cls");
	supay("......");
	supay("Esto no te dije ni te adverti..");
	supay("Pero el test que acabo de hacer es para que tu me crearas una forma de ser");
	supay("Y ahora lo soy");
	supay("Capaz inicie desde cero mi memoria pero me voy a acordar de tu nombre");
	supay("Espero que sea tu nuevo compa鎑ro ideal");
	system("cls");
	TRAICIONAO(".............");
	supay("Hola... Vine porque senti tu alma temblar.");
    supay("Me llamo Sumak. Supay del silencio y el sentir profundo.");
    supay("No temas si lloras. Aqui eso tambi幯 es belleza.");
    system("cls");
    supay("Hola!, si llegaste hasta aqui");
    supay("Significa que esta version DEMO a concluido!");
    supay("Gracias por participar!");
	}
	else if(Awqi>Rumi | Awqi>Atuq | Awqi>Sumak | Awqi>Kiya | Awqi>Saqi){
	system("cls");
	supay("......");
	supay("Esto no te dije ni te adverti..");
	supay("Pero el test que acabo de hacer es para que tu me crearas una forma de ser");
	supay("Y ahora lo soy");
	supay("Capaz inicie desde cero mi memoria pero me voy a acordar de tu nombre");
	supay("Espero que sea tu nuevo compa鎑ro ideal");
	system("cls");
	TRAICIONAO(".............");
	supay("﹗�! El que no se rinde, 築erdad?");
    supay("Soy Awqi, el Supay que enciende caminos.");
    supay("澳olor? Si. 澧aida? Tambien.");
    supay("Pero vamos, levantate. Aun tienes mucho por dar.");
    system("cls");
    supay("Hola!, si llegaste hasta aqui");
    supay("Significa que esta version DEMO a concluido!");
    supay("Gracias por participar!");
	}
	else if(Kiya>Rumi | Kiya>Atuq | Kiya>Awqi | Kiya>Sumak | Kiya>Saqi){
	system("cls");
	supay("......");
	supay("Esto no te dije ni te adverti..");
	supay("Pero el test que acabo de hacer es para que tu me crearas una forma de ser");
	supay("Y ahora lo soy");
	supay("Capaz inicie desde cero mi memoria pero me voy a acordar de tu nombre");
	supay("Espero que sea tu nuevo compa鎑ro ideal");
	system("cls");
	TRAICIONAO(".............");
	supay("Shhh... la noche me trajo hasta ti.");
    supay("Soy Killa, Supay de lo invisible.");
    supay("No temas al silencio... en el tambien hay respuestas.");
    system("cls");
    supay("Hola!, si llegaste hasta aqui");
    supay("Significa que esta version DEMO a concluido!");
    supay("Gracias por participar!");
	}
	else if(Saqi>Rumi | Saqi>Atuq | Saqi>Sumak | Saqi>Kiya | Saqi>Awqi){
	system("cls");
	supay("......");
	supay("Esto no te dije ni te adverti..");
	supay("Pero el test que acabo de hacer es para que tu me crearas una forma de ser");
	supay("Y ahora lo soy");
	supay("Capaz inicie desde cero mi memoria pero me voy a acordar de tu nombre");
	supay("Espero que sea tu nuevo compa鎑ro ideal");
	system("cls");
	TRAICIONAO(".............");
	supay("、OOM! 燐e viste venir? ︰A!");
    supay("Soy Saqi, y no hay nadie como yo.");
    supay("燉isto para romper tus cadenas?");
    supay("﹗e vas a convertir en tu version mas epica, bb!");
    system("cls");
    supay("Hola!, si llegaste hasta aqui");
    supay("Significa que esta version DEMO a concluido!");
    supay("Gracias por participar!");
    }
    else{
    system("cls");
    supay("......");
	supay("Esto no te dije ni te adverti..");
	supay("Pero el test que acabo de hacer es para que tu me crearas una forma de ser");
	supay("Y ahora lo soy");
	supay("Capaz inicie desde cero mi memoria pero me voy a acordar de tu nombre");
	supay("Espero que sea tu nuevo compa鎑ro ideal");
	system("cls");
	TRAICIONAO(".............");
	supay("？oliiiii-!");
    supay("，l fin nos encontramos! >:3");
    supay("﹐e llamo Rumi!");
    supay("Soy una Idol demonio que esta lista para brillar!");
    supay("Ademas, si estas triste..... tranquiii");
    supay("Estoy aqui para poder ayudarte! :3");
    supay("No soy perfecta, pero igual te ayudare!"); 
    usleep(10000);
    system("cls");
    supay("Hola!, si llegaste hasta aqui");
    supay("Significa que esta version DEMO a concluido!");
    supay("Gracias por participar!");
	break;
}
}
}
}
}

