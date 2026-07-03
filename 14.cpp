#include <iostream>
using namespace std;

//binary search tree==> اهم نوع من انواع التري بتساعدني كتير بعمليات البحث و بتقلل التايم
//عنا شروط لازم بتحققوا عشان احكي انو هاي بايناري سيرش تري 
// 1- لازم تكون بايناري يعني الها ابنين او ابن او ولا ابن بس توبها ابنين
// 2- كل القيم اللي عاليسار لازم اقل من الروت و كل القيم اللي عالرايت اكبر من الروت
// 3- ممنوووع تكرار القيم
// و تتبع قاعدة log n
// البايناري سيرش اللي انا ببنيها ما بتحقق ال AVL TREE 
// AVL TREE || RED BLACK TREE (BALANCE TREE )تري متوازنةت 
//
//
//

class node {
public:
    int data;
    node* left;
    node* right;
    node() {
        this->data = 0;
        this->left = nullptr;
        this->right = nullptr;
    }
    node(int data, node* left, node* right) {
        this->data = data;
        this->left = left;
        this->right = right;
    }
};
class BST {
    //اهم بوينتر هون هو الروت
    node* root;
public:
    int treeSize = 0;
    BST() {
        root = nullptr;
    }

    bool search(int value) {
        node* p = root;
        while (p != nullptr) {
            if (value == p->data)
                return true;
            if (value > p->data) {
                p = p->right;
            }
            else
                p = p->left;
        }
        return false;
    }

    bool isempty() {
        return root == nullptr;
    }

    void add(int val) {
        if (search(val)) return;
        treeSize++;
        node* n = new node(val, nullptr, nullptr);
        if (isempty())
            root = n;
        else {
            node* p = root;
            // هون انا ما بعرف لحد وين انا بدي اوقف يعني بدي اضل امشي و ابحث اذا لقيت مكان مناسب بضيف فيه
            while (1) {
                if (val > p->data) {
                    // بدنا نتاكد اذا الرايت تاعها كان فاضي او لا
                    if (p->right == nullptr) break;// عشان بس اطلع من اللوب اضيف
                    p = p->right;

                }
                else {
                    if (p->left == nullptr) break;
                    p = p->left;

                }
                if (val > p->data) {
                    p->right = n;
                }
                else {
                    p->left = n;
                }
            }

        }
    }
    int getMin() {
        node* p = root;
        while (p->left != nullptr) {
            p = p->left;
        }
        return p->data;
    }
    int getMax() {
        node* p = root;
        while (p->right != nullptr) {
            p = p->right;
        }
        return p->data;
    }

    };

// الريموف عندي 5 حالات

void remove(int x) {
    if (search(x) == false)
        return;
    treeSize--;
    if (treeSize == 0)
    {
        root == nullptr;
        return;
    }


    node* p = root;
    node* prev = root;
    while (p->data != x) { // هدول الخطوات ثابتات عنديي بكل الحالات لازم اعملهن
        prev = p;
        if (val > p->data) {
            p = p->right;
        }
        else {
            p = p->left;
        }
    }
    // هسا اول حالة اني اتعامل مع نود عقيمة يعني ملهاش ابناء 
    if (p->left == nullptr && p->right == nullptr) {
        if (val > prev->data) {
            prev->right = nullptr;
        }
        else {
            prev->left = nullptr;
        }
        delete p;
    }
    // الحالة التانية انو النودة يكون عندها ابن واحد يا عالليفت او عالرايت 
    // left الابن بكون ع 
    else if (p->right == nullptr) {
        if (p == root) {
            root = p->left;
            delete p;
            return;
        }

        if (p->data > prev->data) {
            prev->left = p->left;
        }
        else {
            prev->right = p->left; // هاي الحالة ما كتير فهمتها
        }
        delete p;

    }
    // الابن يكون ع right
    else if (p->left == nullptr) {

        if (p == root) {
            root = p->right;
            delete p;
            return;
        }
        if (p->data < prev->data) {
            prev->left = p->right; // هاي الحاله ما كتير فهمتها
        }
        else {
            prev->right = p->right;
        }
        delete p;
    }
    //لما تكون النودة الها ابنين
    // left != null && right != null
    else if (p->left != null && p->right != null) {
        node* p2 = p;
        node* prev2 = p;
        p2 = p2->right;
        // left == null
        if (p2->left == nullptr) {
            p->data = p2->data;
            p->right = p2->right;
            delete p2;
        }
        // left != null
        else {
            while (p2->left != nullptr) {
                prev 2 = p2;
                p2 = p2->left;

            }
            p->data = p2->val;
            prev2->left = p2->right;
            delete p2;

        }

    }
}

void clear() {
    while (!isEmpty()) {
        remove(root->data);
    }
}

~BST() {
    clear();
}

};

int main()
{
    BST b;
    b.add(6);
    b.add(61);
    b.add(34);
    b.add(62);

}

