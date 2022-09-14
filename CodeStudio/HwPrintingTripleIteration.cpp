#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> v;

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        v.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            for (int k = j+1; k < n; k++)
            {
                cout << i << " " << j << " " << k << endl;
            }
            
        }
        
    }
    
    
    return 0;
}