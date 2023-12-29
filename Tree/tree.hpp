//
//  tree.hpp
//  Tree
//
//  Created by Srushti Desai on 12/28/23.
//

#ifndef tree_hpp
#define tree_hpp

#include <stdio.h>

class Tree
{
public:
    int val;
    Tree* right;
    Tree* left;
    Tree(int value)
    {
        val =value;
        right = nullptr;
        left = nullptr;
    }
};
#endif /* tree_hpp */
