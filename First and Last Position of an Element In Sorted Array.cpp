int firstOcc(vector<int>& arr, int n, int key) {
    int start = 0;
    int end = n - 1;
    int mid;
    int ans = -1;
    
    while (start <= end) {
        mid = (start + end) / 2;

        if (arr[mid] == key) {
            ans = mid;
            end = mid - 1;
        } else if (key < arr[mid]) {
            end = mid - 1;
        } else if (key > arr[mid]) {
            start = mid + 1;
        }
    }

    return ans;
}

int lastOcc(vector<int>& arr, int n, int key) {
    int start = 0;
    int end = n - 1;
    int mid;
    int ans = -1;
    
    while (start <= end) {
        mid = (start + end) / 2;

        if (arr[mid] == key) {
            ans = mid;
            start = mid + 1;
        } else if (key < arr[mid]) {
            end = mid - 1;
        } else if (key > arr[mid]) {
            start = mid + 1;
        }
    }

    return ans;
}

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int , int> p;
    p.first=firstOcc(arr,n,k);
    p.second=lastOcc(arr,n,k);
    return p;
}
