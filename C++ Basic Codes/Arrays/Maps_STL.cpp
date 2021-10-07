//Hackerrank solution of Map STL




#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string,int>m;
     map<string,int>::iterator it;
    int q,y;
    int c;
    string x;
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>c;
        switch(c)
        {
            case 1:cin>>x>>y;
           // m.insert(make_pair(x,y));
            m[x]+=y;
            break;
            case 2:cin>>x;
            m.erase(x);
            break;
            case 3:cin>>x; 
             it = m.find(x);
            if (it != m.end()) {
                cout << it->second << endl;
            } else {
                cout << 0 << endl;
            }
            break;
           default: break;
        }
        

    }
    
    return 0;
}


