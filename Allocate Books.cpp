//Allocate Books 
bool isPossible(vector<int>& arr, int n, int m, int mid) {
    int studentCount = 1;
    int pageSum = 0;
    
    for (int i = 0; i < n; i++) {
        if (pageSum + arr[i] <= mid) {
            pageSum += arr[i];
        } else {
            studentCount++;
            if (studentCount > m || arr[i] > mid) {
                return false;
            }
            pageSum = arr[i];
        }
    }
    
    return true;
}

int findPages(vector<int>& arr, int n, int m) {
    int start = 0;
    int end = 0;
    
    for (int i = 0; i < n; i++) {
        end += arr[i];
    }
    
    int ans = -1;
    
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (isPossible(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    
    return ans;
}
