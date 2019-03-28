#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void ShellSort(vector<int> &vec);

int main(int argc, const char * argv[])
{

    int arr[] = {4,2,8,9,0,1};
	vector<int>vectorArray(arr, arr + sizeof(arr)/sizeof(int));
    ShellSort(vectorArray);
	
	cout<<"Data array = ";

	
	for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
	
	cout<<"\nShell sort = ";
	
    for (int i = 0; i < vectorArray.size(); i++)
    {
        cout << vectorArray[i] << " ";
    }
	
	cout<< "\n";
	
    return 0;
}

void ShellSort(vector<int> &vec)
{
    long gap;
    long i;
    long size = vec.size();
    for (gap = size / 2; gap > 0; gap = gap / 2)
        for (i = 0; i < gap; i++)
            for (long j = i + gap; j < size; j = j + gap)
            {
                if (vec[j] < vec[j - gap])
                {
                    int temp = vec[j];
                    long m;
                    for (m = j - gap; m >= i && temp < vec[m]; m = m - gap)
                    {
                        vec[m + gap] = vec[m];
                    }
                    vec[m + gap] = temp;
                }
            }
}
