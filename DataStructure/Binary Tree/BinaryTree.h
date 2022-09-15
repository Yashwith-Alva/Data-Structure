#include <iostream>

/**
 * PROPERTIES:
 *
 *
 *
 *
 * TYPES:
 */

/**
 * @brief Implement of Tree
 *
 */
class TreeNode
{
public:
    int data;
    TreeNode *LeftLink;
    TreeNode *RightLink;

    void CreateNode(int val);
    void InsertNode(TreeNode **tree);
    int SearchNode(TreeNode **tree);
    int HeightOfTree(TreeNode **tree);
    int CountNode(TreeNode **tree);
    void PreOrder(TreeNode **tree);
    void PostOrder(TreeNode **tree);
    void InOrder(TreeNode **tree);
    void DeleteNode(TreeNode **tree, int element);
};
