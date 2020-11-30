#include <iostream>
#include <string>

using namespace std;

int main()
{
     
    string sequence;
    string subSequence;

    cin >> sequence;
    cin>> subSequence;

    int encounter = 0;

	if (sequence.size() >= subSequence.size())
	{
		for (int i = 0; i < sequence.size() - subSequence.size() + 1; ++i)
		{
			bool isMatching = true;

			for (int j = 0; j < subSequence.size(); ++j)
			{
				if (sequence[i + j] != subSequence[j])
				{
					isMatching = false;
				}
			}

			if (isMatching)
			{
				++encounter;
			}
		}
	}

	cout << encounter;

    return 0;
}

 