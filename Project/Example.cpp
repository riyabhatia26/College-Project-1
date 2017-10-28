#include <iostream>
#include <fstream>
using namespace std;

int main () 
{
	int ch,ch1;
	string line;
	cout<<"MBA College Details";
	cout<<"\n------------------";
	cout<<"\n\n1.India\n2.Outside India";
	cout<<"\n\nEnter your choice:";
	cin>>ch;
	if(ch==1)
	{
		cout<<"\n\n1.Business Today\n2.Business World\n3Careers360\n4.Ed Universal\n5.Indian Express\n6.Outlook India\n7.Times\n";
		cout<<"\n\nEnter your choice:";
		cin>>ch1;
		if(ch1==1)
		{
			 ifstream myfile1("BusinessT16.txt");
 			 if (myfile1.is_open())
 			 {
  				  while ( getline (myfile1,line) )
   				 {
      				cout << line << '\n';
   				 }
    				myfile1.close();
  		   	}

 			 else cout << "Unable to open file"; 
		}
		if(ch1==2)
		{
			 ifstream myfile1("BusinessW16.txt");
 			 if (myfile1.is_open())
 			 {
  				  while ( getline (myfile1,line) )
   				 {
      				cout << line << '\n';
   				 }
    				myfile1.close();
  		   	}

 			 else cout << "Unable to open file"; 
		}
		if(ch1==3)
		{
			 ifstream myfile1("Career16.txt");
 			 if (myfile1.is_open())
 			 {
  				  while ( getline (myfile1,line) )
   				 {
      				cout << line << '\n';
   				 }
    				myfile1.close();
  		   	}

 			 else cout << "Unable to open file"; 
		}
		if(ch1==4)
		{
			 ifstream myfile1("EdUnivT16.txt");
 			 if (myfile1.is_open())
 			 {
  				  while ( getline (myfile1,line) )
   				 {
      				cout << line << '\n';
   				 }
    				myfile1.close();
  		   	}

 			 else cout << "Unable to open file"; 
		}
		if(ch1==5)
		{
			 ifstream myfile1("IndExp16.txt");
 			 if (myfile1.is_open())
 			 {
  				  while ( getline (myfile1,line) )
   				 {
      				cout << line << '\n';
   				 }
    				myfile1.close();
  		   	}

 			 else cout << "Unable to open file"; 
		}
		if(ch1==6)
		{
			 ifstream myfile1("OutInd16.txt");
 			 if (myfile1.is_open())
 			 {
  				  while ( getline (myfile1,line) )
   				 {
      				cout << line << '\n';
   				 }
    				myfile1.close();
  		   	}

 			 else cout << "Unable to open file"; 
		}
		if(ch1==7)
		{
			 ifstream myfile1("Times16.txt");
 			 if (myfile1.is_open())
 			 {
  				  while ( getline (myfile1,line) )
   				 {
      				cout << line << '\n';
   				 }
    				myfile1.close();
  		   	}

 			 else cout << "Unable to open file"; 
		}
	}
//  ofstream myfile;
//  myfile.open ("example.txt",ios::out);
//  myfile << "Writing to this file.\n";
//  myfile.close();
//  string line;
//  ifstream myfile1 ("example.txt");
//  if (myfile1.is_open())
//  {
//    while ( getline (myfile1,line) )
//    {
//      cout << line << '\n';
//    }
//    myfile1.close();
//  }
//
//  else cout << "Unable to open file"; 
}

