#include <iostream>
#include <map>
#include <utility>
using namespace std;

int main() 
{
	string str1, str2, str3;
	map <pair<int, int>, int> mp;
	
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
	    
	    if (x1 == x2)   //x=c
	    {
	        auto mini= min(y1, y2);
	        auto p= make_pair(x1, mini);
	        auto maxi= max(y1, y2);
	        while (p.second<=maxi)
	        {
	            mp[p]++;
	            p.second++;
	        }
	    }
	    
	    else if (y1 == y2)  //y=c
	    {
	        auto mini= min(x1, x2);
	        auto p= make_pair(mini, y1);
	        auto maxi= max(x1, x2);
	        while (p.first<=maxi)
	        {
	            mp[p]++;
	            p.first++;
	        }
	    }
	    
	    else if (y1-x1 == y2-x2)    //y=x+c
	    {
	        auto c1= y1-x1;
	        //auto c2= y2-x2;
	        auto p1= make_pair (x1, y1);
	        auto p2= make_pair (x2, y2);
	        
	        if (y2 != max(y1, y2))
	            swap (p1, p2);
	        // this ensures that p2.y >= p1.y
	        
	        //cout<<"c1= "<<c1<<" c2= "<<c2<<" P1("<<x1<<", "<<y1<<") P2("<<x2<<", "<<y2<<")\n";
	        for (int i= p1.second; i<=p2.second; i++)
	        {
	            auto p= make_pair(i-c1, i);
	            mp[p]++;
	        }
	        
	    }
	    
	    else    //y=-x+c
	    {
	        auto c1= y1+x1;
	        //auto c2= y2-x2;
	        auto p1= make_pair (x1, y1);
	        auto p2= make_pair (x2, y2);
	        
	        if (y2 != max(y1, y2))
	            swap (p1, p2);
	        // this ensures that p2.y >= p1.y
	        
	        //cout<<"c1= "<<c1<<" c2= "<<c2<<" P1("<<x1<<", "<<y1<<") P2("<<x2<<", "<<y2<<")\n";
	        for (int i= p1.second; i<=p2.second; i++)
	        {
	            auto p= make_pair(c1-i, i);
	            mp[p]++;
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
	
	int count= 0;
	for (auto i:mp)
	{
	    if (i.second > 1)
	        count++;
	}
	cout<<count;
	return 0;
}
