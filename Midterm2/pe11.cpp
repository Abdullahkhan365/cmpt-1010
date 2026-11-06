#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    const int Divisions =3;
    const int Quarter =4;
    double Sales[Divisions][Quarter];

    double Total_division_sales;
    double Total_quarter_sales;
    double Total_annual_sales=0;

    for(int rows =0; rows < Divisions; rows++)
    {
        for(int columns =0; columns < Quarter; columns++)
        {
            cout<<"What is the  sales for Division "<<rows+1<<" Quarter "<<columns+1<<" : ";
            cin>>Sales[rows][columns];

        }
    }


    cout<<"\nAnnual Sales by Division:\n";
    for(int rows =0; rows < Divisions; rows++)
    {
        Total_division_sales =0;
        for(int columns =0; columns < Quarter; columns++)
        {
            Total_division_sales += Sales[rows][columns];
            

            
            

        }

        Total_annual_sales += Total_division_sales;
        cout<<"Division "<<rows+1<<":  "<<Total_division_sales<<endl;;
    }


    cout<<"\nAnnual Sales by Quarter:\n";

    for(int columns =0; columns < Quarter; columns++)
    {
        Total_quarter_sales =0;
        for(int rows =0; rows < Divisions; rows++)
        {
            Total_quarter_sales += Sales[rows][columns];
            
            

        }

        cout<<"Quarter "<<columns+1<<":  "<<Total_quarter_sales<<endl;
    }

    cout<<"Total Annual Sales for the Company: "<<Total_annual_sales;
   

    



    return 0;
}