#ifndef RED_BLACK_TREE_MAP_H_
#define RED_BLACK_TREE_MAP_H_

#include "red_black_tree.h"

namespace jokerooo7 {

template <typename KT, typename T>
class map : public RBTree<std::pair<KT, T>> {  // Наследуются конструкторы,
                                               // операторы, методы
 public:
  using RBTree<std::pair<KT, T>>::RBTree;  // Использование абсолютно всех
                                           // конструкторов RBTree
  using Key = KT;
  using key_type = Key;
  using mapped_type = T;
  using typename RBTree<std::pair<KT, T>>::value_type;
  using typename RBTree<value_type>::reference;
  using typename RBTree<value_type>::const_reference;
  using typename RBTree<value_type>::iterator;
  using typename RBTree<value_type>::const_iterator;
  using typename RBTree<value_type>::size_type;

  std::pair<iterator, bool> insert(const value_type& value) {
    return this->InsertInTree(value, std::make_pair(false, false));
  };

  std::pair<iterator, bool> insert(const Key& key, const T& obj) {
    value_type value = std::make_pair(key, obj);
    return this->InsertInTree(value, std::make_pair(false, false));
  };

  std::pair<iterator, bool> insert_or_assign(const Key& key, const T& obj) {
    value_type value = std::make_pair(key, obj);
    return this->InsertInTree(value, std::make_pair(true, false));
  };

  bool contains(const Key& key) const {
    value_type value = std::make_pair(key, T());
    return this->Content(value).second;
  };

  T& at(const Key& key) {
    value_type value = std::make_pair(key, T());
    std::pair<TreeNode<value_type>*, bool> new_value = this->Content(value);
    if (new_value.second != true) {
      throw std::out_of_range("Element with specified key not found.");
    } else {
      return new_value.first->value.second;
    }
  };

  T at(const Key& key) const {
    value_type value = std::make_pair(key, T());
    std::pair<TreeNode<value_type>*, bool> new_value = this->Content(value);
    if (new_value.second != true) {
      throw std::out_of_range("Element with specified key not found.");
    } else {
      return new_value.first->value.second;
    }
  };

  T& operator[](const Key& key) {
    try {
      return at(key);
    } catch (const std::out_of_range& e) {
      insert(key, T());
      return at(key);
    }
  };

  T operator[](const Key& key) const { return at(key); };
};

}  // namespace jokerooo7

#endif  // RED_BLACK_TREE_MAP_H_
