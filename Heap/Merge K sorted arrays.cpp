vector<int> mergeKArrays(vector<vector<int>> arr, int K)
{
    // code here
    vector<int> v;
    priority_queue<p, vector<p>, greater<p>> minH;
    for (int i = 0; i < arr.size(); i++)
        minH.push({arr[i][0], {i, 0}});
    while (minH.size() > 0)
    {
        p cur = minH.top();
        minH.pop();
        int i = cur.second.first, j = cur.second.second;
        v.push_back(cur.first);
        if (j + 1 < arr[i].size())
            minH.push({arr[i][j + 1], {i, j + 1}});
    }
    return v;
}