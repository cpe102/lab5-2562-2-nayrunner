#include<iostream>
#include<string>
using namespace std;

string mixText(string x ,string y)
{
	if(x.size() != y.size()){
	return"E" ;}
	else{
		int i=0;
		string s;
		while(i< x.size()){
			s= s+ x[i]+y[i];
			i++;
		}
		return s;
	}
}



int main(){	
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	
	
	return 0;	
}