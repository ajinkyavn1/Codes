
#include <iostream>
using namespace std;


int totalcounts(string str, int m, int n)
{
	

	string str2 = str;

	int count = 1;
	int j = 1;
	for(auto i : str)
	{
		
		
		string m_cut = str.substr(
			str.length() - m);

		str.erase(str.length() - m);

		str = m_cut + str;
		j = j + 1;

		
		if (str2 != str)
		{
			count = count + 1;

			string n_cut = str.substr(
				str.length() - n);
			str.erase(str.length() - n);

			str = n_cut + str;

			j = j + 1;
		}

		if (str2 == str)
		{
			break;
		}

		count = count + 1;
	}
	return  count;
}

int main()
{
	

	string S;
    int X = 5, Y = 3;
    cin>>S>>X>>Y;



	
	cout<<totalcounts(S, X, Y);
	return 0;
}

