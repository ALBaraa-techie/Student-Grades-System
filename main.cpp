#include <iostream>
using namespace std;
int main(){system("cls");

   int number;
   cout<<"Enter the number Of student please :\n ";
   cin>>number;

    string Name[number];
    cout<<"Enter the name for every student : \n";
   for(int x=0; x<number; x++){
      cin>>Name[x];
   }
   int Grades[number][2];
   cout<<"Enter the grades to every student in 2 material : \n";
   for(int x=0; x<number;x++){
      for(int u=0; u<2; u++){
          cin>>Grades[x][u];
      }cout<<"....................\n";
   }
   int Themax=-1;
   string theTopName="";

   for(int x=0; x<number; x++){
      int sum=0;
      for(int u=0; u<2; u++){
         sum+=Grades[x][u];
               cout<<Name[x];
          cout<<" Your Grade is {"<<Grades[x][u]<<"} In material NUMber--> "<<u+1<<endl;
          
          
      } cout<<" Total = "<<sum;
      cout<<endl;
      if(sum>=100){
            cout<<"Status: Passed ";
          }
          else{
            cout<<"Status: Failed";
          }
          cout<<endl;
          cout<<"..............\n";
          if(Themax<sum){
            Themax=sum;
            theTopName=Name[x];
          }
         }
   //"The Top Student is: [Name] with Total: [Sum]"
   cout<<"The Top Student is: ["<<theTopName<<"] with Total: ["<<Themax<<"]";
   return 0;}
