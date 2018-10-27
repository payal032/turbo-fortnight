
#include <iostream>
using namespace std;
int main() {
    int n,k,i,b;
    cin>>n>>k;
    int a[n],sum=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    cin>>b;
    sum=sum-a[k];
    sum=sum/2;
    if(sum==b)
        cout<<"Bon Appetit";
    else
        cout<<b-sum;
    return 0;
}
