#include <iostream>  
using namespace std;
	int main() {  
	 int n,m;
    cin>>n>>m;
    int num[1000];
    for(int i=0;i<n;i++)
    {
        num[i]=i+1;
    }  
	    int count = n;                      //环内剩余人数  
	    int i = 0;  
	    int temp = 0;                       //临时变量，存储上一轮出局同学序号  
      
    while (count != 0) {  
	        i = (m + temp-1) % count;       //找到目标同学  
       count--;                        //环内人数减一  
	        temp = i;  
        std::cout << num[i] << " ";  
          
       for (int j = i; j < count; j++) {//数组删除数据操作  
            num[j] = num[j + 1];  
        }     
    }  
    system("pause");
    return 0;
	}  

    
