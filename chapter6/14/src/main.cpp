
#include <iostream>
#include <queue>
#include "TreeNode.hpp"

int main()
{
   TreeNode* r=buildTree() ;
   int leafnum=CountLeaf(r);
   std::cout<<leafnum<<'\n';
}