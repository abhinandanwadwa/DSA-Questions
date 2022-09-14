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
        cout << "This is loop 1" << endl;
        for (int j = i+1; j < n; j++)
        {
            cout << "This is loop 2" << endl;
            for (int k = j+1; k < n; k++)
            {
                cout << "This is loop 3" << endl;
                cout << i << " " << j << " " << k << endl;
                cout << "Loop 3 ending" << endl;
            }
            cout << "Loop 2 ending" << endl;
        }
       cout << "Loop 1 ending" << endl; 
    }
    
    
    return 0;
}