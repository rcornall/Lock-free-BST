/*
 * LockFreeBST.hpp
 * ©2017 Rob C.
 * Lock-free binary search tree
 */

#pragma once

#include <atomic>

namespace lockfree
{

    template<class T>
    class BST
    {
        public:
            BST();
            ~BST();
            
            void insert(T value)
            {
                return;
            }

            void remove(const std::size_t& key)
            {
                return;
            }

            void printTree()
            {
                return;
            }

        private:
            struct Node
            {
                T data;
                Node* left;
                Node* right;
            };


            Node* root;
    };


} /* end namespace lfBST */

