  //A program suitable for any school or educational academy
#include <iostream>
using namespace std;
 void prinTN(){
   cout<<"Thank you for using that. Good luck.";
 }
string getFinalStatus(int Total){
    if(Total>=100){
        return "Excellent";
    }
    else{
        return "Needs Improvement";
    }
 }
int main(){

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
      }cout<<endl;
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
         
          if(Themax<sum){
            Themax=sum;
            theTopName=Name[x];
          }
          cout<<"The Final Status is "<<getFinalStatus(sum)<<endl;
           cout<<"-------------------\n";
         }    
            
   cout<<"The Top Student is: ["<<theTopName<<"] with Total: ["<<Themax<<"]";
   cout<<endl;
   prinTN();

return 0;
}
