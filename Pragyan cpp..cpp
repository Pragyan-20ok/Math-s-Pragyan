# include <iostream>
using namespace std;

//this code is developed by Pragyan Gogoi

int main(){
	double temperature;
	char unit;
	
	cout <<"Enter temperature followed by unit (c  for celsius, F for Fahrenheit):";
	cin>> temperature>>unit;
	
	if (unit =='c'|| unit == 'c'){
		//celsius to fahrenheit
		double fahrenheit=(temperature*9.0/5.0)+32;
		cout <<temperature<<"°C is " << fahrenheit << "°F" << endl;
	}else if (unit=='F'){
		//Fahrenheit to celsius
	double celsius=(temperature-32)*5.0/9.0;
	 cout << temperature << "°F is " << celsius << "°C" << endl;
}else{
	cout<<"Invalid unit entered.Please use 'C' for celsius or 'F' for Fahrenheit." << endl;
    }

    return 0;
}
