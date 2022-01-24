#include <iostream>
#include <map>
#include <utility>
using namespace std;

int main() 
{
	// your code goes here
	string str1, str2, str3;
	map <pair<int, int>, int> mp;
	int count= 0;
	while (cin) 
	{
		int x1, y1, x2, y2;
		cin >> x1;
		if (!cin)
			break;
		cin.ignore(1); // ","
		cin >> y1;
		cin.ignore(4); // " -> "
		cin >> x2;
		cin.ignore(1); // ","
		cin >> y2;
	    
	    if (x1 == x2)
	    {
	        auto mini= min(y1, y2);
	        auto p= make_pair(x1, mini);
	        auto maxi= max(y1, y2);
	        while (p.second<=maxi)
	        {
	            mp[p]++;
	            if (mp[p] == 2)
	                count++;
	            p.second++;
	        }
	    }
	    
	    else if (y1 == y2)
	    {
	        auto mini= min(x1, x2);
	        auto p= make_pair(mini, y1);
	        auto maxi= max(x1, x2);
	        while (p.first<=maxi)
	        {
	            mp[p]++;
	            if (mp[p] == 2)
	                count++;
	            p.first++;
	        }
	    }
	}
	
	/*
	//display
	cout<<"MAP\n";
	for (auto i:mp)
	{
	    cout<<i.first.first<<", "<<i.first.second<<" : "<<i.second<<"\n";
	}
	*/
	cout<<count;
	return 0;
}
