#include <iostream>
#include <vector>

using namespace std;
 
int main()
{
	int n;
	int digit;
	vector<int> arr;
	cin >> n;

	for (int i = 0;i < n;i++)
	{
		cin >> digit;
		arr.push_back(digit);
	}

	for (int i = arr.size()-1 ; i >=0; i--)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

	return 0;
}
 /* with array
 int n;
 int arr[999];
  
  cin>>n;
   
   for(int i = n-1; i > -1; i--)
   {
   cout << arr[i] << " ";
   }

   cout << endl;
 */