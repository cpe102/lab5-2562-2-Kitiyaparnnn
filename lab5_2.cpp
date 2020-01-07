#include<iostream>
#include<string>
using namespace std;

string mixText(string a,string b)
{
	int l1=a.size(),l2=b.size();
	if(l1!=l2)
	{
		return "E";
	}
	int i=0;
	string y="";
	while(i<l1)
	{
		y = y + a[i] + b[i];
		i++;
	}
	return y;

}
//void mixText(string a,string b)
//{
//	int n=a.size(),m=b.size();
//	int i=0;
	
//	if(n==m)
//	{	
//		while(i<n)
//		{
//		cout << a[i];
//		cout << b[i];
//		i++;
//		}
//	}
//	else
//	{
//		cout<<"E";
//	}
//	}
	

int main(){	
	cout<<mixText("AAA","BBB") ;
	cout << "\n";
	cout<<mixText("Hello","World") ;
	cout  << "\n";
	cout<<mixText("SOTUS","CHEER") ;
	cout  << "\n";
	cout<<mixText("1234","5678") ;
	cout  << "\n";
	cout<<mixText("6","9") ;
	cout  << "\n";
	cout<<mixText("XXXXXXX","YYY") ;
	cout  << "\n";	
	cout<<mixText("Y","XX") ;
	cout  << "\n";	
	
	return 0;	
}
