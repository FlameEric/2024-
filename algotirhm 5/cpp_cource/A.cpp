#include <bits/stdc++.h>
using namespace std;
int a[100100];
int search(const int& l, const int& r, const int& m) {
    int left = l, right = r;
    int index=0;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (a[mid] == m) {
            index=mid;
            return index+1;
        }
        else if (a[mid] < m) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    index=0;
    return index;
}
int main()
{
    int t;
    while(cin>>t)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int x;
        cin>>x;
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        int end=search(0,n-1,x);
        if(end!=0)
        {
            cout<<endl<<end;
        }
        else
        {
            cout<<endl<<"-1";
        }
        

    }
       system("pause");
       return 0;
}