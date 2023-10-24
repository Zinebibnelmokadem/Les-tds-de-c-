#include <iostream>
#include <cmath>

using namespace std;
// Exercice 1:

int i=1;
void Appel(){

cout<<"appel numero  "<< i<<endl;
i++;

}

main (){

Appel();
Appel();
Appel();
}

// Exercice 2:

int multiple2(int n)
{
    if (n % 2 == 0)
    {
        cout << "il est multiple de 2" << endl;
    }
    else
    {
        cout << "il n'est pas multiple de 2" << endl;
    }
}

int multiple3(int n)
{
    if (n % 3 == 0)
    {
        cout << "il est multiple de 3" << endl;
    }
    else
    {
        cout << "il n'est pas multiple de 3" << endl;
    }
}
int programe(int n)
{
    if (n % 2 == 0)
    {
        cout << "il est pair " << endl;
    }
    else
    {
        cout << "il impair" << endl;
    }
    multiple3(n);
}

main()
{

    int n;
    cout << "donner un entier :" << endl;
    cin >> n;
    multiple3(n);
    cout << "donner un entier :" << endl;
    cin >> n;
    programe(n);
}

// Exercice 3 :

main()
{
    int T[10];
    int i;
    int max, min;
    for (i = 0; i < 10; i++)
    {
        cout << "T[" << i << "]"<< "=";
        cin >> T[i];
    }
    max = T[0];
    min = T[0];
    for (i = 1; i < 10; i++)
    {
        if (T[i] > max)
        {
            max = T[i];
        }
    }
    cout << "la plus grande valeur est " << max << endl;
    for (i = 1; i < 10; i++)
    {
        if (T[i] < min)
        {
            min = T[i];
        }
    }
    cout << "la plus petite valeur est " << min << endl;
}

main(){
int T[10];
int i;
int min , max;
int *p=T;

for (i=0;i<10;i++){
 cout<<"T["<<i<<"]"<<"=";
 cin>>*p;
 p++;
}
p=T;
min=*p;
max=*p;
for(i=1;i<10;i++){
  p++;
  if(*p<min){
    min=*p;
  }
  if(*p>max){
    max=*p;
  }
}
cout<<"le plus grande valeur est " << max<< endl;
cout<<"le plus petit valeur est " << min<< endl;
}

 // Exercice 4:
 
main(){
int n;
int i;
cout<<"entrer la taille de tableau";
cin >>n;
int *T1=new int[n];
for(i=0;i<n;i++){
    cout<<"T1["<<i<<"]=";
    cin>>T1[i];
}
int *T2=new int[n];
for(i=0;i<n;i++){
    T2[i]=T1[i]*T1[i];
}

delete[]T1;
cout<<endl;
cout<<"le tableau carre :"<<endl; 
cout<<endl;
for(i=0;i<n;i++){
 cout<<"T2["<<i<<"]=";   
 cout<<T2[i]<<endl;
}
delete[]T2;

}

// Exercice 5:
  main(){
int a=50;
int*p;
p=&a;
int &b=a;

cout<<"la valeur de a est : "<<a<<endl;
cout<<"la adresse de a est:"<<&a<<endl;
cout<<"la valeur de p est :"<<*p<<endl;
cout<<"la adresse de p est :"<<p<<endl;
cout<<"la adresse de b est :"<<&b<<endl;
cout<<"la valeur de b est :"<<b<<endl;

}
// Exercice 6 :

int incrementer(int*p){
  (*p)++;
}
int permenter(int &n1,int &n2){
    int t;
    t=n1;
    n1=n2;
    n2=t;
}

main(){
    int a =56;
    int b=30;
    cout<<"la valeur de a avant incrementer:"<<a<<endl;
     incrementer(&a);
    cout <<"la valeur de a apres incrementer est :"<<a<<endl;
    cout<<"la valeur a avant de permenter est :"<<a<<endl;
    cout<<"la valeur b avant de permenter est :"<<b<<endl;
    permenter(a,b);
     cout<<"la valeur a apres permenter est :"<<a<<endl;
     cout<<"la valeur b apres permenter est :"<<b<<endl;

}

// Exercice 7:

main(){
    int i,j,t;
    int T[10];
    for(i=0;i<10;i++){
      cout<<"T["<<i<<"]=";
      cin>>T[i];
    }
    cout<<endl;
    for(i=0;i<10;i++){
        cout<<"T["<<i<<"]=";
        cout<<T[i]<<endl;
    }
    cout<<endl;
    int c=0;
    for(i=0;i<9;i++){
     for(j=9;j>i;j--){
      
       if(T[j-1]>T[j]){
        t=T[j-1];
        T[j-1]=T[j];
        T[j]=t;
        c++;
       }
     }
    }
    cout<<endl;
    cout<<"le tableau apre le trie "<<endl;
    for(i=0;i<10;i++){
        cout<<"T["<<i<<"]=";
        cout<<T[i]<<endl;
    }
    cout<<endl;
    cout<<"le nombre d'echanges effectues est: "<<c<<endl;

}

// Exercice 8 : partie 2 

class Complexe{
public:
 double reel;
 double imaginaire;

 Complexe(double r , double i ): reel(r),imaginaire(i){}

 Complexe addition ( Complexe A){
  double reel_R = reel + A.reel;
  double imaginaire_R= imaginaire + A.imaginaire;
  return Complexe(reel_R, imaginaire_R);
 }
 Complexe soustraction(Complexe A){
   double reel_R = reel - A.reel;
   double imaginaire_R = imaginaire - A.imaginaire;
   return Complexe(reel_R, imaginaire_R);
 }
 Complexe multiplication(Complexe A){
  double reel_R = (reel * A.reel) - (imaginaire * A.imaginaire);
  double imaginaire_R = (reel * A.imaginaire) + (imaginaire *A.reel);
  return Complexe(reel_R, imaginaire_R);
}
 Complexe division(Complexe A){
  double d = A.reel * A.reel + A.imaginaire * A.imaginaire;
  double reel_R = (reel * A.reel + imaginaire * A.imaginaire) / d;
  double imaginaire_R= (imaginaire * A.reel - reel * A.imaginaire) / d;
  return Complexe(reel_R, imaginaire_R);

 }
 void afficher() {
        cout << reel << " + " << imaginaire << "i" << endl;
    }

 };

main(){
int c;
Complexe N1(0,0);
Complexe N2(0,0);
Complexe R(0,0);
cout<<"entrer la partie reel et imaginaire de premiere nombre complexe :"<<endl;
cin>>N1.reel>>N1.imaginaire;
cout<<"entrer la partie reel et imaginaire de deuxieme nombre complexe :"<<endl;
cin>>N2.reel>>N2.imaginaire;
cout<<endl;
cout<<"Menu:"<<endl;
cout<<" 1- Addition :"<<endl;
cout<<" 2- soustraction :"<<endl;
cout<<" 3- multiplication :"<<endl;
cout<<" 4- division:"<<endl;
cout<<" 5- Quiter :"<<endl;
cout<<"entrer un operation : 1 ou 2 ou 3 ou 4 ou 5 "<<endl;
cin>>c;
cout<<endl;
switch (c)
{
case 1:
 R= N1.addition(N2);
    break;
case 2:
R=N1.soustraction(N2);
    break;
case 3:
R=N1.multiplication(N2);
    break;
case 4:
R=N1.division(N2);
    break;
case 5:
cout<<"veuillez choisir un operation valable :"<<endl;
    break;            

default:
cout<<"error"<<endl;
    break;
}
cout << "Resultat :" << endl;
        R.afficher();

}

// Exercice 9:

class Animal{
  protected:
   string nom;
   int age;
 public:
  void set_value(string n , int a ){
     nom=n;
     age=a;
     
  }

};
class Zebra : public Animal{
public:
string lieuorigine;
void set_value(string n , int a, string lieu){
    nom= n;
    age=a; 
    lieuorigine=lieu;
}
void afficher(){
  cout<<"Zebra:"<<nom<< endl<<"Age:"<<age<< endl<<"lieu d'origine:"<<lieuorigine<<endl;
}

};
class Dolphin: public Animal{
public:
string lieuorigine;
void set_value(string n , int a, string lieu){
    nom= n;
    age=a; 
    lieuorigine=lieu;
}
void afficher(){
  cout<<"Dolphin: "<<nom<< endl<<"Age: "<<age<< endl<<"lieu d'origine: "<<lieuorigine<<endl;
}


};

main(){
    string no;
    int ag;
    string li;
Zebra zebra;
Dolphin dolphin;
cout<<"entrer le nom de zebra"<<endl;
cin>>no;
cout<<"entrer l'age de zebra"<<endl;
cin>>ag;
cout<<"entrer lieu d'origine de zebra"<<endl;
cin>>li;
zebra.set_value(no ,ag, li);
zebra.afficher();
cout<<"entrer le nom de dolphin"<<endl;
cin>>no;
cout<<"entrer l'age de dolphin"<<endl;
cin>>ag;
cout<<"entrer lieu d'origine de dolphine "<<endl;
cin>>li;
dolphin.set_value(no , ag, li);
dolphin.afficher();
}

// Exercice 10 :

class Personne{
 private:
 string nom;
 string prenom;
 string datenaissance;
 public:
Personne(string n , string p , string d):nom(n),prenom(p),datenaissance(d){}

   void afficher(){

  cout<<"le nom est :"<<nom<<endl;
  cout<<"le prenom est :"<<prenom<<endl;
  cout<<"la date de naissance est :"<<datenaissance<<endl;

}
};
class Employe:public Personne{
private:
double salaire;
public:
Employe(string n , string p , string d , double s):Personne(n,p,d),salaire(s){}

void afficher (){
    Personne:: afficher();
    cout<<"le salaire est :"<<salaire<<endl;
}
};
class Chef:public Employe{
private:
string service;
public:
  Chef(string n , string p , string d ,double s, string se):Employe(n,p,d,s),service(se){}

  void afficher (){
  Employe:: afficher();
  cout<<"le service est :"<<service<<endl;
}
};
class Directeur:public Chef{
private:
string societe;
public:
  Directeur(string n , string p , string d ,double s,string se, string so):Chef(n,p,d,s,se),societe(so){}

  void afficher (){
    Chef:: afficher();
    cout<<"le societe est :"<<societe<<endl;

}
};

main(){
string no,pr,ser,soc;
string dat;
double sa;
Personne personne(no,pr,dat);
cout<<"entrer le nom de personne "<<endl;
cin>>no;
cout<<"entrer le prenom de personne"<<endl;
cin>>pr;
cout<<"entrer le date de naissance de personne"<<endl;
cin>>dat;

personne.afficher();

Employe employe(no,pr,dat,sa);
cout<<"entrer le nom de employe "<<endl;
cin>>no;
cout<<"entrer le prenom de employe"<<endl;
cin>>pr;
cout<<"entrer le date de naissance de employe"<<endl;
cin>>dat;
cout <<"entrer le salaire de employe"<<endl;
cin>>sa;

employe.afficher();
cout<<endl;
Chef chef(no,pr,dat,sa,ser);
cout<<"entrer le nom de chef"<<endl;
cin>>no;
cout<<"entrer le prenom de chef"<<endl;
cin>>pr;
cout<<"entrer le date de naissance de chef"<<endl;
cin>>dat;
cout<<"entrer le salaire de chef:"<<endl;
cin>>sa;
cout<<"entrer le service de chef:"<<endl;
cin>>ser;
chef.afficher();
cout<<endl;
Directeur directeur(no,pr,dat, sa,ser,soc);
cout<<"entrer le nom de directeur:"<<endl;
cin>>no;
cout<<"entrer le prenom de directeur:"<<endl;
cin>>pr;
cout<<"entrer le date de naissance de directeur"<<endl;
cin>>dat;
cout<<"entrer le salaire de directeur:"<<endl;
cin>>sa;
cout<<"entrer le service de directeur:"<<endl;
cin>>ser;
cout<<"entrer le societe de directeur:"<<endl;
cin>>soc;
directeur.afficher();
}

// Exercice 11 :
 
class vecteur3d{
    private:
     float x;
     float y;
     float z;
    public:
    vecteur3d(float x=0.0,float y=0.0,float z=0.0):
        x(x),y(y),z(z){}
        
    void afficher(){
      cout<<"X est :"<<x<<endl<<"Y est :"<<y<<endl<<"Z est :"<<z<<endl;

    }
   vecteur3d somme ( vecteur3d A){
   float  X_e = x + A.x;
   float  Y_e = y + A.y;
   float  Z_e = z + A.z;
   return vecteur3d(X_e,Y_e,Z_e);

   } 
   vecteur3d produitscalaire ( vecteur3d A){
      float  X_e = x * A.x;
      float  Y_e = y * A.y;
      float  Z_e = z * A.z;
      return vecteur3d(X_e,Y_e,Z_e);

   }
    bool coincide ( vecteur3d A){
       
        return (x== A.x)&&(y== A.y)&&(z== A.z);
       
}
     float norme (){
    
      return  sqrt(x*x+y*y+z*z);
       
     }
    void normax( vecteur3d A){
        if(v1.norme>A.norme){
            cout<<"la norme de veteur 1 est plus grande"<<endl;
        }
        else{
            cout<<"la norme de veteur 2 est plus grande"<<endl;
        }

    }

};

main(){
    float xe,ye,ze;
    int c;
   vecteur3d v1(xe,ye,ze);
   cout<<"entrer la composante x de veteur 1 :"<<endl;
   cin>>xe;
   cout<<"entrer la composante y de veteur 1 :"<<endl;
   cin>>ye;
   cout<<"entrer la composante z de veteur 1 :"<<endl;
   cin>>ze;
   vecteur3d v2(xe,ye,ze);
   cout<<"entrer la composante x de veteur 2 :"<<endl;
   cin>>xe;
   cout<<"entrer la composante y de veteur 2 :"<<endl;
   cin>>ye;
   cout<<"entrer la composante z de veteur 2 :"<<endl;
   cin>>ze;
   cout<<endl;
   vecteur3d R;
   cout<<"Menu :"<<endl;
   cout<<" 1 Somme :"<<endl;
   cout<<" 2 produitscalaire :"<<endl;
   cout<<" 3 coincide :"<<endl;
   cout<<" 4 norm : "<<endl;
   cout<<" 5 normax :"<<endl;
   cout<<"choisir l'operation 1/2/3/4/5 :"<<endl;
   cin>>c;

   switch(c) {
    case 1:
    R=v1.somme(v2);
      break;
    case 2:
    R=v1.produitscalaire(v2);
      break;
    case 3:
    R=v1.coincide(v2);
      break;
    case 4:
    R=v1.norme();
      break;
    case 5:
    R=v1.normax(v2);
      break;
   default:
   cout<<"veuillez entrer un choix valable"<<endl;
     break;

   }
   cout<<"le Resultat est :"<<endl;
   R.afficher();

   }
   
  // Exercice 12 :
  
  class Test{
  public :
   static int c;
   void call(){
      c++;
   }
   
  };
  int Test :: c=0;
 main(){
  Test t ;
  t.call();
  t.call();
  t.call();
  cout<<"le nombre de fois que la fonction call est appeller est :"<<Test::c<<endl;

 }
   
// Exercice 13 :

  class point{
   private:
   float x;
   float y;
   public:
   point (float x , float y );
   void deplacer ( float dx , float dy);
   void afficher ();

  };
  point:: point(float x, float y){
     this->x = x;
     this->y = y;
  }
 void point::deplacer (float dx , float dy){
     x=x+dx;
     y=y+dy;
     
  }
  void point:: afficher(){

    cout<<"les coordonnes de point est :"<<x<<","<<y<<endl;
  }

main(){
  float xe ,ye , dxe,dye;
  cout<<"entrer x"<<endl;
  cin>>xe;
  cout<<"entrer y"<<endl;
  cin>>ye;
  point p(xe,ye);
   p.afficher();
   cout<<"entrer la translation de x:"<<endl;
   cin>>dxe;
   cout<<"entrer la translation de y:"<<endl;
   cin>>dye;
   p.deplacer(dxe,dye);
   p.afficher();

}

// Exercice 14:

struct Elementpile
{
  int nombre;
   Elementpile*suivante;

  Elementpile(int no){
    nombre=no;
    suivante=nullptr;
  }
};
  class Pile{
   private:
   Elementpile*p;
   public:
   Pile():p(nullptr){}
   void push(int no){
    Elementpile*nouvel=new Elementpile(no);
    nouvel->suivante=p;
    p=nouvel;
   }
   void pop(){
    if(p!=nullptr){
    Elementpile*t=p;
    p=p->suivante;
    delete t;
    }
    else{
      cout<<"la pile est deja vide"<<endl;
    }

   }
   void afficher(){
    Elementpile*actuel=p;
    while (actuel!=nullptr)
    {
      cout<<actuel->nombre<<endl;
      actuel=actuel->suivante;
    }
   }
  };

main(){
Pile P1;
Pile P2;
P1.push(1);
P1.push(2);
P1.push(3);
P1.afficher();
cout<<"la pile p2 "<<endl;
P2.push(10);
P2.push(34);
P2.push(23);
P2.afficher();
cout<<endl;
P1.pop();
P2.pop();
cout<<"apres la suppresion"<<endl;
P1.afficher();
cout<<endl;
P2.afficher();

}

// Exercice 16:

struct element
{
  int number;
  element *suivante;

  element(int n){
    number=n;
    suivante=nullptr;
  }
};
  class Liste {
    private:
    element*first;
   public:
  Liste():first(nullptr){}
   void ajouter(int n){
    element*New=new element(n);
    New->suivante=first;
    first=New;
   }
   void supprimer (){
    if(first!=nullptr){
    element*l=first;
    first=first->suivante;
    delete l;
    }
    else{
      cout<<"la liste est deja vide"<<endl;
    }

   }
   void afficher(){
    element*now=first;
    while (now!=nullptr)
    {
      cout<<now->number<<endl;
      now=now->suivante;
    }
   }
  };

main(){
Liste l1;
l1.ajouter(12);
l1.ajouter(23);
l1.ajouter(5);
l1.ajouter(10);
l1.ajouter(30);
l1.afficher();
cout<<endl;
l1.supprimer();
l1.supprimer();
l1.supprimer();
cout<<"la liste apres la suppresion :"<<endl;
l1.afficher();


}




  
