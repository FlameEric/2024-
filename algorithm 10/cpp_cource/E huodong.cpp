#include<iostream>
#include<algorithm>
using namespace std;
struct Act
{
	int A,B;
}tim[1000005];
bool cmp(Act a,Act b)
{
    if(a.A==b.B)
	   return a.B<b.B;
	return a.A<b.A;
 } 
int main()
{
	int N,count=1;
	cin>>N;
	for(int i=0; i<N; i++)
	{
		cin>>tim[i].A>>tim[i].B;
	}
	sort(tim,tim+N,cmp);
	int tail=tim[0].B;
	for(int i=1; i<N; i++)
	{
		if(tail<=tim[i].A)
		{
			count++;
			tail=tim[i].B;
		}
	}
	cout<<count;
	return 0;
 } 
 
 