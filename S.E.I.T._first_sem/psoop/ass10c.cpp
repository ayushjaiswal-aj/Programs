#include<iostream>
#include<fstream>


using namespace std;

class box
{

   char name[10];
   char code[10];
   float cost;
       public:
       
               void readdata();
               void writedata();
           
};
void box::readdata()
{

     cout<<"\n Enter name:";
     cin>>name;
     cout<<"\n Enter code:";
     cin>>code;
     cout<<"\n Enter cost:";
     cin>>cost;
     
}



void box::writedata()
{
   
    cout<<"\n box name="<<name<<endl;
    cout<<"\n box code="<<code<<endl;
    cout<<"\n box cost="<<cost<<endl;
      
};



int main()
{
   
     box item[4];
     int i;
     fstream file;
     
     file.open("xyz.txt",ios::out);
     
     cout<<("\n Enter details of four items:");
     for(i=0;i<4;i++)
     {
     
         item[i].readdata();                 //accept data member in program from keyboaed
         
         file.write((char *)&item[i],sizeof(item[i]));   //write data to file
         
     }

     file.close();
    // file.seekg(0,ios::end);
     cout<<"\n Output is:";
     
file.open("xyz.txt",ios::in);
     for(i=0;i<4;i++)
     
     {
     
         file.read((char *)&item[i],sizeof(item[i]));   //read data from file 
         item[i].writedata();                   //write data on a console
         
     }
     
     file.close();
     return 0;
     
  }
        
        
        
