#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    char paper[10001];
    cin>>paper;
    int num=strlen(paper);
    int k=0;
    int kmax=0;
    for(int i=0;i<num;i++)
    {
        k++;
        if(paper[i]=='A'||paper[i]=='E'||paper[i]=='I'||paper[i]=='O'||paper[i]=='U'|| paper[i] == 'Y')
        {
            if(kmax<k)
            {
                kmax=k;
            }
            k=0;
        }

    }
    k++;
    if(kmax<k)
    {
        kmax=k;
    }
    cout<<kmax;


    system("pause");
    return 0;
}
