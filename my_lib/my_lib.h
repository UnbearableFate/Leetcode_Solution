#include<iostream>
#include<initializer_list>
#include<map>
#include<vector>
#include<memory>
using namespace std;
template<class T>
class T_TreeNode {
public:
    T value;
    shared_ptr< T_TreeNode<T> > left, right;
    T_TreeNode() {
        ;
    }
    T_TreeNode(T v) {
        value = v;
        left = nullptr;
        right = nullptr;
    }
    T_TreeNode(T v, shared_ptr<T_TreeNode<T>> l, shared_ptr<T_TreeNode<T>> r) {
        value = v;
        left = l;
        right = r;
    }
};

template<class T>
class Tree {
public:
    shared_ptr<T_TreeNode<T>> root;
    int buildTree(initializer_list<T> ilist) {
        if (ilist.size()== 0) {
            return -1;
        }
        root = make_shared<T_TreeNode<T>>(*ilist.begin());
        map<int, shared_ptr<T_TreeNode<T>>> temp;
        temp[0] = root;
        auto beg = ilist.begin();
        for(auto i= 0; i < ilist.size() ; ++i) {
            if(temp.count(i) > 0) {
                auto pa = temp[i];
                if (2*i +1 < ilist.size()) {
                    if (*(beg+2*i+1) != -1) {
                        pa->left = make_shared<T_TreeNode<T>>(T_TreeNode<T>( *(beg+2*i+1)));
                        temp[2*i+1] = pa->left;
                    }
                }
                if (2*i +2 < ilist.size()) {
                    if (*(beg+2*i+2) != -1) {
                        pa->right = make_shared<T_TreeNode<T>>(T_TreeNode<T>(*(beg+2*i+2)));
                        temp[2*i+2] = pa->right;
                    }
                }
            } else {
                ;
            }
            
        }
        return 0;
    }
    Tree() {}
    Tree(initializer_list<T> list) {
        auto res = buildTree(list);
        if(res != 0) {
            printf("ERROR ,return %d", res);
        }
    }
    
};
