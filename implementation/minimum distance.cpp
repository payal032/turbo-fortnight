#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n,x;int y=0;int z=0;
    cin >> n;int b[n];
 int A[n];int i;
    for(int i = 0;i < n;i++){
       cin >> A[i];
        
    }
    for( i = 0;i < n;i++)
    { 
    for(int j=i+1;j<n;j++)
    {
        if(A[i]==A[j] and i!=j)
        {
       x=abs(i-j);
        b[y++]=x;
            z++;
        }
            
    }
    }  
    int smallest = b[0];
for ( i = 0; i < z; i++)
{
    if (b[i] < smallest)  
    {
        smallest = b[i]; 
    }
}
    
   
     if(z>0)
         cout<<smallest;
    else
         cout<<"-1";
     
    
 
    return 0; 
} 
