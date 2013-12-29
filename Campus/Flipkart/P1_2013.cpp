/* Program : http://www.spoj.com/problems/MSE06H/
   Written By : Akey-
*/


#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<algorithm>
using namespace std;

#define MAX 1005
typedef long long ll;

ll tree[MAX];

void update(int idx,int val)
{
    while(idx<=MAX)
    {
        tree[idx]+=val;
        idx+=idx&-idx;
    }
}

ll query(int idx)
{
    ll sum=0;
    while(idx>0)
    {
        sum+=tree[idx];
        idx-=idx&-idx;
    }
    return sum;
}

pair<ll,ll>arr[1000000];
int main()
{
    int t;
    scanf("%d",&t);
    for(int test=1;test<=t;test++)
    {
        int n,m,k;
        scanf("%d%d%d",&n,&m,&k);
        for(int i=0;i<k;i++)
            scanf("%lld%lld",&arr[i].first,&arr[i].second);

        sort(arr,arr+k);

        memset(tree,0,sizeof (tree));
        ll sum=0;
        for(int i=k-1;i>=0;i--)
        {
            update(arr[i].second,1);
            sum+=query(arr[i].second-1);
        }
        printf("Test case %d: %lld\n",test,sum);
    }
    return 0;
}
