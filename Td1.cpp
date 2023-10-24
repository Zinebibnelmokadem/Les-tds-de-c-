#include <iostream>
#include <iomanip>

using namespace std;


  // Exercice 9:
  main(){
  int n;
  int i;
  float s;
  cout << "entrer un valeur de n:";
  cin >> n;
  s=0;
  for (i = 1; i <= n; i++)
  {
      s = s + (float)1/i ;
  }
  cout << "la somme s est :" << s << endl;
  }

 // Exercice 10:
 
 main(){
  int u1=1,u2=1;
 int un ,n;
 cout<<"entrer un valeur de n:";
 cin>>n;
 for(int i=2;i<=n;i++){
      un=u2+u1;
      u1=u2;
      u2=un;

 }
 cout<<"un="<<un<<endl;
 }
 
  // Exercice 11:
  main(){
    int i,j,N,k;
    cout<<"entrer le nombre de ligne"<<endl;
    for(i=0;i<N;i++){
      for(k=1;k<N-i;k++){
        cout<<" ";
      }
     for(j=0;j<2*i+1;j++){
      cout<<" * ";
     }
      
     cout<<endl;
     
    }

  }
   
 
// Exercice 12:

main(){
  int i,j,k;
   cout<<"   I";
     for(i=1;i<=10;i++){
       cout<< setw(5) <<i;
     }
     cout<<endl;
     for(i=1;i<=10;i++){
       cout<<"----------";
     }
     cout<<endl;
    
     for(j=1;j<=10;j++){
        cout<<j;
        cout<< setw(4)<<" I ";
        for(i=1;i<=10;i++){
          cout<< setw(5)<<i*j;
        }
        cout<<endl;
     }
}


     
     
    
