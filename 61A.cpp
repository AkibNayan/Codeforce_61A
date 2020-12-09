#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    for(int i=0; i<s1.size();)
    {
        for(int j=0; j<s2.size();)
        {
            if(s1[i]!=s2[j])
            {
                cout<<"1";
            }
            else
            {
                cout<<"0";
            }
            i++;
            j++;
        }
    }
    return 0;
}
