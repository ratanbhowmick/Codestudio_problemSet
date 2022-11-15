
#include <set>

vector<vector<int>> findTriplets(vector<int> arr, int n)
{

    // Set to keep the track of visited triplets
    set<vector<int>> visited;
    vector<vector<int>> ans;

    int f = 0;

    for (int i = 0; i < n - 2; i++)
    {

        for (int j = i + 1; j < n - 1; j++)
        {

            for (int k = j + 1; k < n; k++)
            {

                // If we find a valid triplet
                if (arr[i] + arr[j] + arr[k] == 0)
                {

                    vector<int> triplet;
                    triplet.push_back(arr[i]);
                    triplet.push_back(arr[j]);
                    triplet.push_back(arr[k]);

                    // Sorting the triplet track distinct triplets.
                    sort(triplet.begin(), triplet.end());

                    if (visited.find(triplet) == visited.end())
                    {

                        f = 1;

                        ans.push_back(triplet);
                        visited.insert(triplet);
                    }
                }
            }
        }
    }

    return ans;
}
