#ifndef RED_BLACK_TREE_MULTISET_H_
#define RED_BLACK_TREE_MULTISET_H_

#include "red_black_tree.h"

namespace jokerooo7 {

template <typename KT>
class multiset
    : public RBTree<KT> {  // Наследуются конструкторы, операторы, методы
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

  multiset(std::initializer_list<value_type> const& items) {
    for (typename std::initializer_list<value_type>::iterator it =
             items.begin();
         it != items.end(); ++it) {
      this->InsertInTree(*it, std::make_pair(false, true));
    }
  };

  multiset(const multiset& other) : RBTree<KT>() {
    iterator oth_iter = other.begin();
    while (oth_iter != other.end()) {
      this->InsertInTree(*(oth_iter++), std::make_pair(false, true));
    }
  };

  multiset(multiset&& other) noexcept : RBTree<KT>(std::move(other)) {}

  multiset& operator=(const multiset& other) {
    if (!this->EqualityOfClasses(other)) {
      this->clear();
      iterator iter = other.begin();
      while (iter != other.end()) {
        this->InsertInTree(*(iter++), std::make_pair(false, true));
      }
    }
    return *this;
  };

  multiset& operator=(multiset&& other) {
    RBTree<KT>::operator=(std::move(other));
    return *this;
  };

  void merge(multiset& other) {
    iterator oth_iter = other.begin();
    while (oth_iter != other.end()) {
      this->InsertInTree(*(oth_iter++), std::make_pair(false, true));
    }
  };

  template <typename... Args>
  std::vector<std::pair<iterator, bool>> insert_many(Args&&... args) {
    std::initializer_list<value_type> items = {args...};
    std::vector<std::pair<iterator, bool>> res;

    for (const_reference item : items) {
      res.push_back(this->InsertInTree(item, std::make_pair(false, true)));
    }

    return res;
  };

  iterator insert(const value_type& value) {
    return this->InsertInTree(value, std::make_pair(false, true)).first;
  };

  iterator find(const Key& key) const {
    iterator new_iter(this->Content(key).first);
    return new_iter;
  };

  bool contains(const Key& key) const { return this->Content(key).second; };

  std::pair<iterator, iterator> equal_range(const Key& key) {
    iterator first = lower_bound(key);
    iterator second = upper_bound(key);
    return std::make_pair(first, second);
  };

  size_type count(const Key& key) const {
    size_type count = 0;
    iterator need_element = this->begin();
    while (need_element != this->end()) {
      if (*(need_element++) == key) count++;
    }
    return count;
  };

  iterator lower_bound(const Key& key) const {  // не меньше заданного
    iterator need_element = find(key);
    need_element = this->begin();
    while (need_element != this->end() && *need_element < key) ++need_element;
    return need_element;
  };

  iterator upper_bound(const Key& key) const {  // больше заданного
    iterator need_element = find(key);
    need_element = this->begin();
    while (need_element != this->end() && *need_element <= key) ++need_element;
    return need_element;
  };
};

}  // namespace jokerooo7

#endif  // RED_BLACK_TREE_MULTISET_H_
