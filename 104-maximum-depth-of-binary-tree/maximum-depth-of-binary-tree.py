# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        #base case
        if root == None:
             return 0
        x = self.maxDepth(root.left)
        y = self.maxDepth(root.right)

        #+1 for the root
        return max(x,y)+1