/*
cal the amx distance between points.

1) different between two points
2) the last point doesnt have the the oil station so we need to think something of it

*/



#include <iostream>
#include <vector>

using namespace std;


int main()
{
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int larDiff = arr[0];

        for (int i = 1; i < arr.size() ; i++) {
            int diff = arr[i] - arr[i - 1];
            if (diff > larDiff) {
                larDiff = diff;
            }
        }

        if (larDiff < (x -arr[arr.size() - 1] ) * 2) {
            larDiff = (x - arr[arr.size() - 1] ) * 2;
        }

        cout << larDiff << endl;

    }
}