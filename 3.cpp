//https://www.codechef.com/submit/GRPASSN?tab=solution
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int P[N];
        for(int i=0;i<N;i++)
        {
            cin>>P[i];
        }
        unordered_map<int,int> umap;
        unordered_map<int,int>::iterator it;
        for(int i=0;i<N;i++)
        {
            umap[P[i]]++;
        }
         int flag=1;
        for(it=umap.begin();it!=umap.end();it++)
        {
            int r=it->first;
            int k=it->second;
           
            if(k%r!=0)
            {
                flag=0;
            }
        }
        if(flag==1)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        
    }
	// your code goes here
	return 0;
}
