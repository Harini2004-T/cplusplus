#include <iostream>
using namespace std;
int main()
{
string emailid,location;
int report;
  cout<<"         WEATHER APP    \n";
/*Name: T.Harini
  College name: vivekanandha college of engineering for women
  data's used:email id,location
  methods used:switch
  */
   
   cout<<"enter the emailid:"<<endl;
   cin>>emailid;
   cout<<"enter the location:"<<endl;
   cin>>location;
   cout<<"report"<<endl;
   cin>>report;
   switch(report)
   {
   case 1:
   cout<<"today \n";
   cout<<"temperature is 25°";
   cout<<"cloudy";
   break;
   case 2:
   cout<<"tommorow \n";
   cout<<"temperature is 50°";
   cout<<"dry";
   break;
   case 3:
   cout<<"yesterday \n";
   cout<<"temperature is 75°";
   break;
   case 4:
   cout<<"week days \n";
   cout<<"Monday-22° rainy \n";
   cout<<"Tuesday-30° \n";
   cout<<"Wednesday-46° \n";
   cout<<"Thursday-70° \n";
   cout<<"Friday-85°\n";
   break;
   default:
   cout<<"invalid";
   break;
   }
}
   