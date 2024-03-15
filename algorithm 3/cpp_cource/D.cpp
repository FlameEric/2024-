#include <bits/stdc++.h>
using namespace std;
 
int main()
{   
    string str[20];
    int i=1;
    while(cin>>str[i])i++;
    i--;
    int n=i;
    int num[100][100];
    int score[1000];
    for(i=1;i<=n;i++)
    {
        if(str[i][0]=='/')
        {
            num[i][0]=10;
        }
         else if(str[i][0]<'10'&&str[i][1]<'10')
        {
            num[i][0]=str[i][0]-'0';
            num[i][1]=str[i][1]-'0';
        }
        else if(str[i][0]<'10'&&str[i][1]=='/')
        {
            num[i][0]=str[i][0]-'0';
            num[i][1]=10-(str[i][0]-'0');
        }
    }
    int end=0;
    for(i=1;i<=10;i++)
    {
        int tt;
        if(str[i][0]=="/")
        {
            if(str[i+1].size()<2)tt=num[i+2][0];
            else tt=num[i+1][1];
            score[i]=10+num[i+1][0]+tt;
        }
        else if(str[i][0]<'10'&&str[i][1]<'10')
        {
            score[i]=num[i][0]+num[i][1];
        }
        else if(str[i][0]<'10'&&str[i][1]=='/')
        {
            score[i]=10+num[i+1][0];
        }
        end+=score[i];
    }
    std::cout <<end << std::endl;
    
    

    system("pause");
    return 0;
}