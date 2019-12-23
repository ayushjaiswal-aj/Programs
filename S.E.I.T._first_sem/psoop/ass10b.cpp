#include<iostream>
#include<fstream>
using namespace std;

class test
{

    public:
          int empid;
          char name[10];
          char pos[10];
          char dob[10];
          char data[110];
          
          void writedata();
          void readdata();
          
};

void test::writedata()
{
     fstream fp;
     char ch;
     
     cout<<"\n employee id:";
     cin>>empid;
     cout<<"\n employee name:";
     cin>>name;
     cout<<"\n employee pos:";
     cin>>pos;
     cout<<"\n employee dob:";
     cin>>dob;
     fp.open("it.txt",ios::out|ios::app);
     fp<<"employee id="<<empid<<endl;
     fp<<"employee name="<<name<<endl;
     fp<<"employee pos="<<pos<<endl;
     fp<<"employee dob="<<dob<<endl;
     
     
     fp.close();
}

void test::readdata()
{
      fstream fp;
      
     fp.open("it.txt",ios::in);
     
     
     while(!fp.eof())
     {
        fp.getline(data,110);
        cout<<data<<endl;
        
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



     
     
