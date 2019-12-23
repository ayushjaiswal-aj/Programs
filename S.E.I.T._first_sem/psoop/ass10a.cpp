#include<iostream>
#include<fstream>
using namespace std;

class test
{
   public:
          void writedata();
          void readdata();
          
};

void  test::writedata()
{
    fstream fp;
    char ch;
    
    fp.open("bat.txt",ios::out);
    cin>>ch;
    
    while(ch!='.')
    {
       fp.put(ch);
       cin>>ch;
       
    }
    fp.close();
    
}
  
  void test::readdata()
  {
       fstream fp;
       char y;
       fp.open("bat.txt",ios::in);
       
       y=fp.get();
       while(!fp.eof())
       {
           cout<<y;
           y=fp.get();
           
       }
       
       fp.close();
       
 }
 
 int main()
 {
    
    test t;
    t.writedata();
    t.readdata();
    
    return 0;
 }
      
       
