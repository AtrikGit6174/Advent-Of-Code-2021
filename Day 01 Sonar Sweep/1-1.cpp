#include <iostream>
using namespace std;

int main() 
{
	int x, count= 0;
	int d; cin>>d;
	
	while (cin >> x)
	{
	    if (d<x)
	        count++;
	   
	    d= x;
	}
	
	cout<<count;
	return 0;
}
