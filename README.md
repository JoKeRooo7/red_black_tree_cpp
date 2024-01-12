## Containers


* [Red and black tree](#red-and-black-tree)
    * [Files](#files)
    * [RBTree (public) methods](#rbtree-public-methods)
        * [Constructors and assignment operators](#constructors-and-assignment-operators)
        * [Start and end](#start-and-end)
        * [Container size and maximum size](#container-size-and-maximum-size)
        * [Inserting multiple elements](#inserting-multiple-elements)
        * [Moving elements](#moving-elements)
        * [Deleting an element](#deleting-an-element)
    * [RBTree (protected) Methods](#rbtree-protected-methods)
        * [Inserting into the tree](#inserting-into-the-tree)
        * [Checking the contents of the container](#checking-the-contents-of-the-container)
        * [Comparing two classes](#comparing-two-classes)
    * [RBTree (private) methods](#rbtree-private-methods)
    * [Internal Classes (Iterators)](#internal-classes-iterators)
    * [libraries](#libraries)
* [map, dictionary](#map-dictionary)
    * [map (public) methods](#map-public-methods)
        * [Inserting map elements](#inserting-map-elements)
        * [Checking the existence of the key](#checking-the-existence-of-the-key)
* [set, ordered set](#set-ordered-set)
    * [Set (public) methods](#set-public-methods)
        * [Inserting set elements](#inserting-set-elements)
        * [Checking the existence of a value](#checking-the-existence-of-a-value)
* [multiset, a multiset](#multiset-a-multiset)
    * [Multiset (public) methods](#multiset-public-methods)


I have implemented one of the types of self-balancing binary search trees - [red-black дерево](https://ru.wikipedia.org/wiki/%D0%9A%D1%80%D0%B0%D1%81%D0%BD%D0%BE-%D1%87%D1%91%D1%80%D0%BD%D0%BE%D0%B5_%D0%B4%D0%B5%D1%80%D0%B5%D0%B2%D0%BE )
![art red black tree](https://ru.wikipedia.org/wiki/%D0%9A%D1%80%D0%B0%D1%81%D0%BD%D0%BE-%D1%87%D1%91%D1%80%D0%BD%D0%BE%D0%B5_%D0%B4%D0%B5%D1%80%D0%B5%D0%B2%D0%BE#/media/%D0%A4%D0%B0%D0%B9%D0%BB:Red-black_tree_example_with_NIL.svg)

Standard library containers were also implemented - **map** **set** **multiset**

The code style in the project is [Google code style c++](https://google.github.io/styleguide/cppguide.html )

the namespace is used throughout the project jokerooo7 `namespace jokerooo7`


## Red and black tree

The red-black tree is implemented in the form of the RBTree class, which can be represented as a single template parameter:

``` cpp
#include "red_black_tree.h"

int main() {
    jokerooo7::RBTree<int> my_class_one;
    jokerooo7::RBTree<std::pair<int, bool>> my_class_two;
}
```

My implementation does not use allocators and comparators:

```cpp
template <typename K>
class RBtree {...}
```

### Files
The red-black tree is represented as files `red_black_tree.h` `red_black_tree.top`


### RBTree (public) methods

#### Constructors and assignment operators
According to the rule of five c++, I have implemented all the basic constructs. Additionally, a constructor is implemented with the transfer of data to the tree in the format `std::initializer_list<value_type>`

```cpp
  RBTree() = default;
  RBTree(std::initializer_list<value_type> const& items);
  RBTree(const RBTree& other);
  RBTree(RBTree&& other) noexcept;
  ~RBTree();

  RBTree& operator=(const RBTree& other);
  RBTree& operator=(RBTree&& other);
```

#### Start and end
As in the standard library, I have two methods implemented - begin() and end().
`begin()` - returns an iterator that points to the initial branch of the tree (the smallest).
`end()` - returns an iterator that points to an empty leaf following the largest element(null ptr), if necessary, you can return to the largest element.


```cpp
  iterator begin() const;
  iterator end() const;

 // return immutable iterators
  const_iterator cbegin() const;
  const_iterator cend() const;
```

```cpp
    typename jokerooo7::multiset<K>::iterator iter_one = my_class_one.begin();
    ++iter_one;  // returns the next node, the value above it
    typename jokerooo7::multiset<K>::iterator iter_two = my_class_one.end();
    --iter_two;  // returns the largest element
```

#### Container size and maximum size
Implemented the `size()` and `max_size()` methods
`size()` - returns the number of elements in the tree
`max_size()` - uses the `std::allocator<value_type>` class to determine the maximum size of the container


#### Inserting multiple elements
`insert_many()` is a method that takes a large number of arguments and inserts into a container and returns a vector with a pair of iterators and a conditional(bool) value, whether the element was inserted or not.
Uses the **protected** method inside itself [`InsertInTree()`](#inserting-into-the-tree) to insert elements


#### Moving elements
In order for two containers to swap elements, the `swap(RB Tree & other)` method is used, which takes another class as a way to replace two elements.
`merge(RBTree& other)` - Is used to accept all its elements from another container, without removing elements from another.


#### Deleting an element
To delete an element, the `erase(iterator any)` method is used, which accepts an iterator to be deleted from the container.
The `clear()` method is used to clear the entire container


### RBTree (protected) Methods

#### Inserting into the tree
The `InsertInTree*()` method is used, as arguments to the function it takes a value of the current type in the container, and a pair of flags (`std::pair<bool, bool> mode`). `mode.first` - Whether it is necessary to rewrite existing elements, `mode second` - whether it is possible to add identical elements in the container.
It returns a pair, an iterator for the inserted element and its conditional(bool) value, whether the element was inserted or not.


#### Checking the contents of the container
Implemented a method named `Content()` to check whether the current element exists in the container or not.
It takes a value and searches for it in the container. Using the **private** methods `IsItMore() IsItLess() AreTheyEqual()` compares as simple elements, so it can compare the data type std::pait<anyType, anyType>.


#### Comparing two classes
An auxiliary method has been implemented to check whether the two current containers match each other.
```cpp
bool EqualityOfClasses(const RBTree& other)
```


### RBTree (private) methods
are used to self-balance the tree in cases of deleting, inserting, and checking tree nodes.
The algorithm was used from [wiki](https://ru.wikipedia.org/wiki/%D0%9A%D1%80%D0%B0%D1%81%D0%BD%D0%BE-%D1%87%D1%91%D1%80%D0%BD%D0%BE%D0%B5_%D0%B4%D0%B5%D1%80%D0%B5%D0%B2%D0%BE)


### Internal Classes (Iterators)
RB Tree contains two internal classes, TreeIterator and Tree Const Iterator.
To make their call in derived classes conform to the standard library, I use the aliases `iterator` and `const_iterator`

Iterators, as in the standard library, are not protected from accessing a remote node. You need to monitor this yourself.

```cpp
int main() {
    jokerooo7::RBTree<int> my_class_one;

    typename jokerooo7::multiset<K>::iterator iter_one = my_class_one.begin();
}
```

The iterator class has operators implemented `*, =, ++, --, !=, ==`

```cpp
typename jokerooo7::multiset<K>::iterator iter_one = my_class_one.begin()
*iter_one; // Returns the value that lies in this iterator
++iter_one; // Will move to the next element and fix the iterator on this node and return it
to eater_one++; // Will return a copy of the current iterator, move to the next one and fix it
to eater_one != any_iterator; // Returns a null value - they do not match or not
iter_one == any_iterator; // The opposite!=
iter_one = any_iterator_or_node; // Assign to the current iterator - another iterator or node of the tree, also works with std::move
```


### libraries

``` cpp
##include <stddef> // To work with the size_t data type
#include <utility> // To work with std::pair
##include <vector> // To return a vector with multiple inserts
#include <initializer_list> // To insert a large number of arguments
```


## map, dictionary

The file with the rating is "map.h"

My class, as well as the colorfully black tree class, is hosted in the im *jokerooo7* application and uses two templates arguments - key and value `<type name KT, type name T>`

```cpp
#include "red_black_tree.h"

namespace jokerooo7 {

    template <typename KT, typename T>
    class map : public RBTree<std::pair<KT, T> {...}

}
```

My implementation of the STL library [map](https://ru.wikipedia.org/wiki/Map_ (C%2B%2B)) uses the already written [red-black tree](#red-black-tree). It inherits all the methods and uses the construction `using Btree<std::pair<KT, T>>::RB Tree;` inherits absolutely all constructors and dextrators of the red-black tree class.

Aliases match the standard library and can be seen in the "map.h" files


### map (public) methods

#### Inserting map elements

```cpp
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
```


These three constructs use [InsertInTree](#insert-into-tree) from RBTree to insert elements and return the same as InsertInTree()

* The first method inserts only the value, without the key
* The second method inserts key-values, without rewriting the value
* The third method is inserting with rewriting the values by key


#### Checking the existence of the key

The `contains()` method implements a check for the presence of a key in the container and returns a conditional(bool) value about its presence or absence
The `contains()` function uses [Content()](#checking-the-contents-of-the-container) to check the contents. 

The `at()` method implements the return of a non-constant reference/or constant value by key, if the key is not found, throws an exception. Uses [Content()](#checking-the-contents-of-the-container)

The `[]` operator Returns an element by key and allows you to insert an element by key. Uses `at()`


## set, ordered set

The file with the implementation is "set.h"

My class, as well as the red-black tree class, is located in the *jokerooo7* namespace and takes one template argument - the value `template <typename T>`


My implementation of the STL library [set](https://ru.wikipedia.org/wiki/%D0%9C%D0%BD%D0%BE%D0%B6%D0%B5%D1%81%D1%82%D0%B2%D0%BE_(%D1%82%D0%B8%D0%BF_%D0%B4%D0%B0%D0%BD%D0%BD%D1%8B%D1%85 ) uses the already written [red-black tree](#red-black-wood). It inherits all methods and, using the `using RBTree<KT>::RBTree;` construct, inherits absolutely all constructors and dextrators of the red-black tree class.

Aliases match the standard library and can be seen in the "set.h" files


### Set (public) methods

#### Inserting set elements

```cpp
  std::pair<iterator, bool> insert(const value_type& value) {
    return this->InsertInTree(value, std::make_pair(false, false));
  };
```

Inserting the value element uses [InsertInTree](##inserting-into-the-tree) from RBTree, to insert elements and return the same as InsertInTree()


#### Checking the existence of a value

`contains()` - the same as for map, takes the value that is the key in set

the `find()` function returns an iterator to an element that uses [Content()](#checking-the-contents-of-the-container) to check the contents. 


## multiset, a multiset

The same as set, but allows you to store duplicate elements.

The file with the implementation is "multiset.h"


### Multiset (public) methods

Many RBTree methods have been rewritten, supplemented and the implementation has been changed, due to the addition of the same content

The methods are the same as multiset, supplemented by some:

* `iterator lower_bound(const Key& key)` - the method finds the first element at least the specified one
* `iterator upper_bound(const Key& key)` - method that finds more than the specified value
* `size_type count(const Key& key) const` - returns the number of key data in the container
* `std::pair<iterator, iterator> equal_range(const Key& key)` - returns a pair of iterators, where the first one points to the first matching key, and the second one to the next (larger in value) after the given key;