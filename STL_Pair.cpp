#include <bits/stdc++.h>
using namespace std;

int main (int argc,char *argv[] ) {
    pair<int,string>p(1,"Samyak");
    //cout<<p.first<<endl;
    //cout<<p.second<<endl;
    p.first=2; //manipulate data is allowed
    p.second="Mishra";
    pair<int,pair<int,int>> q(1,{2,3});
    //cout<<q.first<<endl;
    //cout<<q.second.first<<endl;
    //cout<<q.second.second<<endl;
    pair<int, int> arr[] = {{1, 2}, {4, 1}, {5, 2}};
    //This initialises a pair of 2 members, but of array type meaning an array will be 
    //there that can have many number of elements but
    //every and each element can have only 2 items(a pair)
    cout<<arr[1].first<<endl;
    cout<<arr[1].second<<endl;
    return 0;
}