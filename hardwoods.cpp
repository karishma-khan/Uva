#include<iostream>
#include<map>
#include<cstring>
#include<iterator>

using namespace std;

int main()
{
	int n;
	cin>>n;
	getchar();
	getchar();
	for(int l=0;l<n;l++)
	{
		map<string,float>mp;
		float sum=0;
		string s;
		while(getline(cin,s))
		{
			if(s.compare("")==0)
			break;
			mp[s]+=1;
			sum+=1;
		}
		map<string,float>::iterator i;
		for(i=mp.begin();i!=mp.end();++i)
		{
			float x;
			x=(i->second/sum)*100;
			cout<<i->first<<" "<<x;
			cout<<endl;
		};
		cout<<endl;
	}
	return 0;
}
