#include<iostream>
#include<string>
#include<sstream>
#include<iomanip>
#include<stdlib.h>
// Hospital Data Management using Structure,string ,switch , loop & function
using namespace std;
// structure for Doctor*/
struct Doctor
{
    string d1;
    string d2;
    int d3;
    int d4;
};
Doctor InputDoc() 
{
system("cls");
Doctor d;
cout<<"Enter First name of Doctor For Patient";
cin>>d.d1;
cout<<"Enter Second name of Doctor For Patient";
cin>>d.d2;
cout<<"Enter Id";
cin>>d.d3;
cout<<"Enter Phone number";
cin>>d.d4;
return(d);
}



struct Patient
{
    string p1;//patid
    string p2;//fir name
    string p5;//sec name
    int p3;//age
    string p4;//gender
};
// Input Patient Details
Patient Inputpat()
{
 Patient p;
  //Address a;
system("cls");
cout<<"Patient ID=";
cin>>p.p1;
cout<<"Patient First Name=";
cin>>p.p2;
cout<<"Patient Last Name=";
cin>>p.p5;//pateint last name
cout<<"Enter age=";
cin>>p.p3;
cout<<"Patient Gender=";
cin>>p.p4;
return (p);
}
//case4
int displaydoc(Doctor d)
{
	cout<<"Name="<<d.d1<<" "<<d.d2<<"\t"<<"Staff ID="<<d.d3<<"\t"<<"Phone Number="<<d.d4;
}

// Display Patient Details
void displayRecord(Patient p,Doctor d)
{

     // setw is used to set the data width
    system("cls");
	cout<<"\nPatient Record Management System"<<endl;
    cout<<"*******************************"<<endl
    <<"\t"<<"PatientID="<<p.p1<<"\t"<<"Name "<<p.p2<<" "<<p.p5
    <<"\t"<<"Age="<<p.p3<<"\t"<<"Gender="<<p.p4<<"\t"
    <<"Attend By"<<" "<<"Dr."<<d.d1<<" "<<d.d2<<"ID="<<d.d3;
    cout<<"\n===================================\n";
    
}
int main()
{
    Patient p;
    Doctor d;
    int i;
    //int rec[];
    

    while(1)// loop will exit if we input any number >4
    {
        cout<<"\n\t>>>>>>>>>>>>>>>>>>>>>>>>>>";
		cout<<"\n\tHOSPITAL MANAGEMENT SYSTEM\t";
		cout<<"\n\t<<<<<<<<<<<<<<<<<<<<<<<<<<\n\n";
		std::string ch2[4]={"Input Patient Details","Input Doctor Details","Display Patient Details","Display Doctor Details"};
		  //cout<<"\n 1. Input Patient Details";
          //cout<<"\n 2. Input Doctor Details";
          //cout<<"\n 3. Display Patient Details";
          //cout<<"\n 4. Display Doctor Details";
        for(int j=0;j<4;j++)
	{
		cout<<"\t"<<j+1<<"."<<ch2[j]<<"\n";
	}
		  cout<<"Enter your choice=";
		  cin>>i;
          switch(i)
          {
              case 1:
				   p=Inputpat();
				   d=InputDoc();
                   break;
              case 2:
                    d=InputDoc();
                    break;
                case 3:
                    displayRecord(p,d);
                    break;
                case 4:
                    displaydoc(d);
                    break;
                default:
                    exit(0);
                }

}
}
