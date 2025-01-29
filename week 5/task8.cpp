#include<iostream>
using namespace std;

int calculatevolleyballgames(string year,float hol,float week);


int main(){
string year;
int hol,week;


 cout<<"Enter year type: ";
 cin>>year;
cout<<"Enter the number of holidies: ";
cin>>hol;
cout<<"Enter the number of weekends at home: ";
cin>>week;



calculatevolleyballgames(year,hol,week);
return 0;


}



int calculatevolleyballgames(string year,float hol,float week){

    if (year=="leap"||year=="LEAP")

    {
        float calculationleap;
        int f;
        calculationleap=((48-week)*3/4+week+hol*2/3);
     calculationleap=calculationleap+(15*((48-week)*3/4+week+hol*2/3)/100);
     f= calculationleap;
        cout<<f;
    }
    
    if (year=="normal"||year=="NORMAL")

    {
        int calculationlnormal;
         calculationlnormal=((48-week)*3/4+week+hol*2/3);
         cout<<calculationlnormal;
    }
    

}
