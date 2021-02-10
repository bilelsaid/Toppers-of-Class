#include <set>
#include<iostream>
#include <iterator>
#include <string>
#include <map>
#include <vector>


using namespace std;
int main()
{
	// Empty set container
    set<int, greater<int>> S1; 
    set<int, greater<int>>::iterator ITS1; 
    map<int, vector<int>, greater<int>> M1;
    map<int, vector<int>, greater<int>>::iterator ITM1;

    // Fill S1
    S1.insert(82);
    S1.insert(73);
    S1.insert(11);
    S1.insert(82);
    S1.insert(8);

    //Print S1;
    cout <<"****************"<<endl<<"Printing S1 set:"<<endl<<"****************"<<endl;
    for(ITS1=S1.begin();ITS1!=S1.end();ITS1++)
    {
        cout<<*ITS1<<" ";
    }
    cout<<endl;

    //Fill M1;
    M1.insert(pair<int, vector<int>>(10,vector<int>()));
    M1[10].push_back(1);
    M1[10].push_back(78);
    M1[10].push_back(25);
    M1[10].push_back(97);
    M1[10].push_back(13);
    M1[10].push_back(27);
 
     //Print S1;
    cout <<"****************"<<endl<<"Printing M1 map:"<<endl<<"****************"<<endl;
    cout << "KEY\tELEMENT\n";
    for(ITM1=M1.begin();ITM1!=M1.end();ITM1++)
    {
        cout << ITM1->first << '\t';
        for (vector<int>::iterator itvec=ITM1->second.begin(); itvec!=ITM1->second.end();itvec++)
        {
            cout<< *itvec << " ";
        }
    }
    cout<<endl;

    return 0;
}