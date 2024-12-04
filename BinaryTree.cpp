//Hard problem leetCode 987 
//problem name Vertical Order Traversal of a Binary Tree
// Approach
// (1) Use a map<int, vector<pair<int, int>>> to store nodes grouped by their x-coordinate (column). The key is the column, and the value is a list of pairs, where each pair contains the node's value and its y-coordinate (row).

//(2) Use a queue to perform a BFS traversal of the tree. Each entry in the queue stores a node and its corresponding (x, y) position. Initialize the root node with (0, 0) coordinates.

//(3)For each node, add its value along with its y-coordinate to the corresponding entry in the map for its x-coordinate.

//(4)If the node has left and right children, push them into the queue with their respective positions: left child gets (x - 1, y + 1), and right child gets (x + 1, y + 1).

//(5)Once the traversal is complete, iterate over the map (which is sorted by default due to the nature of map) and for each column, sort the nodes first by their y-coordinate (row), and if they have the same y, by their value.

//(6)Construct the result list by collecting the values in sorted order for each column.


//Time complexity :

/*The BFS traversal takes O(n) time, where n is the number of nodes in the tree.
Sorting the nodes within each column takes O(klogk) where k is the number of nodes in each column. In the worst case, this could be O(nlogn).
Overall, the time complexity is O(nlogn) due to sorting the nodes.
Space complexity :

The map and queue both store at most O(n) elements, where n is the number of nodes in the tree. Therefore, the space complexity is O(n).
Code*/

//CODE

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, vector<pair<int, int>>> mp;
        queue<pair<TreeNode*, pair<int, int>>> q;
        q.push({root, {0, 0}});
        while(!q.empty()) {
                int n = q.size();
                for(int i = 0; i < n; i++) {
                    auto f = q.front();
                    q.pop();
                    TreeNode* node = f.first;
                    auto pos = f.second; 
                    int xpos = pos.first;
                    int ypos = pos.second;
                    if(node -> left) q.push({node -> left, {xpos - 1, ypos + 1}});
                    if(node -> right) q.push({node -> right, {xpos + 1, ypos + 1}});
                    mp[xpos].push_back({node -> val, ypos});
                }
        }

        vector<vector<int>> ans;
        for(auto i:mp) {
            sort(i.second.begin(), i.second.end(), [&](auto p1, auto p2) {
                if(p1.second == p2.second) {
                    return p1.first < p2.first;
                }
                return p1.second < p2.second;
            });
            vector<int> temp;
            for(auto j:i.second) {
                temp.push_back(j.first);
            }
            ans.push_back(temp);
        }

        return ans;
    }
};

