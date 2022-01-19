#include <bits/stdc++.h>
using namespace std;

struct S
{
    vector<vector<int>> board;
    int sum;
    vector<int> rows;
    vector<int> cols;
    //bool won;
    
    S()
    {
        vector<int> count (5,0);
        rows= count;
        cols= count;
        
        //won= false;
    }
};

void display (vector<vector<int>> vec)
{
    for (int j=0; j<vec.size(); j++)
	{
	    for (int k=0; k<vec[j].size(); k++)
	    {
	        cout<<"\t"<<vec[j][k]<<"\t";
	    }
	    
	    cout<<"\n";
	}
}

int main() 
{
	// your code goes here
	int x; char ch;
	vector<int> cross;
	
	string str;
	getline(cin, str);
	stringstream sstr1(str);
	while (sstr1>>x>>ch)
	    cross.push_back(x);
	    
	
	vector<S> Boards;
	vector<vector<int>> temp;
	vector<int> vec;
	int count_vec= 0, count_temp= 0, sum= 0;
	while (cin>>x)
	{
	    vec.push_back(x);
	    sum+= x;
	    count_vec++;
	    
	    if (count_vec == 5)
	    {
	        temp.push_back(vec);
	        vec.clear();
	        count_temp++;
	        count_vec= 0;
	    }
	    
	    if (count_temp == 5)
	    {
	        //board.push_back(temp);
	        Boards.push_back (S());
	        Boards.back().board= temp;
	        Boards.back().sum= sum;
	        temp.clear();
	        count_temp= 0;
	        sum= 0;
	    }
	}
	
	/*
	//display
	cout<<"CROSS\n";
	for (auto item:cross)
	    cout<<item<<" ";
	    
	cout<<"\nBOARDS\n";
	for (auto me:Boards)
	{
	    display(mem.board);
	    cout<<"sum= "<<mem.sum;
	    
	    cout<<"\nrows= ";
	    for (auto item:mem.rows)
	        cout<<item<<" ";
	    cout<<"\ncols= ";
	    for (auto item:mem.cols)
	        cout<<item<<" ";
	    cout<<"\n\n";
	}
	*/

	for (auto num : cross)
	{
	    for (auto &item : Boards)
	    {
	        if (!item.won)
	        {
    	        bool flag= false;
    	        for (int i=0; i<item.board.size(); i++)
    	        {
    	            for (int j=0; j<item.board[i].size(); j++)
    	            {
    	                if (num == item.board[i][j])
    	                {
    	                    item.sum-= num;
    	                    //item.board[i][j]= -1;
    	                    item.rows[i]++;
                            item.cols[j]++;
    	                    
    	                    if (item.rows[i]==5 or item.cols[j]==5)
    	                    {
    	                        cout<<"\nanswer= "<<item.sum * num;
    	                        //item.won= true;
                                //only first output is required hence exit
    	                        exit(0);
    	                    }
    	                    
    	                    flag= true;
    	                    break;
    	                }
    	            }
    	            if (flag)
    	                break;
    	        }
    	    }
	    }
	}
	return 0;
}
