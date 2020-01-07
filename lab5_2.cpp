#include<iostream>
#include<string>
using namespace std;

void mixText(string a,string b)
{
	int n=a.size(),m=b.size();
	int i=0;
	
	if(n==m)
	{	
		while(i<n)
		{
		cout << a[i];
		cout << b[i];
		i++;
		}
	}
	else
	{
		cout<<"E";
	}
}
	

int main(){	
	mixText("AAA","BBB") ;
	cout << "\n";
	mixText("Hello","World") ;
	cout  << "\n";
	mixText("SOTUS","CHEER") ;
	cout  << "\n";
	mixText("1234","5678") ;
	cout  << "\n";
	mixText("6","9") ;
	cout  << "\n";
	mixText("XXXXXXX","YYY") ;
	cout  << "\n";	
	mixText("Y","XX") ;
	cout  << "\n";	
	
	return 0;	
}
