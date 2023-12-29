//
//  main.cpp
//  Tree
//
//  Created by Srushti Desai on 12/28/23.
//

#include <iostream>

#include "tree.hpp"

int main(int argc, const char * argv[]) {
    Tree tree(5);
    tree.left = new Tree(6);
    tree.right = new Tree(7);
    std::cout << "Value is" << tree.val ;
    std::cout << "Left Value is" << tree.left->val;
    std::cout << "Right Value is" << tree.right->val;
    
    return 0;
}
