#ifndef RED_BLACK_TREE_MULTISET_H_SET_H_
#define RED_BLACK_TREE_MULTISET_H_SET_H_

#include "red_black_tree.h"

namespace jokerooo7 {

template <typename KT>
class set : public RBTree<KT> {  // Наследуются конструкторы, операторы, методы
 public:
  using RBTree<KT>::RBTree;
  using Key = KT;
  using key_type = Key;
  using typename RBTree<KT>::value_type;
  using typename RBTree<value_type>::reference;
  using typename RBTree<value_type>::const_reference;
  using typename RBTree<value_type>::iterator;
  using typename RBTree<value_type>::const_iterator;
  using typename RBTree<value_type>::size_type;

  std::pair<iterator, bool> insert(const value_type& value) {
    return this->InsertInTree(value, std::make_pair(false, false));
  };

  iterator find(const Key& key) const {
    iterator new_iter(this->Content(key).first);
    return new_iter;
  };

  bool contains(const Key& key) const { return this->Content(key).second; };
};

}  // namespace jokerooo7

#endif  // RED_BLACK_TREE_MULTISET_H_SET_H_
