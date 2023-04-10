#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > pascalTraingle(int n)
{
    vector< vector < int> > dummy1;
    vector<int> v1;
    v1.push_back(1);
    for (int i = 1; i < n; i++)
    {
        v1.push_back(0);
    }
    dummy1.push_back(v1);

    for (int i = 1; i < n; i++)
    {
        vector<int> v2;
        v2.push_back(1);
        for (int j = 1; j < n; j++)
        {
            v2.push_back(dummy1[i - 1][j] + dummy1[i - 1][j - 1]);
        }
        dummy1.push_back(v2);
    }

    vector<vector<int> > retVect;
    for (int i = 0; i < n; i++)
    {
        vector<int> a;
        for (int j = 0; j < n; j++)
        {
            if (dummy1[i][j] == 0)
            {
                break;
            }
            a.push_back(dummy1[i][j]);
        }
        retVect.push_back(a);
    }
    return retVect;
}

int main()
{
    int n;
    cout << "Enter the number of rows in pascal triangle";
    cin >> n;
    vector<vector<int> > ans = pascalTraingle(n);
    for (int i = 0; i < ans.size(); i++)
    {
        vector<int> v = ans[i];
        for (int j = 0; j < v.size(); j++)
        {
            cout << v[j] << " ";
        }
        cout << endl;
    }

    return 0;
}