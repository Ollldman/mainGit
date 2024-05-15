#include <iostream>
#include <cmath>
using namespace std;

class Calculator
{
    private:
        int day,
            month,
            year;
    public:
        void message(){
            cout<<"Messege of calculator\n";
      }
         double stepen(double a, double b){
            return (pow(a,b)+5);
      }
        void setDate(int date_day, int date_month, int date_year){
            day = date_day;
            month = date_month;
            year = date_year;
        }
        void getDate(){
            cout<<"Date: "<<day<<"."<<month<<"."<<year<<"\n";
        }
};

int main(){
    double a = 3.13;
    double b = 4.12;
    int day,month,year;
    cout<<"Enter date: ";
    cin>>day>>month>>year;
    Calculator objCalc;
    objCalc.message();
    cout<<"pow: "<<objCalc.stepen(a,b)<<endl;
    objCalc.setDate(day, month, year);
    objCalc.getDate();
    return 0;
}
