bool isPossible(vector<int> &stalls, int mid, int k) {
    int n = stalls.size();
    int cowCount = 1;
    int lastPosition = stalls[0];
    
    for (int i=0; i<n; i++) {
        if (stalls[i] - lastPosition >= mid) {
            cowCount++;
            if (cowCount == k) {
                return true;
            }
            lastPosition = stalls[i];
        }
    }
    return false;
}

int aggressiveCows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int n = stalls.size();
    int s = 0, e;
    int maxi = -1;
    
    for (int i=0; i<n; i++) {
        maxi = max(maxi, stalls[i]);
    }
    e = maxi;
    
    int ans = -1;
    
    while (s <= e) {
        int mid = (s + ((e - s) / 2));
        
        if (isPossible(stalls, mid, k)) {
            ans = mid;
            s = mid + 1;
        }
        else {
            e = mid - 1;
        }
    }
    return ans;
}