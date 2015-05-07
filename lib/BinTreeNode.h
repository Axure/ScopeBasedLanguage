//
// Created by 郑虎 on 15 年 五月. 7..
//

#ifndef SCOPEBASEDLANGUAGE_BINTREENODE_H
#define SCOPEBASEDLANGUAGE_BINTREENODE_H

template <class T>
class BinTreeNode {
    private:
        T content;
        BinTreeNode* pLeft, pRight;
    public:
        BinTreeNode();

        static void appendToLeft(BinTreeNode* root, T content);
        void appendToLeft(T content);
};


#endif //SCOPEBASEDLANGUAGE_BINTREENODE_H
