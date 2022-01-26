#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>

using namespace std;

int main() 
{
    int x;
    long long int count= 0;
    map <int, long long int> mp; //birth day:no. of new fish
    int reqd_days= 80;
    while (cin) //entry at day 0
    {
        count++;
        cin>>x;
        if (!cin)
            break;
        cin.ignore(1); // ,
        
        //cout<<x<<"\n";
        int days= x+1;
        while (days<=reqd_days)
        {
            mp[days]++;
            //cout<<days<<": "<<mp[days]<<"\n";
            days+= 7;
        }
    }
    //cout<<"\n";
    
    count--;
    for (auto it=mp.begin(); it!=mp.end(); it++) //
    {   
        //cout<<it->first<<": "<<it->second<<"\n";
        count+= it->second;
        auto days= it->first+9;
        while (days<=reqd_days)
        {
            mp[days]+= it->second;
            days+= 7;
        }
    }
    
    cout<<count;
    return 0;
}