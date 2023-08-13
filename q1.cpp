// #include <bits/stdc++.h>
// using namespace std;

// void getpermutations(string a, int l, int r,int &count)
// {

// 	if (l == r)
// 		count++;
// 	else
// 	{
	
// 		for (int i = l; i <= r; i++)
// 		{

		
// 			swap(a[l], a[i]);

			
// 			getpermutations(a, l+1, r,count);

	
// 			swap(a[l], a[i]);
// 		}
// 	}
// }


// int main()
// {
// 	string str;
// 	cin>>str;
// 	int n = str.size();
// 	int count=0;
// 	getpermutations(str, 0, n-1,count);
// 	cout<<count;
// 	return 0;
// }

#include <bits/stdc++.h>
using namespace std;


int PositionRightmostSetbit(int n)
{
      if(n == 0)
          return 0;
  
    int position = 1;
    int m = 1;

    while (!(n & m)) {
        m = m << 1;
        position++;
    }
    return position;
}

int main()
{
    int n;
	cin>>n;
    
    cout << PositionRightmostSetbit(n);
    return 0;
}