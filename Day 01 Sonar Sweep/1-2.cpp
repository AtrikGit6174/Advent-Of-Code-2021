#include <iostream>
using namespace std;

int main() 
{
	// your code goes here
	int x, count= 0;
	
	int arr[3];
	
    for (int i=0; i<3; i++)
    {
        cin>>arr[i];
    }
	
	while (cin >> x)
	{
	    if (x>arr[0])
	        count++;
	    
        arr[0]= arr[1];
        arr[1]= arr[2];
        arr[2]= x;
	}
	cout<<count;
	return 0;
}
