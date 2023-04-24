//
// Created by Anmol Khanna on 24/04/23.
//
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
//Date: April 24th 2023
//Runtime: 143ms beats 8.94%, Memory: 54MB beats 10.60%
#include <stdio.h>
 struct TreeNode{
     int val;
     struct TreeNode *left;
     struct TreeNode *right;
 };
 void dfs(struct TreeNode *root, int goLeft,int count, int max[] ){
     if(root == NULL)return;
     max[0] = (max[0]>count)?max[0]:count;
     if(goLeft){
         dfs(root->left,0,count+1,max);
         dfs(root->right,1,1,max);
     }else{
         dfs(root->right,1,count+1,max);
         dfs(root->left,0,1,max);
     }
 }
int longestZigZag(struct TreeNode* root){
    int max[] = {0};
    dfs(root,0,0,max);
    dfs(root,1,0,max);
    return max[0];
}