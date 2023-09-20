#include <gtest/gtest.h>

#include <set>
#include <string>

#include "multiset.h"

class multisetIntTests : public ::testing::Test {
 protected:
  jokerooo7::multiset<int> jokerooo7_empty_obj;
  std::multiset<int> std_empty_obj;

  jokerooo7::multiset<int> jokerooo7_first_obj = {1};
  std::multiset<int> std_first_obj = {1};

  jokerooo7::multiset<int> jokerooo7_second_obj = {1, 2};
  std::multiset<int> std_second_obj = {1, 2};

  jokerooo7::multiset<int> jokerooo7_three_obj = {1, 2, 3};
  std::multiset<int> std_three_obj = {1, 2, 3};

  jokerooo7::multiset<int> jokerooo7_four_obj = {1, 2, 3, 4};
  std::multiset<int> std_four_obj = {1, 2, 3, 4};

  jokerooo7::multiset<int> jokerooo7_five_obj = {1, 2, 3, 4, 5};
  std::multiset<int> std_five_obj = {1, 2, 3, 4, 5};

  jokerooo7::multiset<int> jokerooo7_six_obj = {2, 1, 3, 5, 4, 6, 8, 7};
  std::multiset<int> std_six_obj = {2, 1, 3, 5, 4, 6, 8, 7};

  jokerooo7::multiset<int> jokerooo7_seven_obj = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  std::multiset<int> std_seven_obj = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  jokerooo7::multiset<int> jokerooo7_eight_obj = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  std::multiset<int> std_eight_obj = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  jokerooo7::multiset<int> jokerooo7_nine_obj = {354, -100, 50,   1, 2, 3, 124, 5,
                                     4,   6,    -199, 7, 8, 9, 0,   10};
  std::multiset<int> std_nine_obj = {354, -100, 50,   1, 2, 3, 124, 5,
                                     4,   6,    -199, 7, 8, 9, 0,   10};

  jokerooo7::multiset<int> jokerooo7_ten_obj = {1, 1, 1, 1, 1, 2, 1, 2, 1, 2,
                                    2, 2, 1, 1, 1, 2, 3, 4, 1};
  std::multiset<int> std_ten_obj = {1, 1, 1, 1, 1, 2, 1, 2, 1, 2,
                                    2, 2, 1, 1, 1, 2, 3, 4, 1};
};

class multisetDoubleTests : public ::testing::Test {
 protected:
  jokerooo7::multiset<double> jokerooo7_empty_obj;
  std::multiset<double> std_empty_obj;

  jokerooo7::multiset<double> jokerooo7_first_obj = {0.992};
  std::multiset<double> std_first_obj = {0.992};

  jokerooo7::multiset<double> jokerooo7_second_obj = {0.001, 0.0002};
  std::multiset<double> std_second_obj = {0.001, 0.0002};

  jokerooo7::multiset<double> jokerooo7_three_obj = {0.001, 0.002, 0.003};
  std::multiset<double> std_three_obj = {0.001, 0.002, 0.003};

  jokerooo7::multiset<double> jokerooo7_four_obj = {0.001, 0.002, 0.003, 0.004};
  std::multiset<double> std_four_obj = {0.001, 0.002, 0.003, 0.004};

  jokerooo7::multiset<double> jokerooo7_five_obj = {0.001, 0.002, 0.003, 0.004, 0.005};
  std::multiset<double> std_five_obj = {0.001, 0.002, 0.003, 0.004, 0.005};

  jokerooo7::multiset<double> jokerooo7_six_obj = {0.0000009, 0.00000004, -0.00000001999,
                                       0.09999999999999};
  std::multiset<double> std_six_obj = {0.0000009, 0.00000004, -0.00000001999,
                                       0.09999999999999};
};

class multisetStringTests : public ::testing::Test {
 protected:
  jokerooo7::multiset<std::string> jokerooo7_empty_obj;
  std::multiset<std::string> std_empty_obj;

  jokerooo7::multiset<std::string> jokerooo7_first_obj = {""};
  std::multiset<std::string> std_first_obj = {""};

  jokerooo7::multiset<std::string> jokerooo7_second_obj = {"pop", "12345"};
  std::multiset<std::string> std_second_obj = {"pop", "12345"};

  jokerooo7::multiset<std::string> jokerooo7_three_obj = {"index", "lol", "utr"};
  std::multiset<std::string> std_three_obj = {"index", "lol", "utr"};

  jokerooo7::multiset<std::string> jokerooo7_four_obj = {"1", "2", "3", "4", "5",
                                             "6", "7", "8", "9", "10"};
  std::multiset<std::string> std_four_obj = {"1", "2", "3", "4", "5",
                                             "6", "7", "8", "9", "10"};

  jokerooo7::multiset<std::string> jokerooo7_five_obj = {"A", "2", "3", "B",  "C", "6",
                                             "7", "8", "9", "10", "1", "4"};
  std::multiset<std::string> std_five_obj = {"A", "2", "3", "B",  "C", "6",
                                             "7", "8", "9", "10", "1", "4"};

  jokerooo7::multiset<std::string> jokerooo7_six_obj = {"1", "2", "3", "4", "5",
                                            "1", "1", "3", "5", "10"};
  std::multiset<std::string> std_six_obj = {"1", "2", "3", "4", "5",
                                            "1", "1", "3", "5", "10"};

  jokerooo7::multiset<std::string> jokerooo7_seven_obj = {"apple",
                                              "banana",
                                              "car",
                                              "cat",
                                              "dogs",
                                              "lower",
                                              "skeleton",
                                              "public",
                                              "main",
                                              "bag",
                                              "DoDo",
                                              "pass",
                                              "yoda",
                                              "bar",
                                              "array"
                                              "cool",
                                              "private",
                                              "dooble",
                                              "sisi",
                                              "none",
                                              "mall",
                                              "pasta",
                                              "god",
                                              "cat"};

  std::multiset<std::string> std_seven_obj = {"apple",
                                              "banana",
                                              "car",
                                              "cat",
                                              "dogs",
                                              "lower",
                                              "skeleton",
                                              "public",
                                              "main",
                                              "bag",
                                              "DoDo",
                                              "pass",
                                              "yoda",
                                              "bar",
                                              "array"
                                              "cool",
                                              "private",
                                              "dooble",
                                              "sisi",
                                              "none",
                                              "mall",
                                              "pasta",
                                              "god",
                                              "cat"};
};

template <typename K>
void ComparingTwoObjects(jokerooo7::multiset<K> obj_one, std::multiset<K> obj_two) {
  typename jokerooo7::multiset<K>::iterator iter_one = obj_one.begin();
  typename std::multiset<K>::iterator iter_two = obj_two.begin();
  for (; iter_one != obj_one.end(); ++iter_one, ++iter_two) {
    if constexpr (std::is_arithmetic<K>::value) {
      EXPECT_NEAR(*iter_one, *iter_two, 1e-9);
      EXPECT_EQ(obj_one.size(), obj_two.size());
    } else {
      EXPECT_EQ(*iter_one, *iter_two);
      EXPECT_EQ(obj_one.size(), obj_two.size());
    }
  }
  EXPECT_EQ(obj_one.empty(), obj_two.empty());
  iter_one = obj_one.begin();
  iter_two = obj_two.begin();
  for (; iter_two != obj_two.end(); ++iter_one, ++iter_two) {
    if constexpr (std::is_arithmetic<K>::value) {
      EXPECT_NEAR(*iter_one, *iter_two, 1e-9);
      EXPECT_EQ(obj_one.size(), obj_two.size());
    } else {
      EXPECT_EQ(*iter_one, *iter_two);
      EXPECT_EQ(obj_one.size(), obj_two.size());
    }
  }
  EXPECT_EQ(obj_one.empty(), obj_two.empty());
}

template <typename K>
void TestMultisetIntFuncionOne(jokerooo7::multiset<K> obj_one,
                               std::multiset<K> obj_two) {
  ComparingTwoObjects(obj_one, obj_two);
}

template <typename K>
void TestMultisetIntFuncionTwo(jokerooo7::multiset<K> obj_one,
                               std::multiset<K> obj_two) {
  typename jokerooo7::multiset<K>::iterator iter_one = obj_one.begin();
  typename std::multiset<K>::iterator iter_two = obj_two.begin();
  if (!obj_one.empty()) {
    obj_one.erase(iter_one);
    obj_two.erase(iter_two);
  }
  ComparingTwoObjects(obj_one, obj_two);
}

template <typename K>
void TestMultisetIntFuncionThree(jokerooo7::multiset<K> obj_one,
                                 std::multiset<K> obj_two) {
  typename jokerooo7::multiset<K>::iterator iter_one = obj_one.begin();
  typename std::multiset<K>::iterator iter_two = obj_two.begin();
  for (; iter_one != obj_one.end();
       iter_one = obj_one.begin(), iter_two = obj_two.begin()) {
    if constexpr (std::is_arithmetic<K>::value) {
      EXPECT_NEAR(*iter_one, *iter_two, 1e-9);
    } else {
      EXPECT_EQ(*iter_one, *iter_two);
    }
    if (!obj_two.empty()) {
      obj_one.erase(iter_one);
      obj_two.erase(iter_two);
    }
  }
  EXPECT_EQ(obj_one.empty(), obj_two.empty());
}

template <typename K>
void TestMultisetIntFuncionFour(jokerooo7::multiset<K> obj_one,
                                std::multiset<K> obj_two) {
  typename jokerooo7::multiset<K>::iterator iter_one = obj_one.begin();
  typename std::multiset<K>::iterator iter_two = obj_two.begin();
  for (int i = 0; i != 10;
       ++i, iter_one = obj_one.begin(), iter_two = obj_two.begin()) {
    if (!obj_two.empty()) {
      obj_one.erase(iter_one);
      obj_two.erase(iter_two);
    }
    obj_one.insert(i);
    obj_two.insert(i);
    ComparingTwoObjects(obj_one, obj_two);
  }
  EXPECT_EQ(obj_one.empty(), obj_two.empty());
}

template <typename K>
void TestMultisetIntFuncionFive(jokerooo7::multiset<K> obj_one,
                                std::multiset<K> obj_two) {
  typename jokerooo7::multiset<K>::iterator iter_one = obj_one.begin();
  typename std::multiset<K>::iterator iter_two = obj_two.begin();
  for (int i = 0; i != 20;
       ++i, iter_one = obj_one.begin(), iter_two = obj_two.begin()) {
    if (!obj_two.empty() && i % 2 == 0) {
      obj_one.erase(iter_one);
      obj_two.erase(iter_two);
    }
    obj_one.insert(i);
    obj_two.insert(i);
    ComparingTwoObjects(obj_one, obj_two);
  }
  EXPECT_EQ(obj_one.empty(), obj_two.empty());
}

template <typename K>
void TestMultisetIntFuncionSix(jokerooo7::multiset<K> obj_one,
                               std::multiset<K> obj_two) {
  typename jokerooo7::multiset<K>::iterator iter_one = obj_one.begin();
  typename std::multiset<K>::iterator iter_two = obj_two.begin();
  for (int i = 0; i != 100; ++i) {
    if (!obj_two.empty() && i % 2 == 0) {
      obj_one.erase(iter_one);
      obj_two.erase(iter_two);
    }
    obj_one.insert(i);
    obj_two.insert(i);
    ComparingTwoObjects(obj_one, obj_two);
    iter_one = obj_one.find(i), iter_two = obj_two.find(i);
  }
  EXPECT_EQ(obj_one.empty(), obj_two.empty());
}

template <typename K>
void TestMultisetIntFuncionSeven(jokerooo7::multiset<K> obj_one,
                                 std::multiset<K> obj_two) {
  typename jokerooo7::multiset<K>::iterator iter_one = obj_one.begin();
  typename std::multiset<K>::iterator iter_two = obj_two.begin();
  for (int i = 0; i != 100; ++i) {
    if (!obj_two.empty() && i % 3 == 0) {
      obj_one.erase(iter_one);
      obj_two.erase(iter_two);
    }
    obj_one.insert(i);
    obj_two.insert(i);
    ComparingTwoObjects(obj_one, obj_two);
    iter_one = obj_one.find(i), iter_two = obj_two.find(i);
  }
  EXPECT_EQ(obj_one.empty(), obj_two.empty());
}

template <typename K>
void TestMultisetIntFuncionEight(jokerooo7::multiset<K> obj_one,
                                 std::multiset<K> obj_two) {
  typename jokerooo7::multiset<K>::iterator iter_one = obj_one.begin();
  typename std::multiset<K>::iterator iter_two = obj_two.begin();
  for (int i = 0; i != 100; ++i) {
    if (!obj_two.empty() && i % 7 == 0) {
      obj_one.erase(iter_one);
      obj_two.erase(iter_two);
    }
    obj_one.insert(i);
    obj_two.insert(i);
    ComparingTwoObjects(obj_one, obj_two);
    iter_one = obj_one.find(i), iter_two = obj_two.find(i);
  }
  EXPECT_EQ(obj_one.empty(), obj_two.empty());
}

template <typename K>
void TestMultisetIntFuncionNine(jokerooo7::multiset<K> obj_one,
                                std::multiset<K> obj_two) {
  typename jokerooo7::multiset<K> copy_obj_one(obj_one);
  typename std::multiset<K> copy_obj_two(obj_two);
  typename jokerooo7::multiset<K>::iterator iter_one = obj_one.begin();
  typename jokerooo7::multiset<K>::iterator iter_copy_one = copy_obj_one.begin();
  typename std::multiset<K>::iterator iter_two = obj_two.begin();
  typename std::multiset<K>::iterator iter_copy_two = copy_obj_two.begin();
  for (; iter_one != obj_one.end();
       ++iter_one, ++iter_copy_one, ++iter_two, ++iter_copy_two) {
    if constexpr (std::is_arithmetic<K>::value) {
      EXPECT_NEAR(*iter_one, *iter_two, 1e-9);
      EXPECT_NEAR(*iter_one, *iter_copy_one, 1e-9);
      EXPECT_NEAR(*iter_copy_one, *iter_copy_two, 1e-9);
    } else {
      EXPECT_EQ(*iter_one, *iter_two);
      EXPECT_EQ(*iter_one, *iter_copy_one);
      EXPECT_EQ(*iter_copy_one, *iter_copy_two);
    }
  }
}

template <typename K>
void TestMultisetIntFuncionTen(jokerooo7::multiset<K> obj_one,
                               std::multiset<K> obj_two) {
  typename jokerooo7::multiset<K> copy_obj_one = std::move(obj_one);
  typename std::multiset<K> copy_obj_two = std::move(obj_two);
  ComparingTwoObjects(obj_one, obj_two);
  ComparingTwoObjects(copy_obj_one, copy_obj_two);
}

template <typename K>
void TestMultisetIntFuncionEleven(jokerooo7::multiset<K> obj_one,
                                  std::multiset<K> obj_two) {
  typename jokerooo7::multiset<K> copy_obj_one;
  typename std::multiset<K> copy_obj_two;
  copy_obj_one = obj_one;
  copy_obj_two = obj_two;
  typename jokerooo7::multiset<K>::iterator iter_one = obj_one.begin();
  typename jokerooo7::multiset<K>::iterator iter_copy_one = copy_obj_one.begin();
  typename std::multiset<K>::iterator iter_two = obj_two.begin();
  typename std::multiset<K>::iterator iter_copy_two = copy_obj_two.begin();
  for (; iter_one != obj_one.end();
       ++iter_one, ++iter_copy_one, ++iter_two, ++iter_copy_two) {
    if constexpr (std::is_arithmetic<K>::value) {
      EXPECT_NEAR(*iter_one, *iter_two, 1e-9);
      EXPECT_NEAR(*iter_one, *iter_copy_one, 1e-9);
      EXPECT_NEAR(*iter_copy_one, *iter_copy_two, 1e-9);
    } else {
      EXPECT_EQ(*iter_one, *iter_two);
      EXPECT_EQ(*iter_one, *iter_copy_one);
      EXPECT_EQ(*iter_copy_one, *iter_copy_two);
    }
  }
}

template <typename K>
void TestMultisetIntFuncionTwelve(jokerooo7::multiset<K> obj_one,
                                  std::multiset<K> obj_two) {
  typename jokerooo7::multiset<K> copy_obj_one;
  typename std::multiset<K> copy_obj_two;
  copy_obj_one = std::move(obj_one);
  copy_obj_two = std::move(obj_two);
  ComparingTwoObjects(obj_one, obj_two);
  ComparingTwoObjects(copy_obj_one, copy_obj_two);
}

template <typename K>
void TestMultisetIntFuncionThirteen(jokerooo7::multiset<K> obj_one,
                                    std::multiset<K> obj_two) {
  EXPECT_EQ(obj_one.size(), obj_two.size());
  if (!obj_one.empty()) obj_one.erase(obj_one.begin());
  if (!obj_two.empty()) obj_two.erase(obj_two.begin());
  EXPECT_EQ(obj_one.size(), obj_two.size());
}

template <typename K>
void TestMultisetIntFuncionFourteen(jokerooo7::multiset<K> obj_one,
                                    std::multiset<K> obj_two) {
  typename jokerooo7::multiset<K>::iterator iter_one = obj_one.end();
  typename std::multiset<K>::iterator iter_two = obj_two.end();
  if (!obj_one.empty()) {  // becose *iter (nullptr) in my realization == 0
    --iter_one;
    --iter_two;
  }
  for (int i = 1; iter_one != obj_one.begin(); --iter_one, --iter_two, ++i) {
    if constexpr (std::is_arithmetic<K>::value) {
      EXPECT_NEAR(*iter_one, *iter_two, 1e-9);
    } else {
      EXPECT_EQ(*iter_one, *iter_two);
    }
  }
  // iter_one = obj_one.end();make test_multiset

  // iter_two = obj_two.end();
  // for (; iter_two != obj_two.begin(); --iter_one, --iter_two) {
  //    EXPECT_EQ(*iter_one--, *iter_two--);
  // }
}

template <typename K>
void TestMultisetIntFuncionClear(jokerooo7::multiset<K> obj_one,
                                 std::multiset<K> obj_two) {
  obj_one.clear();
  obj_two.clear();
  ComparingTwoObjects(obj_one, obj_two);
}

template <typename K>
void TestMultisetIntFunctionSwap(jokerooo7::multiset<K> obj_one,
                                 jokerooo7::multiset<K> obj_two,
                                 typename std::multiset<K> std_one,
                                 std::multiset<K> std_two) {
  obj_one.swap(obj_two);
  std_one.swap(std_two);
  ComparingTwoObjects(obj_one, std_one);
  ComparingTwoObjects(obj_two, std_two);
}

template <typename K>
void TestMultisetIntFunctionFind(jokerooo7::multiset<K> obj_one,
                                 std::multiset<K> obj_two) {
  obj_two.find(-12);
  EXPECT_EQ(*obj_one.find(-12), 0);  // my_realization
}

template <typename K>
void TestMultisetStringFunctionFind(jokerooo7::multiset<K> obj_one,
                                    std::multiset<K> obj_two) {
  obj_two.find("-cat");
  EXPECT_EQ(*obj_one.find("-cat"), "");  // my_realization
}

template <typename K>
void TestMultisetIntFunctionFindTwo(jokerooo7::multiset<K> obj_one,
                                    std::multiset<K> obj_two) {
  if (!obj_one.empty()) {
    typename jokerooo7::multiset<K>::iterator iter_one = obj_one.begin();
    typename std::multiset<K>::iterator iter_two = obj_two.begin();
    EXPECT_EQ(*obj_one.find(*iter_one), *obj_two.find(*iter_two));
  }
}

template <typename K>
void TestMultisetIntFunctionMaxSize(jokerooo7::multiset<K> obj_one,
                                    std::multiset<K> obj_two) {
  EXPECT_EQ(obj_one.max_size(), obj_two.max_size());
}

template <typename K>
void TestMultisetIntFunctionConstIter(jokerooo7::multiset<K> obj_one,
                                      std::multiset<K> obj_two) {
  typename jokerooo7::multiset<K>::const_iterator iter_one = obj_one.begin();
  typename std::multiset<K>::const_iterator iter_two = obj_two.begin();
  if (!obj_one.empty()) {
    if constexpr (std::is_arithmetic<K>::value) {
      EXPECT_NEAR(*iter_one, *iter_two, 1e-9);
    } else {
      EXPECT_EQ(*iter_one, *iter_two);
    }
    EXPECT_EQ(*obj_one.find(*iter_one), *obj_two.find(*iter_two));
    if (obj_one.size() > 1) {
      ++iter_one;
      ++iter_two;
      EXPECT_EQ(*iter_one, *iter_two);
    }
  }
}

template <typename K>
void TestMultisetIntFunctionMerge(jokerooo7::multiset<K> obj_one,
                                  jokerooo7::multiset<K> obj_two) {  // my realization
  typename jokerooo7::multiset<K> copy_obj_one(obj_one);
  typename jokerooo7::multiset<K> copy_obj_two(obj_two);
  typename jokerooo7::multiset<K>::iterator iter_one = obj_two.begin();
  for (; iter_one != obj_two.end(); ++iter_one) {
    copy_obj_one.insert(*iter_one);
  }
  obj_one.merge(obj_two);

  typename jokerooo7::multiset<K>::iterator iter_two = obj_one.begin();
  iter_one = copy_obj_one.begin();
  for (; iter_one != copy_obj_one.end(); ++iter_one, ++iter_two) {
    if constexpr (std::is_arithmetic<K>::value) {
      EXPECT_NEAR(*iter_one, *iter_two, 1e-9);
    } else {
      EXPECT_EQ(*iter_one, *iter_two);
    }
  }
  EXPECT_EQ(copy_obj_one.size(), obj_one.size());

  iter_one = copy_obj_two.begin();
  iter_two = obj_two.begin();
  for (; iter_one != copy_obj_two.end(); ++iter_one, ++iter_two) {
    if constexpr (std::is_arithmetic<K>::value) {
      EXPECT_NEAR(*iter_one, *iter_two, 1e-9);
    } else {
      EXPECT_EQ(*iter_one, *iter_two);
    }
  }
  EXPECT_EQ(copy_obj_two.size(), obj_two.size());
}

template <typename K>
void TestMultisetIntFunctionEmplace(jokerooo7::multiset<K> obj_one,
                                    std::multiset<K> obj_two) {
  auto r = obj_one.insert_many(100.0, 200.0, 42.0, 400.0);

  //  auto pr1 = o.insert_many(100);
  //  auto pr2 = o.insert_many(200);
  auto pr3 = obj_two.emplace(42.0);
  //  auto pr4 = o.insert_many(400);

  EXPECT_EQ(*r[2].first, *pr3);  // Сравниваем значения, а не итераторы
}

template <typename K>
void TestMultisetIntFunctionEqualRange(jokerooo7::multiset<K> obj_one,
                                       std::multiset<K> obj_two) {
  std::pair<typename jokerooo7::multiset<K>::iterator,
            typename jokerooo7::multiset<K>::iterator>
      iter_one;
  std::pair<typename std::multiset<K>::iterator,
            typename std::multiset<K>::iterator>
      iter_two;
  iter_one = obj_one.equal_range(1);
  iter_two = obj_two.equal_range(1);
  if (*iter_two.first !=
      0) {  // в моей реализации несуществующий элемент - возращает 0
    EXPECT_NEAR(*iter_one.first, *iter_two.first, 1e-9);
    if (*iter_one.second != 0) {
      EXPECT_NEAR(*iter_one.second, *iter_two.second, 1e-9);
    }
  }
}

template <typename K>
void TestMultisetIntFunctionCount(jokerooo7::multiset<K> obj_one,
                                  std::multiset<K> obj_two) {
  if constexpr (std::is_arithmetic<K>::value) {
    size_t count_one = obj_one.count(1);
    size_t count_two = obj_two.count(1);
    EXPECT_EQ(count_one, count_two);
  } else {
    size_t count_one = obj_one.count("cat");
    size_t count_two = obj_two.count("cat");
    EXPECT_EQ(count_one, count_two);
  }
}

template <typename K>
void TestMultisetIntFunctionLowerBound(jokerooo7::multiset<K> obj_one,
                                       std::multiset<K> obj_two) {
  typename jokerooo7::multiset<K>::iterator iter_one;
  typename std::multiset<K>::iterator iter_two;
  if constexpr (std::is_arithmetic<K>::value) {
    iter_one = obj_one.lower_bound(1);
    iter_two = obj_two.lower_bound(1);
    if (*iter_one != 0) {
      EXPECT_EQ(*iter_one, *iter_two);
    }
  } else {
    iter_one = obj_one.lower_bound("cat");
    iter_two = obj_two.lower_bound("cat");
    if (*iter_one != "") {
      EXPECT_EQ(*iter_one, *iter_two);
    }
  }
}

template <typename K>
void TestMultisetIntFunctionUpperBound(jokerooo7::multiset<K> obj_one,
                                       std::multiset<K> obj_two) {
  typename jokerooo7::multiset<K>::iterator iter_one;
  typename std::multiset<K>::iterator iter_two;
  if constexpr (std::is_arithmetic<K>::value) {
    iter_one = obj_one.upper_bound(1);
    iter_two = obj_two.upper_bound(1);
    if (*iter_one != 0) {
      EXPECT_EQ(*iter_one, *iter_two);
    }
  } else {
    iter_one = obj_one.lower_bound("cat");
    iter_two = obj_two.lower_bound("cat");
    if (*iter_one != "") {
      EXPECT_EQ(*iter_one, *iter_two);
    }
  }
}

TEST_F(multisetIntTests, Test1) {
  TestMultisetIntFuncionOne(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionOne(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionOne(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionOne(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionOne(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionOne(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionOne(jokerooo7_six_obj, std_six_obj);
  TestMultisetIntFuncionOne(jokerooo7_seven_obj, std_seven_obj);
  TestMultisetIntFuncionOne(jokerooo7_eight_obj, std_eight_obj);
  TestMultisetIntFuncionOne(jokerooo7_nine_obj, std_nine_obj);
  TestMultisetIntFuncionOne(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(multisetIntTests, Test2) {
  TestMultisetIntFuncionTwo(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionTwo(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionTwo(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionTwo(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionTwo(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionTwo(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionTwo(jokerooo7_six_obj, std_six_obj);
  TestMultisetIntFuncionTwo(jokerooo7_seven_obj, std_seven_obj);
  TestMultisetIntFuncionTwo(jokerooo7_eight_obj, std_eight_obj);
  TestMultisetIntFuncionTwo(jokerooo7_nine_obj, std_nine_obj);
  TestMultisetIntFuncionTwo(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(multisetIntTests, Test3) {
  TestMultisetIntFuncionThree(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionThree(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionThree(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionThree(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionThree(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionThree(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionThree(jokerooo7_six_obj, std_six_obj);
  TestMultisetIntFuncionThree(jokerooo7_seven_obj, std_seven_obj);
  TestMultisetIntFuncionThree(jokerooo7_eight_obj, std_eight_obj);
  TestMultisetIntFuncionThree(jokerooo7_nine_obj, std_nine_obj);
  TestMultisetIntFuncionThree(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(multisetIntTests, Test4) {
  TestMultisetIntFuncionFour(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionFour(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionFour(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionFour(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionFour(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionFour(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionFour(jokerooo7_six_obj, std_six_obj);
  TestMultisetIntFuncionFour(jokerooo7_seven_obj, std_seven_obj);
  TestMultisetIntFuncionFour(jokerooo7_eight_obj, std_eight_obj);
  TestMultisetIntFuncionFour(jokerooo7_nine_obj, std_nine_obj);
  TestMultisetIntFuncionFour(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(multisetIntTests, Test5) {
  TestMultisetIntFuncionFive(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionFive(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionFive(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionFive(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionFive(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionFive(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionFive(jokerooo7_six_obj, std_six_obj);
  TestMultisetIntFuncionFive(jokerooo7_seven_obj, std_seven_obj);
  TestMultisetIntFuncionFive(jokerooo7_eight_obj, std_eight_obj);
  TestMultisetIntFuncionFive(jokerooo7_nine_obj, std_nine_obj);
  TestMultisetIntFuncionFive(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(multisetIntTests, Test6) {
  TestMultisetIntFuncionSix(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionSix(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionSix(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionSix(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionSix(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionSix(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionSix(jokerooo7_six_obj, std_six_obj);
  TestMultisetIntFuncionSix(jokerooo7_seven_obj, std_seven_obj);
  TestMultisetIntFuncionSix(jokerooo7_eight_obj, std_eight_obj);
  TestMultisetIntFuncionSix(jokerooo7_nine_obj, std_nine_obj);
  TestMultisetIntFuncionSix(jokerooo7_ten_obj, std_ten_obj);
}
TEST_F(multisetIntTests, Test7) {
  TestMultisetIntFuncionSeven(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionSeven(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionSeven(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionSeven(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionSeven(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionSeven(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionSeven(jokerooo7_six_obj, std_six_obj);
  TestMultisetIntFuncionSeven(jokerooo7_seven_obj, std_seven_obj);
  TestMultisetIntFuncionSeven(jokerooo7_eight_obj, std_eight_obj);
  TestMultisetIntFuncionSeven(jokerooo7_nine_obj, std_nine_obj);
  TestMultisetIntFuncionSeven(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(multisetIntTests, Test8) {
  TestMultisetIntFuncionEight(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionEight(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionEight(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionEight(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionEight(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionEight(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionEight(jokerooo7_six_obj, std_six_obj);
  TestMultisetIntFuncionEight(jokerooo7_seven_obj, std_seven_obj);
  TestMultisetIntFuncionEight(jokerooo7_eight_obj, std_eight_obj);
  TestMultisetIntFuncionEight(jokerooo7_nine_obj, std_nine_obj);
  TestMultisetIntFuncionEight(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(multisetIntTests, Test9) {
  TestMultisetIntFuncionNine(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionNine(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionNine(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionNine(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionNine(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionNine(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionNine(jokerooo7_six_obj, std_six_obj);
  TestMultisetIntFuncionNine(jokerooo7_seven_obj, std_seven_obj);
  TestMultisetIntFuncionNine(jokerooo7_eight_obj, std_eight_obj);
  TestMultisetIntFuncionNine(jokerooo7_nine_obj, std_nine_obj);
  TestMultisetIntFuncionNine(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(multisetIntTests, Test10) {
  TestMultisetIntFuncionTen(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionTen(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionTen(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionTen(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionTen(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionTen(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionTen(jokerooo7_six_obj, std_six_obj);
  TestMultisetIntFuncionTen(jokerooo7_seven_obj, std_seven_obj);
  TestMultisetIntFuncionTen(jokerooo7_eight_obj, std_eight_obj);
  TestMultisetIntFuncionTen(jokerooo7_nine_obj, std_nine_obj);
  TestMultisetIntFuncionTen(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(multisetIntTests, Test11) {
  TestMultisetIntFuncionEleven(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionEleven(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionEleven(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionEleven(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionEleven(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionEleven(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionEleven(jokerooo7_six_obj, std_six_obj);
  TestMultisetIntFuncionEleven(jokerooo7_seven_obj, std_seven_obj);
  TestMultisetIntFuncionEleven(jokerooo7_eight_obj, std_eight_obj);
  TestMultisetIntFuncionEleven(jokerooo7_nine_obj, std_nine_obj);
  TestMultisetIntFuncionEleven(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(multisetIntTests, Test12) {
  TestMultisetIntFuncionTwelve(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionTwelve(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionTwelve(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionTwelve(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionTwelve(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionTwelve(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionTwelve(jokerooo7_six_obj, std_six_obj);
  TestMultisetIntFuncionTwelve(jokerooo7_seven_obj, std_seven_obj);
  TestMultisetIntFuncionTwelve(jokerooo7_eight_obj, std_eight_obj);
  TestMultisetIntFuncionTwelve(jokerooo7_nine_obj, std_nine_obj);
  TestMultisetIntFuncionTwelve(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(multisetIntTests, Test13) {
  TestMultisetIntFuncionThirteen(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionThirteen(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionThirteen(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionThirteen(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionThirteen(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionThirteen(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionThirteen(jokerooo7_six_obj, std_six_obj);
  TestMultisetIntFuncionThirteen(jokerooo7_seven_obj, std_seven_obj);
  TestMultisetIntFuncionThirteen(jokerooo7_eight_obj, std_eight_obj);
  TestMultisetIntFuncionThirteen(jokerooo7_nine_obj, std_nine_obj);
  TestMultisetIntFuncionThirteen(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(multisetIntTests, Test14) {
  TestMultisetIntFuncionFourteen(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionFourteen(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionFourteen(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionFourteen(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionFourteen(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionFourteen(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionFourteen(jokerooo7_six_obj, std_six_obj);
  TestMultisetIntFuncionFourteen(jokerooo7_seven_obj, std_seven_obj);
  TestMultisetIntFuncionFourteen(jokerooo7_eight_obj, std_eight_obj);
  TestMultisetIntFuncionFourteen(jokerooo7_nine_obj, std_nine_obj);
  TestMultisetIntFuncionFourteen(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(multisetIntTests, Test15) {
  TestMultisetIntFuncionClear(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionClear(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionClear(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionClear(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionClear(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionClear(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionClear(jokerooo7_six_obj, std_six_obj);
  TestMultisetIntFuncionClear(jokerooo7_seven_obj, std_seven_obj);
  TestMultisetIntFuncionClear(jokerooo7_eight_obj, std_eight_obj);
  TestMultisetIntFuncionClear(jokerooo7_nine_obj, std_nine_obj);
  TestMultisetIntFuncionClear(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(multisetIntTests, Test16) {
  TestMultisetIntFunctionSwap(jokerooo7_empty_obj, jokerooo7_first_obj, std_empty_obj,
                              std_first_obj);
  TestMultisetIntFunctionSwap(jokerooo7_first_obj, jokerooo7_second_obj, std_first_obj,
                              std_second_obj);
  TestMultisetIntFunctionSwap(jokerooo7_second_obj, jokerooo7_three_obj, std_second_obj,
                              std_three_obj);
  TestMultisetIntFunctionSwap(jokerooo7_three_obj, jokerooo7_four_obj, std_three_obj,
                              std_four_obj);
  TestMultisetIntFunctionSwap(jokerooo7_four_obj, jokerooo7_five_obj, std_four_obj,
                              std_five_obj);
  TestMultisetIntFunctionSwap(jokerooo7_five_obj, jokerooo7_six_obj, std_five_obj,
                              std_six_obj);
  TestMultisetIntFunctionSwap(jokerooo7_six_obj, jokerooo7_seven_obj, std_six_obj,
                              std_seven_obj);
  TestMultisetIntFunctionSwap(jokerooo7_seven_obj, jokerooo7_eight_obj, std_seven_obj,
                              std_eight_obj);
  TestMultisetIntFunctionSwap(jokerooo7_eight_obj, jokerooo7_nine_obj, std_eight_obj,
                              std_nine_obj);
  TestMultisetIntFunctionSwap(jokerooo7_nine_obj, jokerooo7_ten_obj, std_nine_obj,
                              std_ten_obj);
  TestMultisetIntFunctionSwap(jokerooo7_ten_obj, jokerooo7_empty_obj, std_ten_obj,
                              std_empty_obj);
}

TEST_F(multisetIntTests, Test17) {
  TestMultisetIntFunctionMerge(jokerooo7_empty_obj, jokerooo7_first_obj);
  TestMultisetIntFunctionMerge(jokerooo7_first_obj, jokerooo7_second_obj);
  TestMultisetIntFunctionMerge(jokerooo7_second_obj, jokerooo7_three_obj);
  TestMultisetIntFunctionMerge(jokerooo7_three_obj, jokerooo7_four_obj);
  TestMultisetIntFunctionMerge(jokerooo7_four_obj, jokerooo7_five_obj);
  TestMultisetIntFunctionMerge(jokerooo7_five_obj, jokerooo7_six_obj);
  TestMultisetIntFunctionMerge(jokerooo7_six_obj, jokerooo7_seven_obj);
  TestMultisetIntFunctionMerge(jokerooo7_seven_obj, jokerooo7_eight_obj);
  TestMultisetIntFunctionMerge(jokerooo7_eight_obj, jokerooo7_nine_obj);
  TestMultisetIntFunctionMerge(jokerooo7_nine_obj, jokerooo7_ten_obj);
  TestMultisetIntFunctionMerge(jokerooo7_ten_obj, jokerooo7_empty_obj);
}

TEST_F(multisetIntTests, Test18) {
  TestMultisetIntFunctionFind(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFunctionFind(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFunctionFind(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFunctionFind(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFunctionFind(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFunctionFind(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFunctionFind(jokerooo7_six_obj, std_six_obj);
  TestMultisetIntFunctionFind(jokerooo7_seven_obj, std_seven_obj);
  TestMultisetIntFunctionFind(jokerooo7_eight_obj, std_eight_obj);
  TestMultisetIntFunctionFind(jokerooo7_nine_obj, std_nine_obj);
  TestMultisetIntFunctionFind(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(multisetIntTests, Test19) {
  TestMultisetIntFunctionFindTwo(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFunctionFindTwo(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFunctionFindTwo(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFunctionFindTwo(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFunctionFindTwo(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFunctionFindTwo(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFunctionFindTwo(jokerooo7_six_obj, std_six_obj);
  TestMultisetIntFunctionFindTwo(jokerooo7_seven_obj, std_seven_obj);
  TestMultisetIntFunctionFindTwo(jokerooo7_eight_obj, std_eight_obj);
  TestMultisetIntFunctionFindTwo(jokerooo7_nine_obj, std_nine_obj);
  TestMultisetIntFunctionFindTwo(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(multisetIntTests, Test20) {
  TestMultisetIntFunctionMaxSize(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFunctionMaxSize(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFunctionMaxSize(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFunctionMaxSize(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFunctionMaxSize(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFunctionMaxSize(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFunctionMaxSize(jokerooo7_six_obj, std_six_obj);
  TestMultisetIntFunctionMaxSize(jokerooo7_seven_obj, std_seven_obj);
  TestMultisetIntFunctionMaxSize(jokerooo7_eight_obj, std_eight_obj);
  TestMultisetIntFunctionMaxSize(jokerooo7_nine_obj, std_nine_obj);
  TestMultisetIntFunctionMaxSize(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(multisetIntTests, Test21) {
  TestMultisetIntFunctionConstIter(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFunctionConstIter(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFunctionConstIter(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFunctionConstIter(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFunctionConstIter(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFunctionConstIter(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFunctionConstIter(jokerooo7_six_obj, std_six_obj);
  TestMultisetIntFunctionConstIter(jokerooo7_seven_obj, std_seven_obj);
  TestMultisetIntFunctionConstIter(jokerooo7_eight_obj, std_eight_obj);
  TestMultisetIntFunctionConstIter(jokerooo7_nine_obj, std_nine_obj);
  TestMultisetIntFunctionConstIter(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(multisetIntTests, Test22) {
  EXPECT_EQ(jokerooo7_empty_obj.contains(-12), false);
  EXPECT_EQ(jokerooo7_first_obj.contains(-1), false);
  EXPECT_EQ(jokerooo7_second_obj.contains(2), true);
  EXPECT_EQ(jokerooo7_three_obj.contains(4), false);
  EXPECT_EQ(jokerooo7_four_obj.contains(-12), false);
  EXPECT_EQ(jokerooo7_five_obj.contains(-12), false);
  EXPECT_EQ(jokerooo7_six_obj.contains(1), true);
  EXPECT_EQ(jokerooo7_eight_obj.contains(10), true);
  EXPECT_EQ(jokerooo7_nine_obj.contains(354), true);
  EXPECT_EQ(jokerooo7_ten_obj.contains(-12), false);
}

TEST_F(multisetIntTests, Test23) {
  TestMultisetIntFunctionEqualRange(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFunctionEqualRange(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFunctionEqualRange(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFunctionEqualRange(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFunctionEqualRange(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFunctionEqualRange(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFunctionEqualRange(jokerooo7_six_obj, std_six_obj);
  TestMultisetIntFunctionEqualRange(jokerooo7_seven_obj, std_seven_obj);
  TestMultisetIntFunctionEqualRange(jokerooo7_eight_obj, std_eight_obj);
  TestMultisetIntFunctionEqualRange(jokerooo7_nine_obj, std_nine_obj);
  TestMultisetIntFunctionEqualRange(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(multisetIntTests, Test24) {
  TestMultisetIntFunctionCount(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFunctionCount(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFunctionCount(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFunctionCount(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFunctionCount(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFunctionCount(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFunctionCount(jokerooo7_six_obj, std_six_obj);
  TestMultisetIntFunctionCount(jokerooo7_seven_obj, std_seven_obj);
  TestMultisetIntFunctionCount(jokerooo7_eight_obj, std_eight_obj);
  TestMultisetIntFunctionCount(jokerooo7_nine_obj, std_nine_obj);
  TestMultisetIntFunctionCount(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(multisetIntTests, Test25) {
  TestMultisetIntFunctionLowerBound(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFunctionLowerBound(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFunctionLowerBound(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFunctionLowerBound(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFunctionLowerBound(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFunctionLowerBound(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFunctionLowerBound(jokerooo7_six_obj, std_six_obj);
  TestMultisetIntFunctionLowerBound(jokerooo7_seven_obj, std_seven_obj);
  TestMultisetIntFunctionLowerBound(jokerooo7_eight_obj, std_eight_obj);
  TestMultisetIntFunctionLowerBound(jokerooo7_nine_obj, std_nine_obj);
  TestMultisetIntFunctionLowerBound(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(multisetIntTests, Test26) {
  TestMultisetIntFunctionUpperBound(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFunctionUpperBound(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFunctionUpperBound(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFunctionUpperBound(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFunctionUpperBound(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFunctionUpperBound(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFunctionUpperBound(jokerooo7_six_obj, std_six_obj);
  TestMultisetIntFunctionUpperBound(jokerooo7_seven_obj, std_seven_obj);
  TestMultisetIntFunctionUpperBound(jokerooo7_eight_obj, std_eight_obj);
  TestMultisetIntFunctionUpperBound(jokerooo7_nine_obj, std_nine_obj);
  TestMultisetIntFunctionUpperBound(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(multisetDoubleTests, Test1) {
  TestMultisetIntFuncionOne(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionOne(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionOne(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionOne(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionOne(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionOne(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionOne(jokerooo7_six_obj, std_six_obj);
}

TEST_F(multisetDoubleTests, Test2) {
  TestMultisetIntFuncionTwo(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionTwo(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionTwo(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionTwo(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionTwo(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionTwo(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionTwo(jokerooo7_six_obj, std_six_obj);
}

TEST_F(multisetDoubleTests, Test3) {
  TestMultisetIntFuncionThree(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionThree(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionThree(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionThree(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionThree(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionThree(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionThree(jokerooo7_six_obj, std_six_obj);
}

TEST_F(multisetDoubleTests, Test4) {
  TestMultisetIntFuncionFour(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionFour(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionFour(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionFour(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionFour(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionFour(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionFour(jokerooo7_six_obj, std_six_obj);
}

TEST_F(multisetDoubleTests, Test5) {
  TestMultisetIntFuncionFive(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionFive(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionFive(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionFive(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionFive(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionFive(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionFive(jokerooo7_six_obj, std_six_obj);
}

TEST_F(multisetDoubleTests, Test6) {
  TestMultisetIntFuncionSix(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionSix(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionSix(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionSix(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionSix(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionSix(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionSix(jokerooo7_six_obj, std_six_obj);
}

TEST_F(multisetDoubleTests, Test7) {
  TestMultisetIntFuncionSeven(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionSeven(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionSeven(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionSeven(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionSeven(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionSeven(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionSeven(jokerooo7_six_obj, std_six_obj);
}

TEST_F(multisetDoubleTests, Test8) {
  TestMultisetIntFuncionEight(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionEight(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionEight(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionEight(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionEight(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionEight(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionEight(jokerooo7_six_obj, std_six_obj);
}

TEST_F(multisetDoubleTests, Test9) {
  TestMultisetIntFuncionNine(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionNine(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionNine(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionNine(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionNine(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionNine(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionNine(jokerooo7_six_obj, std_six_obj);
}

TEST_F(multisetDoubleTests, Test10) {
  TestMultisetIntFuncionTen(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionTen(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionTen(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionTen(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionTen(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionTen(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionTen(jokerooo7_six_obj, std_six_obj);
}

TEST_F(multisetDoubleTests, Test11) {
  TestMultisetIntFuncionEleven(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionEleven(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionEleven(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionEleven(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionEleven(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionEleven(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionEleven(jokerooo7_six_obj, std_six_obj);
}

TEST_F(multisetDoubleTests, Test12) {
  TestMultisetIntFuncionTwelve(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionTwelve(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionTwelve(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionTwelve(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionTwelve(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionTwelve(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionTwelve(jokerooo7_six_obj, std_six_obj);
}

TEST_F(multisetDoubleTests, Test13) {
  TestMultisetIntFuncionThirteen(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionThirteen(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionThirteen(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionThirteen(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionThirteen(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionThirteen(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionThirteen(jokerooo7_six_obj, std_six_obj);
}

TEST_F(multisetDoubleTests, Test14) {
  TestMultisetIntFuncionFourteen(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionFourteen(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionFourteen(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionFourteen(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionFourteen(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionFourteen(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionFourteen(jokerooo7_six_obj, std_six_obj);
}

TEST_F(multisetDoubleTests, Test15) {
  TestMultisetIntFuncionClear(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionClear(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionClear(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionClear(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionClear(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionClear(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionClear(jokerooo7_six_obj, std_six_obj);
}

TEST_F(multisetDoubleTests, Test16) {
  TestMultisetIntFunctionSwap(jokerooo7_empty_obj, jokerooo7_first_obj, std_empty_obj,
                              std_first_obj);
  TestMultisetIntFunctionSwap(jokerooo7_first_obj, jokerooo7_second_obj, std_first_obj,
                              std_second_obj);
  TestMultisetIntFunctionSwap(jokerooo7_second_obj, jokerooo7_three_obj, std_second_obj,
                              std_three_obj);
  TestMultisetIntFunctionSwap(jokerooo7_three_obj, jokerooo7_four_obj, std_three_obj,
                              std_four_obj);
  TestMultisetIntFunctionSwap(jokerooo7_four_obj, jokerooo7_five_obj, std_four_obj,
                              std_five_obj);
  TestMultisetIntFunctionSwap(jokerooo7_five_obj, jokerooo7_six_obj, std_five_obj,
                              std_six_obj);
}

TEST_F(multisetDoubleTests, Test17) {
  TestMultisetIntFunctionMerge(jokerooo7_empty_obj, jokerooo7_first_obj);
  TestMultisetIntFunctionMerge(jokerooo7_first_obj, jokerooo7_second_obj);
  TestMultisetIntFunctionMerge(jokerooo7_second_obj, jokerooo7_three_obj);
  TestMultisetIntFunctionMerge(jokerooo7_three_obj, jokerooo7_four_obj);
  TestMultisetIntFunctionMerge(jokerooo7_four_obj, jokerooo7_five_obj);
  TestMultisetIntFunctionMerge(jokerooo7_five_obj, jokerooo7_six_obj);
}

TEST_F(multisetDoubleTests, Test18) {
  TestMultisetIntFunctionFind(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFunctionFind(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFunctionFind(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFunctionFind(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFunctionFind(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFunctionFind(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFunctionFind(jokerooo7_six_obj, std_six_obj);
}

TEST_F(multisetDoubleTests, Test19) {
  TestMultisetIntFunctionFindTwo(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFunctionFindTwo(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFunctionFindTwo(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFunctionFindTwo(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFunctionFindTwo(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFunctionFindTwo(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFunctionFindTwo(jokerooo7_six_obj, std_six_obj);
}

// TEST_F(multisetDoubleTests, Test20) {
//     TestMultisetIntFunctionMaxSize(jokerooo7_empty_obj, std_empty_obj);
//     TestMultisetIntFunctionMaxSize(jokerooo7_first_obj, std_first_obj);
//     TestMultisetIntFunctionMaxSize(jokerooo7_second_obj, std_second_obj);
//     TestMultisetIntFunctionMaxSize(jokerooo7_three_obj, std_three_obj);
//     TestMultisetIntFunctionMaxSize(jokerooo7_four_obj, std_four_obj);
//     TestMultisetIntFunctionMaxSize(jokerooo7_five_obj, std_five_obj);
//     TestMultisetIntFunctionMaxSize(jokerooo7_six_obj, std_six_obj);
// }

TEST_F(multisetDoubleTests, Test21) {
  TestMultisetIntFunctionConstIter(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFunctionConstIter(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFunctionConstIter(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFunctionConstIter(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFunctionConstIter(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFunctionConstIter(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFunctionConstIter(jokerooo7_six_obj, std_six_obj);
}

TEST_F(multisetDoubleTests, Test22) {
  EXPECT_EQ(jokerooo7_empty_obj.contains(-12), false);
  EXPECT_EQ(jokerooo7_first_obj.contains(-1), false);
  EXPECT_NEAR(jokerooo7_second_obj.contains(0.0002), true, 1e-9);
  EXPECT_EQ(jokerooo7_three_obj.contains(4), false);
  EXPECT_EQ(jokerooo7_four_obj.contains(-12), false);
  EXPECT_EQ(jokerooo7_five_obj.contains(-12), false);
  EXPECT_NEAR(jokerooo7_six_obj.contains(0.09999999999999), true, 1e-9);
}

TEST_F(multisetDoubleTests, Test23) {
  TestMultisetIntFunctionEmplace(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFunctionEmplace(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFunctionEmplace(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFunctionEmplace(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFunctionEmplace(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFunctionEmplace(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFunctionEmplace(jokerooo7_six_obj, std_six_obj);
}

TEST_F(multisetDoubleTests, Test24) {
  TestMultisetIntFunctionEqualRange(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFunctionEqualRange(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFunctionEqualRange(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFunctionEqualRange(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFunctionEqualRange(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFunctionEqualRange(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFunctionEqualRange(jokerooo7_six_obj, std_six_obj);
}

TEST_F(multisetDoubleTests, Test25) {
  TestMultisetIntFunctionCount(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFunctionCount(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFunctionCount(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFunctionCount(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFunctionCount(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFunctionCount(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFunctionCount(jokerooo7_six_obj, std_six_obj);
}

TEST_F(multisetDoubleTests, Test26) {
  TestMultisetIntFunctionLowerBound(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFunctionLowerBound(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFunctionLowerBound(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFunctionLowerBound(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFunctionLowerBound(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFunctionLowerBound(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFunctionLowerBound(jokerooo7_six_obj, std_six_obj);
}

TEST_F(multisetDoubleTests, Test27) {
  TestMultisetIntFunctionUpperBound(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFunctionUpperBound(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFunctionUpperBound(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFunctionUpperBound(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFunctionUpperBound(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFunctionUpperBound(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFunctionUpperBound(jokerooo7_six_obj, std_six_obj);
}

TEST_F(multisetStringTests, Test1) {
  TestMultisetIntFuncionOne(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionOne(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionOne(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionOne(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionOne(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionOne(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionOne(jokerooo7_six_obj, std_six_obj);
  TestMultisetIntFuncionOne(jokerooo7_seven_obj, std_seven_obj);
}

TEST_F(multisetStringTests, Test2) {
  TestMultisetIntFuncionTwo(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionTwo(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionTwo(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionTwo(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionTwo(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionTwo(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionTwo(jokerooo7_six_obj, std_six_obj);
  TestMultisetIntFuncionTwo(jokerooo7_seven_obj, std_seven_obj);
}

TEST_F(multisetStringTests, Test3) {
  TestMultisetIntFuncionThree(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionThree(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionThree(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionThree(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionThree(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionThree(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionThree(jokerooo7_six_obj, std_six_obj);
  TestMultisetIntFuncionThree(jokerooo7_seven_obj, std_seven_obj);
}

TEST_F(multisetStringTests, Test9) {
  TestMultisetIntFuncionNine(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionNine(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionNine(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionNine(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionNine(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionNine(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionNine(jokerooo7_six_obj, std_six_obj);
  TestMultisetIntFuncionNine(jokerooo7_seven_obj, std_seven_obj);
}

TEST_F(multisetStringTests, Test10) {
  TestMultisetIntFuncionTen(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionTen(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionTen(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionTen(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionTen(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionTen(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionTen(jokerooo7_six_obj, std_six_obj);
  TestMultisetIntFuncionTen(jokerooo7_seven_obj, std_seven_obj);
}

TEST_F(multisetStringTests, Test11) {
  TestMultisetIntFuncionEleven(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionEleven(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionEleven(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionEleven(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionEleven(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionEleven(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionEleven(jokerooo7_six_obj, std_six_obj);
  TestMultisetIntFuncionEleven(jokerooo7_seven_obj, std_seven_obj);
}

TEST_F(multisetStringTests, Test12) {
  TestMultisetIntFuncionTwelve(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionTwelve(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionTwelve(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionTwelve(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionTwelve(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionTwelve(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionTwelve(jokerooo7_six_obj, std_six_obj);
  TestMultisetIntFuncionTwelve(jokerooo7_seven_obj, std_seven_obj);
}

TEST_F(multisetStringTests, Test13) {
  TestMultisetIntFuncionThirteen(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionThirteen(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionThirteen(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionThirteen(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionThirteen(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionThirteen(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionThirteen(jokerooo7_six_obj, std_six_obj);
  TestMultisetIntFuncionThirteen(jokerooo7_seven_obj, std_seven_obj);
}

TEST_F(multisetStringTests, Test14) {
  TestMultisetIntFuncionFourteen(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionFourteen(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionFourteen(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionFourteen(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionFourteen(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionFourteen(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionFourteen(jokerooo7_six_obj, std_six_obj);
  TestMultisetIntFuncionFourteen(jokerooo7_seven_obj, std_seven_obj);
}

TEST_F(multisetStringTests, Test15) {
  TestMultisetIntFuncionClear(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFuncionClear(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFuncionClear(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFuncionClear(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFuncionClear(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFuncionClear(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFuncionClear(jokerooo7_six_obj, std_six_obj);
  TestMultisetIntFuncionClear(jokerooo7_seven_obj, std_seven_obj);
}

TEST_F(multisetStringTests, Test16) {
  TestMultisetIntFunctionSwap(jokerooo7_empty_obj, jokerooo7_first_obj, std_empty_obj,
                              std_first_obj);
  TestMultisetIntFunctionSwap(jokerooo7_first_obj, jokerooo7_second_obj, std_first_obj,
                              std_second_obj);
  TestMultisetIntFunctionSwap(jokerooo7_second_obj, jokerooo7_three_obj, std_second_obj,
                              std_three_obj);
  TestMultisetIntFunctionSwap(jokerooo7_three_obj, jokerooo7_four_obj, std_three_obj,
                              std_four_obj);
  TestMultisetIntFunctionSwap(jokerooo7_four_obj, jokerooo7_five_obj, std_four_obj,
                              std_five_obj);
  TestMultisetIntFunctionSwap(jokerooo7_five_obj, jokerooo7_six_obj, std_five_obj,
                              std_six_obj);
  TestMultisetIntFunctionSwap(jokerooo7_seven_obj, jokerooo7_empty_obj, std_seven_obj,
                              std_empty_obj);
}

TEST_F(multisetStringTests, Test17) {
  TestMultisetIntFunctionMerge(jokerooo7_empty_obj, jokerooo7_first_obj);
  TestMultisetIntFunctionMerge(jokerooo7_first_obj, jokerooo7_second_obj);
  TestMultisetIntFunctionMerge(jokerooo7_second_obj, jokerooo7_three_obj);
  TestMultisetIntFunctionMerge(jokerooo7_three_obj, jokerooo7_four_obj);
  TestMultisetIntFunctionMerge(jokerooo7_four_obj, jokerooo7_five_obj);
  TestMultisetIntFunctionMerge(jokerooo7_five_obj, jokerooo7_six_obj);
  TestMultisetIntFunctionMerge(jokerooo7_seven_obj, jokerooo7_empty_obj);
}

TEST_F(multisetStringTests, Test18) {
  TestMultisetStringFunctionFind(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetStringFunctionFind(jokerooo7_first_obj, std_first_obj);
  TestMultisetStringFunctionFind(jokerooo7_second_obj, std_second_obj);
  TestMultisetStringFunctionFind(jokerooo7_three_obj, std_three_obj);
  TestMultisetStringFunctionFind(jokerooo7_four_obj, std_four_obj);
  TestMultisetStringFunctionFind(jokerooo7_five_obj, std_five_obj);
  TestMultisetStringFunctionFind(jokerooo7_six_obj, std_six_obj);
  TestMultisetStringFunctionFind(jokerooo7_seven_obj, std_seven_obj);
}

TEST_F(multisetStringTests, Test19) {
  TestMultisetIntFunctionFindTwo(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFunctionFindTwo(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFunctionFindTwo(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFunctionFindTwo(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFunctionFindTwo(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFunctionFindTwo(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFunctionFindTwo(jokerooo7_six_obj, std_six_obj);
  TestMultisetIntFunctionFindTwo(jokerooo7_seven_obj, std_seven_obj);
}

// TEST_F(multisetStringTests, Test20) {
//     TestMultisetIntFunctionMaxSize(jokerooo7_empty_obj, std_empty_obj);
//     TestMultisetIntFunctionMaxSize(jokerooo7_first_obj, std_first_obj);
//     TestMultisetIntFunctionMaxSize(jokerooo7_second_obj, std_second_obj);
//     TestMultisetIntFunctionMaxSize(jokerooo7_three_obj, std_three_obj);
//     TestMultisetIntFunctionMaxSize(jokerooo7_four_obj, std_four_obj);
//     TestMultisetIntFunctionMaxSize(jokerooo7_five_obj, std_five_obj);
//     TestMultisetIntFunctionMaxSize(jokerooo7_six_obj, std_six_obj);
// }

TEST_F(multisetStringTests, Test21) {
  TestMultisetIntFunctionConstIter(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFunctionConstIter(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFunctionConstIter(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFunctionConstIter(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFunctionConstIter(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFunctionConstIter(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFunctionConstIter(jokerooo7_six_obj, std_six_obj);
  TestMultisetIntFunctionConstIter(jokerooo7_seven_obj, std_seven_obj);
}

TEST_F(multisetStringTests, Test22) {
  EXPECT_EQ(jokerooo7_empty_obj.contains(""), false);
  EXPECT_EQ(jokerooo7_first_obj.contains(" 12"), false);
  EXPECT_EQ(jokerooo7_first_obj.contains("12"), false);
  EXPECT_EQ(jokerooo7_three_obj.contains("index"), true);
  EXPECT_EQ(jokerooo7_four_obj.contains("9"), true);
  EXPECT_EQ(jokerooo7_five_obj.contains("C"), true);
  EXPECT_EQ(jokerooo7_six_obj.contains("cat"), false);
  EXPECT_EQ(jokerooo7_seven_obj.contains("cat"), true);
  EXPECT_EQ(jokerooo7_seven_obj.contains("dogs"), true);
}

TEST_F(multisetStringTests, Test24) {
  TestMultisetIntFunctionCount(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFunctionCount(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFunctionCount(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFunctionCount(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFunctionCount(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFunctionCount(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFunctionCount(jokerooo7_six_obj, std_six_obj);
  TestMultisetIntFunctionCount(jokerooo7_seven_obj, std_seven_obj);
}

TEST_F(multisetStringTests, Test25) {
  TestMultisetIntFunctionLowerBound(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFunctionLowerBound(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFunctionLowerBound(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFunctionLowerBound(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFunctionLowerBound(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFunctionLowerBound(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFunctionLowerBound(jokerooo7_six_obj, std_six_obj);
  TestMultisetIntFunctionLowerBound(jokerooo7_seven_obj, std_seven_obj);
}

TEST_F(multisetStringTests, Test26) {
  TestMultisetIntFunctionUpperBound(jokerooo7_empty_obj, std_empty_obj);
  TestMultisetIntFunctionUpperBound(jokerooo7_first_obj, std_first_obj);
  TestMultisetIntFunctionUpperBound(jokerooo7_second_obj, std_second_obj);
  TestMultisetIntFunctionUpperBound(jokerooo7_three_obj, std_three_obj);
  TestMultisetIntFunctionUpperBound(jokerooo7_four_obj, std_four_obj);
  TestMultisetIntFunctionUpperBound(jokerooo7_five_obj, std_five_obj);
  TestMultisetIntFunctionUpperBound(jokerooo7_six_obj, std_six_obj);
  TestMultisetIntFunctionUpperBound(jokerooo7_seven_obj, std_seven_obj);
}
