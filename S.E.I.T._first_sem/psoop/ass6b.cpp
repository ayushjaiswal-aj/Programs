//Program for multiple catch!!(for exception handling...)
#include<iostream>
using namespace std;

void Test(int x)
{
    try
    {
        if(x==1)
        throw x;
        else
        if(x==0)
        throw 'x';
        else
        if(x==-1)
        throw (1.0);
    }

    catch(char c)                               //Use of multiple catch()...
    {
        cout<<"Caught char!!"<<endl;
    }
    catch(int f)
    {
        cout<<"Caught int!!"<<endl;
    }
    catch(float d)
    {
        cout<<"Caught double!!"<<endl;
    }

}

int main()                                          //main() function...
{
    cout<<"Testing multiple catch...\n";
    cout<<"x==1"<<endl;
    Test(1);

    cout<<"x==0"<<endl;
    Test(0);

    cout<<"x==-1"<<endl;
    Test(-1);
}

     

  return 0;
}
