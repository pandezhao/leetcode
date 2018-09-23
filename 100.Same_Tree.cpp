class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (p==NULL && q==NULL){
            return true;
        }else if(p==NULL || q==NULL){
            return false;
        }
        if (p->val != q->val){
            return false;
        }
        else{
            bool a;
            bool b;
            if (p->left !=NULL && q->left!=NULL){
                a = isSameTree(p->left, q->left);
            }else if(p->left ==NULL && q->left==NULL){
                a = true;
            }else{
                return false;
            }
            
            if (p->right != NULL && q->right!=NULL){
                b = isSameTree(p->right, q->right);
            }else if (p->right==NULL && q->right==NULL){
                b = true;
            }else{
                return false;
            }
            return a && b;
        }
    }
};
