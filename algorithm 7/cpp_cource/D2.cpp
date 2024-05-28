#include <bits/stdc++.h>
using namespace std;
 
int n, m1, m2, a[505], b[505], f[505];
 
int main()
{
	cin >> n;
	while(n--)
	{
		cin >> m1;
		for(int i = 1; i <= m1; ++i)
			scanf( "%d", &a[i] );
		cin >> m2;
		for(int i = 1; i <= m2; ++i)
			scanf( "%d", &b[i] );
		for(int i = 1, mx; i <= m1; ++i)
		{
			mx = 0;
			for(int j = 1; j <= m2; ++j)
			{
				if(a[i] > b[j]) mx = max(mx, f[j]);
				if(a[i] == b[j]) f[j] = mx + 1;
			}
		}
		int ans = 0;
		for(int i = 1; i <= m2; ++i) ans = max(ans, f[i]);
		cout << ans << endl;
		fill(f + 1, f + max(m1, m2) + 1, 0);
	}
	return 0;
}
/*https://cn.bing.com/search?q=%E6%9C%80%E9%95%BF%E5%85%AC%E5%85%B1%E4%B8%8A%E5%8D%87%E5%AD%90%E5%BA%8F%E5%88%97%EF%BC%88LCIS%EF%BC%89%E7%9A%84O(n%5E2)%E7%AE%97%E6%B3%95+%E9%A2%84%E5%A4%87%E7%9F%A5%E8%AF%86%EF%BC%9A%E5%8A%A8%E6%80%81%E8%A7%84%E5%88%92%E7%9A%84%E5%9F%BA%E6%9C%AC%E6%80%9D%E6%83%B3%EF%BC%8CLCS%EF%BC%8CLIS%E3%80%82+%E9%97%AE%E9%A2%98%EF%BC%9A%E5%AD%97%E7%AC%A6%E4%B8%B2a%EF%BC%8C%E5%AD%97%E7%AC%A6%E4%B8%B2b%EF%BC%8C%E6%B1%82a%E5%92%8Cb%E7%9A%84LCIS%EF%BC%88%E6%9C%80%E9%95%BF%E5%85%AC%E5%85%B1%E4%B8%8A%E5%8D%87%E5%AD%90%E5%BA%8F%E5%88%97%EF%BC%89%E3%80%82+%E9%A6%96%E5%85%88%E6%88%91%E4%BB%AC%E5%8F%AF%E4%BB%A5%E7%9C%8B%E5%88%B0%EF%BC%8C%E8%BF%99%E4%B8%AA%E9%97%AE%E9%A2%98%E5%85%B7%E6%9C%89%E7%9B%B8%E5%BD%93%E5%A4%9A%E7%9A%84%E9%87%8D%E5%8F%A0%E5%AD%90%E9%97%AE%E9%A2%98%E3%80%82%E4%BA%8E%E6%98%AF%E6%88%91%E4%BB%AC%E6%83%B3%E5%88%B0%E7%94%A8DP%E6%90%9E%E3%80%82DP%E7%9A%84%E9%A6%96%E8%A6%81%E4%BB%BB%E5%8A%A1%E6%98%AF%E4%BB%80%E4%B9%88%EF%BC%9F%E5%AE%9A%E4%B9%89%E7%8A%B6%E6%80%81%E3%80%82+1%E5%AE%9A%E4%B9%89%E7%8A%B6%E6%80%81F%5Bi%5D%5Bj%5D%E8%A1%A8%E7%A4%BA%E4%BB%A5a%E4%B8%B2%E7%9A%84%E5%89%8Di%E4%B8%AA%E5%AD%97%E7%AC%A6b%E4%B8%B2%E7%9A%84%E5%89%8Dj%E4%B8%AA%E5%AD%97%E7%AC%A6%E4%B8%94%E4%BB%A5b%5Bj%5D%E4%B8%BA%E7%BB%93%E5%B0%BE%E6%9E%84%E6%88%90%E7%9A%84LCIS%E7%9A%84%E9%95%BF%E5%BA%A6%E3%80%82+%E4%B8%BA%E4%BB%80%E4%B9%88%E6%98%AF%E8%BF%99%E4%B8%AA%E8%80%8C%E4%B8%8D%E6%98%AF%E5%85%B6%E4%BB%96%E7%9A%84%E7%8A%B6%E6%80%81%E5%AE%9A%E4%B9%89%EF%BC%9F%E6%9C%80%E9%87%8D%E8%A6%81%E7%9A%84%E5%8E%9F%E5%9B%A0%E6%98%AF%E6%88%91%E5%8F%AA%E4%BC%9A%E8%BF%99%E4%B8%AA%EF%BC%8C%E8%BF%98%E6%9C%89%E4%B8%80%E4%B8%AA%E5%8E%9F%E5%9B%A0%E6%98%AF%E6%88%91%E7%9F%A5%E9%81%93%E8%BF%99%E4%B8%AA%E5%AE%9A%E4%B9%89%E8%83%BD%E6%90%9E%E5%88%B0%E5%B9%B3%E6%96%B9%E7%9A%84%E7%AE%97%E6%B3%95%E3%80%82%E8%80%8C%E6%88%91%E8%BF%99%E5%8F%AA%E4%BC%9A%E8%BF%99%E4%B8%AA%E7%9A%84%E5%8E%9F%E5%9B%A0%E6%98%AF%EF%BC%8C%E8%BF%99%E4%B8%AA%E7%8A%B6%E6%80%81%E5%AE%9A%E4%B9%89%E5%AE%9E%E5%9C%A8%E6%98%AF%E5%A4%AA%E5%A5%BD%E7%94%A8%E4%BA%86%E3%80%82%E8%BF%99%E4%B8%80%E7%82%B9%E6%88%91%E5%90%8E%E9%9D%A2%E5%86%8D%E8%AF%B4%E3%80%82+%E6%88%91%E4%BB%AC%E6%9D%A5%E8%80%83%E5%AF%9F%E4%B8%80%E4%B8%8B%E8%BF%99%E4%B8%AA%E8%BF%99%E4%B8%AA%E7%8A%B6%E6%80%81%E3%80%82%E6%80%9D%E8%80%83%E8%BF%99%E4%B8%AA%E7%8A%B6%E6%80%81%E8%83%BD%E8%BD%AC%E7%A7%BB%E5%88%B0%E5%93%AA%E4%BA%9B%E7%8A%B6%E6%80%81%E4%BC%BC%E4%B9%8E%E6%9C%89%E4%BA%9B%E6%A3%98%E6%89%8B%EF%BC%8C%E5%A6%82%E6%9E%9C%E6%8A%8A%E6%80%9D%E8%B7%AF%E9%80%86%E8%BD%AC%E4%B8%80%E4%B8%8B%EF%BC%8C%E8%80%83%E5%AF%9F%E8%BF%99%E4%B8%AA%E7%8A%B6%E6%80%81%E7%9A%84%E6%9C%80%E4%BC%98%E5%80%BC%E4%BE%9D%E8%B5%96%E4%BA%8E%E5%93%AA%E4%BA%9B%E7%8A%B6%E6%80%81%EF%BC%8C%E5%B0%B1%E5%AE%B9%E6%98%93%E8%AE%B8%E5%A4%9A%E4%BA%86%E3%80%82%E8%BF%99%E4%B8%AA%E7%8A%B6%E6%80%81%E4%BE%9D%E8%B5%96%E4%BA%8E%E5%93%AA%E4%BA%9B%E7%8A%B6%E6%80%81%E5%91%A2%EF%BC%9F+%E9%A6%96%E5%85%88%EF%BC%8C%E5%9C%A8a%5Bi%5D!%3Db%5Bj%5D%E7%9A%84%E6%97%B6%E5%80%99%E6%9C%89F%5Bi%5D%5Bj%5D%3DF%5Bi-1%5D%5Bj%5D%E3%80%82%E4%B8%BA%E4%BB%80%E4%B9%88%E5%91%A2%EF%BC%9F%E5%9B%A0%E4%B8%BAF%5Bi%5D%5Bj%5D%E6%98%AF%E4%BB%A5b%5Bj%5D%E4%B8%BA%E7%BB%93%E5%B0%BE%E7%9A%84LCIS%EF%BC%8C%E5%A6%82%E6%9E%9CF%5Bi%5D%5Bj%5D%3E0%E9%82%A3%E4%B9%88%E5%B0%B1%E8%AF%B4%E6%98%8Ea%5B1%5D..a%5Bi%5D%E4%B8%AD%E5%BF%85%E7%84%B6%E6%9C%89%E4%B8%80%E4%B8%AA%E5%AD%97%E7%AC%A6a%5Bk%5D%E7%AD%89%E4%BA%8Eb%5Bj%5D%EF%BC%88%E5%A6%82%E6%9E%9CF%5Bi%5D%5Bj%5D%E7%AD%89%E4%BA%8E0%E5%91%A2%EF%BC%9F%E9%82%A3%E8%B5%8B%E5%80%BC%E4%B8%8E%E5%90%A6%E9%83%BD%E6%B2%A1%E6%9C%89%E4%BB%80%E4%B9%88%E5%BD%B1%E5%93%8D%E4%BA%86%EF%BC%89%E3%80%82%E5%9B%A0%E4%B8%BAa%5Bk%5D!%3Da%5Bi%5D%EF%BC%8C%E9%82%A3%E4%B9%88a%5Bi%5D%E5%AF%B9F%5Bi%5D%5Bj%5D%E6%B2%A1%E6%9C%89%E8%B4%A1%E7%8C%AE%EF%BC%8C%E4%BA%8E%E6%98%AF%E6%88%91%E4%BB%AC%E4%B8%8D%E8%80%83%E8%99%91%E5%AE%83%E7%85%A7%E6%A0%B7%E8%83%BD%E5%BE%97%E5%87%BAF%5Bi%5D%5Bj%5D%E7%9A%84%E6%9C%80%E4%BC%98%E5%80%BC%E3%80%82%E6%89%80%E4%BB%A5%E5%9C%A8a%5Bi%5D!%3Db%5Bj%5D%E7%9A%84%E6%83%85%E5%86%B5%E4%B8%8B%E5%BF%85%E7%84%B6%E6%9C%89F%5Bi%5D%5Bj%5D%3DF%5Bi-1%5D%5Bj%5D%E3%80%82%E8%BF%99%E4%B8%80%E7%82%B9%E5%8F%82%E8%80%83LCS%E7%9A%84%E5%A4%84%E7%90%86%E6%96%B9%E6%B3%95%E3%80%82+%E9%82%A3%E5%A6%82%E6%9E%9Ca%5Bi%5D%3D%3Db%5Bj%5D%E5%91%A2%EF%BC%9F%E9%A6%96%E5%85%88%EF%BC%8C%E8%BF%99%E4%B8%AA%E7%AD%89%E4%BA%8E%E8%B5%B7%E7%A0%81%E4%BF%9D%E8%AF%81%E4%BA%86%E9%95%BF%E5%BA%A6%E4%B8%BA1%E7%9A%84LCIS%E3%80%82%E7%84%B6%E5%90%8E%E6%88%91%E4%BB%AC%E8%BF%98%E9%9C%80%E8%A6%81%E5%8E%BB%E6%89%BE%E4%B8%80%E4%B8%AA%E6%9C%80%E9%95%BF%E7%9A%84%E4%B8%94%E8%83%BD%E8%AE%A9b%5Bj%5D%E6%8E%A5%E5%9C%A8%E5%85%B6%E6%9C%AB%E5%B0%BE%E7%9A%84LCIS%E3%80%82%E4%B9%8B%E5%89%8D%E6%9C%80%E9%95%BF%E7%9A%84LCIS%E5%9C%A8%E5%93%AA%E5%91%A2%EF%BC%9F%E9%A6%96%E5%85%88%E6%88%91%E4%BB%AC%E8%A6%81%E5%8E%BB%E6%89%BE%E7%9A%84F%E6%95%B0%E7%BB%84%E7%9A%84%E7%AC%AC%E4%B8%80%E7%BB%B4%E5%BF%85%E7%84%B6%E6%98%AFi-1%E3%80%82%E5%9B%A0%E4%B8%BAi%E5%B7%B2%E7%BB%8F%E6%8B%BF%E5%8E%BB%E5%92%8Cb%5Bj%5D%E9%85%8D%E5%AF%B9%E5%8E%BB%E4%BA%86%EF%BC%8C%E4%B8%8D%E8%83%BD%E7%94%A8%E4%BA%86%E3%80%82%E5%B9%B6%E4%B8%94%E4%B9%9F%E4%B8%8D%E8%83%BD%E6%98%AFi-2%EF%BC%8C%E5%9B%A0%E4%B8%BAi-1%E5%BF%85%E7%84%B6%E6%AF%94i-2%E6%9B%B4%E4%BC%98%E3%80%82%E7%AC%AC%E4%BA%8C%E7%BB%B4%E5%91%A2%EF%BC%9F%E9%82%A3%E5%B0%B1%E9%9C%80%E8%A6%81%E6%9E%9A%E4%B8%BEb%5B1%5D..b%5Bj-1%5D%E4%BA%86%EF%BC%8C%E5%9B%A0%E4%B8%BA%E4%BD%A0%E4%B8%8D%E7%9F%A5%E9%81%93%E8%BF%99%E9%87%8C%E9%9D%A2%E5%93%AA%E4%B8%AA%E6%9C%80%E9%95%BF%E4%B8%94%E5%93%AA%E4%B8%AA%E5%B0%8F%E4%BA%8Eb%5Bj%5D%E3%80%82%E8%BF%99%E9%87%8C%E8%BF%98%E6%9C%89%E4%B8%80%E4%B8%AA%E9%97%AE%E9%A2%98%EF%BC%8C%E5%8F%AF%E4%B8%8D%E5%8F%AF%E8%83%BD%E4%B8%8D%E9%85%8D%E5%AF%B9%E5%91%A2%EF%BC%9F%E4%B9%9F%E5%B0%B1%E6%98%AF%E5%9C%A8a%5Bi%5D%3D%3Db%5Bj%5D%E7%9A%84%E6%83%85%E5%86%B5%E4%B8%8B%EF%BC%8C%E9%9C%80%E4%B8%8D%E9%9C%80%E8%A6%81%E8%80%83%E8%99%91F%5Bi%5D%5Bj%5D%3DF%5Bi-1%5D%5Bj%5D%E7%9A%84%E5%86%B3%E7%AD%96%E5%91%A2%EF%BC%9F%E7%AD%94%E6%A1%88%E6%98%AF%E4%B8%8D%E9%9C%80%E8%A6%81%E3%80%82%E5%9B%A0%E4%B8%BA%E5%A6%82%E6%9E%9Cb%5Bj%5D%E4%B8%8D%E5%92%8Ca%5Bi%5D%E9%85%8D%E5%AF%B9%EF%BC%8C%E9%82%A3%E5%B0%B1%E6%98%AF%E5%92%8C%E4%B9%8B%E5%89%8D%E7%9A%84a%5B1%5D..a%5Bj-1%5D%E9%85%8D%E5%AF%B9%EF%BC%88%E5%81%87%E8%AE%BEF%5Bi-1%5D%5Bj%5D%3E0%EF%BC%8C%E7%AD%89%E4%BA%8E0%E4%B8%8D%E8%80%83%E8%99%91%EF%BC%89%EF%BC%8C%E8%BF%99%E6%A0%B7%E5%BF%85%E7%84%B6%E6%B2%A1%E6%9C%89%E5%92%8Ca%5Bi%5D%E9%85%8D%E5%AF%B9%E4%BC%98%E8%B6%8A%E3%80%82%EF%BC%88%E4%B8%BA%E4%BB%80%E4%B9%88%E5%BF%85%E7%84%B6%E5%91%A2%EF%BC%9F%E5%9B%A0%E4%B8%BAb%5Bj%5D%E5%92%8Ca%5Bi%5D%E9%85%8D%E5%AF%B9%E4%B9%8B%E5%90%8E%E7%9A%84%E8%BD%AC%E7%A7%BB%E6%98%AFmax(F%5Bi-1%5D%5Bk%5D)%2B1%EF%BC%8C%E8%80%8C%E5%92%8C%E4%B9%8B%E5%89%8D%E7%9A%84i%60%E9%85%8D%E5%AF%B9%E5%88%99%E6%98%AFmax(F%5Bi%60-1%5D%5Bk%5D)%2B1%E3%80%82%E6%98%BE%E7%84%B6%E6%9C%89F%5Bi%5D%5Bj%5D%3EF%5Bi%60%5D%5Bj%5D%2Ci%60%3Ei%EF%BC%89+%E4%BA%8E%E6%98%AF%E6%88%91%E4%BB%AC%E5%BE%97%E5%87%BA%E4%BA%86%E7%8A%B6%E6%80%81%E8%BD%AC%E7%A7%BB%E6%96%B9%E7%A8%8B%EF%BC%9A+a%5Bi%5D!%3Db%5Bj%5D%3A+F%5Bi%5D%5Bj%5D%3DF%5Bi-1%5D%5Bj%5D+a%5Bi%5D%3D%3Db%5Bj%5D%3A+F%5Bi%5D%5Bj%5D%3Dmax(F%5Bi-1%5D%5Bk%5D)%2B1+1%3C%3Dk%3C%3Dj-1%26%26b%5Bj%5D%3Eb%5Bk%5D+%E4%B8%8D%E9%9A%BE%E7%9C%8B%E5%88%B0%EF%BC%8C%E8%BF%99%E6%98%AF%E4%B8%80%E4%B8%AA%E6%97%B6%E9%97%B4%E5%A4%8D%E6%9D%82%E5%BA%A6%E4%B8%BAO(n%5E3)%E7%9A%84DP%EF%BC%8C%E7%A6%BB%E5%B9%B3%E6%96%B9%E8%BF%98%E6%9C%89%E4%B8%80%E6%AE%B5%E8%B7%9D%E7%A6%BB%E3%80%82+%E4%BD%86%E6%98%AF%EF%BC%8C%E8%BF%99%E4%B8%AA%E7%AE%97%E6%B3%95%E6%9C%80%E5%85%B3%E9%94%AE%E7%9A%84%E6%98%AF%EF%BC%8C%E5%A6%82%E6%9E%9C%E6%8C%89%E7%85%A7%E4%B8%80%E4%B8%AA%E5%90%88%E7%90%86%E7%9A%84%E9%80%92%E6%8E%A8%E9%A1%BA%E5%BA%8F%EF%BC%8Cmax(F%5Bi-1%5D%5Bk%5D)%E7%9A%84%E5%80%BC%E6%88%91%E4%BB%AC%E5%8F%AF%E4%BB%A5%E5%9C%A8%E4%B9%8B%E5%89%8D%E8%AE%BF%E9%97%AEF%5Bi%5D%5Bk%5D%E7%9A%84%E6%97%B6%E5%80%99%E9%80%9A%E8%BF%87%E7%BB%B4%E6%8A%A4%E6%9B%B4%E6%96%B0%E4%B8%80%E4%B8%AAmax%E5%8F%98%E9%87%8F%E5%BE%97%E5%88%B0%E3%80%82%E6%80%8E%E4%B9%88%E5%BE%97%E5%88%B0%E5%91%A2%EF%BC%9F%E9%A6%96%E5%85%88%E9%80%92%E6%8E%A8%E7%9A%84%E9%A1%BA%E5%BA%8F%E5%BF%85%E9%A1%BB%E6%98%AF%E7%8A%B6%E6%80%81%E7%9A%84%E7%AC%AC%E4%B8%80%E7%BB%B4%E5%9C%A8%E5%A4%96%E5%B1%82%E5%BE%AA%E7%8E%AF%EF%BC%8C%E7%AC%AC%E4%BA%8C%E7%BB%B4%E5%9C%A8%E5%86%85%E5%B1%82%E5%BE%AA%E7%8E%AF%E3%80%82%E4%B9%9F%E5%B0%B1%E6%98%AF%E7%AE%97%E5%A5%BD%E4%BA%86F%5B1%5D%5Blen(b)%5D%E5%86%8D%E5%8E%BB%E7%AE%97F%5B2%5D%5B1%5D%E3%80%82+%E5%A6%82%E6%9E%9C%E6%8C%89%E7%85%A7%E8%BF%99%E4%B8%AA%E9%80%92%E6%8E%A8%E9%A1%BA%E5%BA%8F%E6%88%91%E4%BB%AC%E5%8F%AF%E4%BB%A5%E5%9C%A8%E6%AF%8F%E6%AC%A1%E5%A4%96%E5%B1%82%E5%BE%AA%E7%8E%AF%E7%9A%84%E5%BC%80%E5%A7%8B%E5%8A%A0%E4%B8%8A%E4%BB%A4%E4%B8%80%E4%B8%AAmax%E5%8F%98%E9%87%8F%E4%B8%BA0%EF%BC%8C%E7%84%B6%E5%90%8E%E5%BC%80%E5%A7%8B%E5%86%85%E5%B1%82%E5%BE%AA%E7%8E%AF%E3%80%82%E5%BD%93a%5Bi%5D%3Eb%5Bj%5D%E7%9A%84%E6%97%B6%E5%80%99%E4%BB%A4max%3DF%5Bi-1%5D%5Bj%5D%E3%80%82%E5%A6%82%E6%9E%9C%E5%BE%AA%E7%8E%AF%E5%88%B0%E4%BA%86a%5Bi%5D%3D%3Db%5Bj%5D%E7%9A%84%E6%97%B6%E5%80%99%EF%BC%8C%E5%88%99%E4%BB%A4F%5Bi%5D%5Bj%5D%3Dmax%2B1%E3%80%82+%E6%9C%80%E5%90%8E%E7%AD%94%E6%A1%88%E6%98%AFF%5Blen(a)%5D%5B1%5D..F%5Blen(a)%5D%5Blen(b)%5D%E7%9A%84%E6%9C%80%E5%A4%A7%E5%80%BC%E3%80%82+%E5%8F%82%E8%80%83%E4%BB%A3%E7%A0%81%EF%BC%9A+%23include%3Ccstdio%3E+%23include%3Ccstring%3E+int+f%5B1005%5D%5B1005%5D%2Ca%5B1005%5D%2Cb%5B1005%5D%2Ci%2Cj%2Ct%2Cn1%2Cn2%2Cmax%3B+int+main()+%7B+scanf(%22%25d%22%2C%26t)%3B+while(t--)+%7B+scanf(%22%25d%25d%22%2C%26n1%2C%26n2)%3B+for(i%3D1%3Bi%3C%3Dn1%3Bi%2B%2B)+scanf(%22%25d%22%2C%26a%5Bi%5D)%3B+for(i%3D1%3Bi%3C%3Dn2%3Bi%2B%2B)+scanf(%22%25d%22%2C%26b%5Bi%5D)%3B+memset(f%2C0%2Csizeof(f))%3B+for(i%3D1%3Bi%3C%3Dn1%3Bi%2B%2B)+%7B+max%3D0%3B+for(j%3D1%3Bj%3C%3Dn2%3Bj%2B%2B)+%7B+f%5Bi%5D%5Bj%5D%3Df%5Bi-1%5D%5Bj%5D%3B+if+(a%5Bi%5D%3Eb%5Bj%5D%26%26max%3Cf%5Bi-1%5D%5Bj%5D)+max%3Df%5Bi-1%5D%5Bj%5D%3B+if+(a%5Bi%5D%3D%3Db%5Bj%5D)+f%5Bi%5D%5Bj%5D%3Dmax%2B1%3B+%7D+%7D+max%3D0%3B+for(i%3D1%3Bi%3C%3Dn2%3Bi%2B%2B)+if+(max%3Cf%5Bn1%5D%5Bi%5D)+max%3Df%5Bn1%5D%5Bi%5D%3B+printf(%22%25d%5Cn%22%2Cmax)%3B+%7D+%7D&gs_lcrp=EgZjaHJvbWUyBggAEEUYOagCALACAA&FORM=ANCMS9&PC=ASTS
*/