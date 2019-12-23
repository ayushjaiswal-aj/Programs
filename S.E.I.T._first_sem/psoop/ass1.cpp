#include <iostream>
#include <iomanip>

using namespace std;

class weather
{
public:
	int day_of_month,high_temp;
	int low_temp,amount_rain, amount_snow;
	weather()                                     //default constructor
	{
		day_of_month=99;
		high_temp=999;
		low_temp=-999;
		amount_rain=0;
		amount_snow=0;
	}
	
	weather(int day, int ht, int lt, int amtrain, int amtsnow)               //parameterized constructor    
	{
	
	        day_of_month=day;
		high_temp=ht;
		low_temp=lt;
		amount_rain=amtrain;
		amount_snow=amtsnow;
	
	}
	
	weather(weather &w)                                               //Copy constructor
	{
	
		day_of_month=w.day_of_month;
		high_temp=w.high_temp;
		low_temp=w.low_temp;
		amount_rain=w.amount_rain;
		amount_snow=w.amount_snow;
	
	}
	void getdata()
	{
		cout<<"\nEnter Day of Month :";
		cin>>day_of_month;

		cout<<"Enter Highest Temperature :";
		cin>>high_temp;

		cout<<"Enter Lowest Temperature :";
		cin>>low_temp;

		cout<<"Enter Amount Rain :";
		cin>>amount_rain;
		
		cout<<"Enter Amount Snow :";
		cin>>amount_snow;
	}
	void display()
	{
		cout<<setw(10)<<day_of_month<<setw(10)<<high_temp<<setw(10)<<low_temp<<setw(10)<<amount_rain<<setw(10)<<amount_snow;
	}
};

int main()
{  
        weather w1(1,1,1,1,1);	//parameterized constuctor get called
        weather w2(w1);	//copy constructor get called
	weather w[31];	//default constructor get called
	int ch,n=0,i;
float alow_temp=0,ahigh_temp=0;
float aamount_rain=0, aamount_snow=0;
	do
	{
		cout<<"\nEnter choice \n1.Enter Data\n2.Display Data\n3:Exit :";
		cin>>ch;
		switch(ch)
		{
			case 1: cout<<"Enter no of days you want to enter\n";
					cin>>n;
					cout<<"\nEnter Data";
					for (i=0; i<n;i++)
					{
						w[i].getdata();
					}
					break;
					
			case 2: cout<<setw(10)<<"DayOfMonth"<<setw(10)<<"HighTemp"<<setw(10)<<"LowTemp"<<setw(10)<<"Rainfall"<<setw(10)<<"SnowFall";
					cout<<"\n";
					for (i=0;i<n;i++)
					{
						w[i].display();
						cout<<"\n";
					}
		for (i=0;i<n;i++)
			{
			ahigh_temp=ahigh_temp+w[i].high_temp;
			alow_temp=alow_temp+w[i].low_temp;
			aamount_rain=aamount_rain+w[i].amount_rain;
			aamount_snow=aamount_snow+w[i].amount_snow;
			}
			ahigh_temp=ahigh_temp/n;
			alow_temp=alow_temp/n;
			aamount_rain=aamount_rain/n;
			aamount_snow=aamount_snow/n;
		cout<<setw(10)<<"Average"<<setw(10)<<ahigh_temp<<setw(10)<<alow_temp<<setw(10)<<aamount_rain<<setw(10)<<aamount_snow;
		}
	}while(ch!=3);
return 0;
}



