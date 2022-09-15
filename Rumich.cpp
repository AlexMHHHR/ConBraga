#include <iostream>
#include <cstdlib>

using namespace std;

void es1();
void es2();
void es3();
void es4();
void es5();
void es6();
void es25();
void es29();
void es31();
void es41();
void es48();
void es54();


int main()
{
   int scelta;
   do{
    cout << "0. fine" << endl;
    cout << "1. caricare un vettore di N elementi." << endl;
    cout << "2. valore dell'indice"<<endl;
    cout << "3. Stampa la somma degli elementi del vettore"<<endl;
    cout << "4. determinare se ciascun elemento è pari o dispari"<<endl;
    cout << "5. Al primo zero del vettore stampare la somma e i valori"<<endl;
    cout << "6. Stampa la somma dei numeri pari e la somma dei numeri dispari"<<endl;
    cout << "25. Trovare la stringa di lunghezza maggiore e la sua posizione"<<endl;
    cout << "29. In un vettore trovare le parole formate da 3 lettere"<<endl;
    cout << "31. Calendario del 1990"<<endl;  
    cout << "41. Numero minore, quante volte è ripetuto e le sue posizioni"<<endl;
    cout << "48. Trovare il min e il MAX multiplo di K  e la loro posizione"<<endl;
    cout << "54. Stampare gli elenchi in ordine alfabetico delle classi."<<endl;
    

      cin >> scelta;
     switch(scelta) {
      case 0:
          cout <<"good bye"<<endl;
          break;
      case 1:
        es1();
          break;
      case 2:
        es2();
          break;
      case 3:
        es3();
          break;
      case 4:
        es4();
          break;
      case 5:
        es5();
          break;
      case 6:
        es6();
          break;
       case 25:
        es25();
          break;
       case 29:
        es29();
          break;
      case 31:
        es31();
          break;
      case 41:
        es41();
          break;
      case 48:
        es48();
          break;
      case 54:
        es54();
          break;
          
      default:
        cout << "wrong choice"<<endl;
      }
      if(scelta!=0){
        string avanti;
        cout<<"scrivi un carattere e digita invio"<<endl;
        cin>>avanti;
      }
   } while(scelta != 0);

    return 0;
}

void es1(){
  int N=5; //qua solo cinque perché dobbiamo metterli a mano
  int v[N];// cambiando i valori di N cambia la dimensione del vettore
  // Caricare un vettore di N elementi con valori letti da tastiera 
  cout<<"inserisci "<<N<<" numeri interi (premi invio dopo ogni valore) "<<endl;
  for (int i=0; i<N; i++){
    cin>> v[i];
  }
  // alla fine di ogni esercizio visualizzo il/i vettore/i
  for (int i=0; i<N; i++){
    cout<< v[i]<<" ";
  }
  cout<<"\nfatto!"<<endl;   
}

void es2(){
  int N;
  int v[N];
  cout<<"Inserisci la grandezza del vettore"<<endl;
  cin>>N;
  for (int i=0; i<N; i++){
    cout<<i<<endl;
  }
}

void es3(){
int N=5;
int v[N];
for (int i=0; i<N; i++){
  v[i]=rand() %9+1;
}
int somma=0;
for (int i=0; i<N; i++){
  somma= somma+v[i];
}
cout<<"La somma è uguale a "<<somma<<endl;


for (int i=0; i<N; i++){
   cout<< v[i]<<" ";
  }
  cout<<"\nfatto"<<endl;
}

void es4(){
  int N=10;
  int v[N];
  for (int i=0; i<N; i++){
  v[i]=rand() %99+1;
  }
  for (int i=0; i<N; i++){
    if(v[i]%2==0){
      cout<<v[i]<<" è pari"<<endl;
    }else{
      cout<<v[i]<<" è dispari"<<endl;
    }
  }
}

void es5(){
  int N=10;
  int v[N];
  int elementi=0;
  for (int i=0; i<N; i++){
  v[i]=rand() %99;
  }
  v[rand () % N] = 0;
  for (int i=0; i<N; i++){
  cout<<v[i]<<" ";
  }
  int somma=0;
  for (int i=0; i<N; i++){
    somma=somma+v[i];
    if (v[i]==0){
      elementi=i+1;
    cout<<"Sono stati trovati "<<elementi<<" elementi compreso lo zero"<<endl;
    cout<<"Somma="<<somma<<endl;
    }
  } 
}

void es6(){
  int sommaNumeriPari=0;
  int sommaNumeriDispari=0;
  int N=5;
  int v[N];
  for (int i=0; i<N; i++){
    v[i]=rand() %9+1;
  }
  for (int i=0; i<N; i++){
  cout<<v[i]<<" ";
  }
  for (int i=0; i<N; i++){
    if(v[i]%2==0){
      sommaNumeriPari=sommaNumeriPari+v[i];
      }else{
        sommaNumeriDispari=sommaNumeriDispari+v[i];
    }
  }
  cout<<"La somma dei numeri pari è: "<< sommaNumeriPari<<endl;
  cout<<"La somma dei numeri dispari è: "<< sommaNumeriDispari<<endl;
}

void es25(){
  
}

void es29(){
   int N;
  int conta=0;
  cout<<"La frase è: Non vedo l'ora che sia giugno."<<endl;
  string frase="Non vedo l'ora che sia giugno.";
  for(int i=0; i<N; i++){
    if(frase[i]!=' '||frase[i]!='.'){
      conta=conta+1;
    }else{
      if(conta==3){
        cout<<frase[i-3]<<frase[i-2]<<frase[i-1];
      }else{
        conta=0;
      }
    }
  }
}

void es31(){
   int g[8] [7];
   int giorniTotaliMese[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
   int sett = 1;
   int giornoInizio = 2;
   int giorno = 1;
   string mese[13] = {" ", "Gennaio", "Febbraio", "Marzo", "Aprile", "Maggio", "Giugno", "Luglio", "Agosto", "Settembre", "Ottobre", "Novembre", "Dicembre"};
   for (int m = 1; m < 13; m++){
      giorno= 1;
      cout << "\n| " << mese[m] << " 1990\n| D| L| M| M| G| V| S|" <<endl;
      for(int g = 1; g < giorniTotaliMese[m] + giornoInizio; g++){
            if (g < giornoInizio){
               cout << "|  ";
            }else{
               if(giorno < 10 ){
                  cout <<"| " << giorno;
               }else{
                  cout << "|" << giorno;
               }
               giorno++;
            }
            sett++;
            if (sett > 7){
               cout << "| \n";
               sett = 1;
            }
      }
      if(sett != 1){
        for (int i = sett; i <= 8; i++){
          cout << "|  ";
        }
      }
      cout << endl << endl;
      giornoInizio = sett;
      sett = 1;
   }
}

void es41(){
  int N=30;
  int v[N];
  for (int i=0; i<N; i++){
    v[i]=rand() %9+1;
  }
  for (int i=0; i<N; i++){
    cout<<v[i]<<" ";
  }
  int minore=1000000;
  int ripetizione=0;
  int posizione;
  for (int i=0; i<N; i++){
    if(v[i]<minore){
      minore=v[i];
    }
  }
  cout<<"Minimo= "<<minore<<endl;
  for (int i=0; i<N; i++){
    if(v[i]==minore){
      posizione=i+1;
      cout<<"Posizioni="<<posizione<<endl;
      ripetizione=ripetizione+1;
    }
  }
  cout<<"Ripetizioni= "<<ripetizione<<endl;
}

void es48(){
  int posizioneMinimo, posizioneMassimo;
  int N=5;
  int v[N];
  for (int i=0; i<N; i++){
    v[i]=rand() %9+1;
  }
  int k;
  cout<<"inerisci un numero"<<endl;
  cin>>k;
  int minimo=1000000;
  int massimo=0;
  for (int i=0; i<N; i++){
    if (v[i]%k==0){
      if(v[i]>massimo){
        massimo=v[i];
        posizioneMassimo=i;
      }
      if(v[i]<minimo){
        minimo=v[i];
        posizioneMinimo=i;
      }
    }
  }
  for (int i=0; i<N; i++){
    cout<<v[i]<<" ";
  }
  cout<<"Posizione multiplo massimo: "<<posizioneMassimo<<endl;
  cout<<"Valore multiplo massimo: "<<massimo<<endl;
  cout<<"Posizione multiplo minimo: "<<posizioneMinimo<<endl;
  cout<<"Valore multiplo minimo: "<<minimo<<endl;
}

string GeneraParole(int lunghezza){
  string vocali[]={"a", "e", "i", "o", "u"};
  string cons[]={"b", "c", "d", "f", "g", "l", "m", "n", "p", "r", "s", "t", "v", "z"};
  string stringa= "";
  for(int i = 0; i < lunghezza; i++){
    if(i % 2 == 0){
      stringa = stringa + cons[rand () % 14];
    }else{
      stringa = stringa + vocali[rand () % 5];
    }
  }
return stringa;
}

string GeneraClasse(int lunghezza){
  int numClasse[3] = {1,2,3};
  string letClasse[5] = {"A","B","C","D","E"};
  string classe= "";
  for(int i = 0; i < lunghezza; i++){
    if(i % 2 == 0){
      classe = classe + to_string(numClasse[rand() % 3]);
    }else if(i % 2 != 0){
      classe = classe + letClasse[rand() % 5];
    }
  }
  return classe;
}
       
void es54(){
   struct struct_Studenti{
    string nome;
    string classe;
  };

  int N = 100;
  int lunghezza = 6;
  struct_Studenti Studenti[N];
  struct_Studenti tmp;
  for(int i = 0; i < N; i++){
    Studenti[i].nome = GeneraParole(lunghezza);
    Studenti[i].classe = GeneraClasse(2);
  } 
  cout << "Nomi e classi degli studenti:\n";
  for(int i = 0; i < N; i++){
    cout << Studenti[i].nome << "  " << Studenti[i].classe << "  ";
  }
  cout << endl;
  for(int i = 0; i < N; i++){
      for(int j = 0; j < N; j++){
        if(Studenti[i].classe.substr(0,1) < Studenti[j].classe.substr(0,1)){
          tmp = Studenti[i];
          Studenti[i] = Studenti[j];
          Studenti[j] = tmp;
        }
      }
  }
  for(int i = 0; i < N; i++){
    for(int j = 0; j < N; j++){
      if(Studenti[i].classe.substr(0,1) == Studenti[j].classe.substr(0,1)){
        if(Studenti[i].nome < Studenti[j].nome){
          tmp = Studenti[i];
          Studenti[i] = Studenti[j];
          Studenti[j] = tmp;
        }
      }
    }
  }
  cout << "\nElenchi in ordine alfabetico:\n"; 
  for(int i = 0; i < N; i++){
    cout << Studenti[i].nome << "  " << Studenti[i].classe << "  ";
  }
}