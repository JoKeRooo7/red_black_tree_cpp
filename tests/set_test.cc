#include <gtest/gtest.h>

#include <set>
#include <string>

#include "set.h"

class SetIntTests : public ::testing::Test {
 protected:
  jokerooo7::set<int> jokerooo7_empty_obj;
  std::set<int> std_empty_obj;

  jokerooo7::set<int> jokerooo7_first_obj = {1};
  std::set<int> std_first_obj = {1};

  jokerooo7::set<int> jokerooo7_second_obj = {1, 2};
  std::set<int> std_second_obj = {1, 2};

  jokerooo7::set<int> jokerooo7_three_obj = {1, 2, 3};
  std::set<int> std_three_obj = {1, 2, 3};

  jokerooo7::set<int> jokerooo7_four_obj = {1, 2, 3, 4};
  std::set<int> std_four_obj = {1, 2, 3, 4};

  jokerooo7::set<int> jokerooo7_five_obj = {1, 2, 3, 4, 5};
  std::set<int> std_five_obj = {1, 2, 3, 4, 5};

  jokerooo7::set<int> jokerooo7_six_obj = {2, 1, 3, 5, 4, 6, 8, 7};
  std::set<int> std_six_obj = {2, 1, 3, 5, 4, 6, 8, 7};

  jokerooo7::set<int> jokerooo7_seven_obj = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  std::set<int> std_seven_obj = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  jokerooo7::set<int> jokerooo7_eight_obj = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  std::set<int> std_eight_obj = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  jokerooo7::set<int> jokerooo7_nine_obj = {354, -100, 50,   1, 2, 3, 124, 5,
                                4,   6,    -199, 7, 8, 9, 0,   10};
  std::set<int> std_nine_obj = {354, -100, 50,   1, 2, 3, 124, 5,
                                4,   6,    -199, 7, 8, 9, 0,   10};

  jokerooo7::set<int> jokerooo7_ten_obj = {1, 1, 1, 1, 1, 2, 1, 2, 1, 2,
                               2, 2, 1, 1, 1, 2, 3, 4, 1};
  std::set<int> std_ten_obj = {1, 1, 1, 1, 1, 2, 1, 2, 1, 2,
                               2, 2, 1, 1, 1, 2, 3, 4, 1};
};

class SetDoubleTests : public ::testing::Test {
 protected:
  jokerooo7::set<double> jokerooo7_empty_obj;
  std::set<double> std_empty_obj;

  jokerooo7::set<double> jokerooo7_first_obj = {0.992};
  std::set<double> std_first_obj = {0.992};

  jokerooo7::set<double> jokerooo7_second_obj = {0.001, 0.0002};
  std::set<double> std_second_obj = {0.001, 0.0002};

  jokerooo7::set<double> jokerooo7_three_obj = {0.001, 0.002, 0.003};
  std::set<double> std_three_obj = {0.001, 0.002, 0.003};

  jokerooo7::set<double> jokerooo7_four_obj = {0.001, 0.002, 0.003, 0.004};
  std::set<double> std_four_obj = {0.001, 0.002, 0.003, 0.004};

  jokerooo7::set<double> jokerooo7_five_obj = {0.001, 0.002, 0.003, 0.004, 0.005};
  std::set<double> std_five_obj = {0.001, 0.002, 0.003, 0.004, 0.005};

  jokerooo7::set<double> jokerooo7_six_obj = {0.0000009, 0.00000004, -0.00000001999,
                                  0.09999999999999};
  std::set<double> std_six_obj = {0.0000009, 0.00000004, -0.00000001999,
                                  0.09999999999999};
};

class SetStringTests : public ::testing::Test {
 protected:
  jokerooo7::set<std::string> jokerooo7_empty_obj;
  std::set<std::string> std_empty_obj;

  jokerooo7::set<std::string> jokerooo7_first_obj = {""};
  std::set<std::string> std_first_obj = {""};

  jokerooo7::set<std::string> jokerooo7_second_obj = {"pop", "12345"};
  std::set<std::string> std_second_obj = {"pop", "12345"};

  jokerooo7::set<std::string> jokerooo7_three_obj = {"index", "lol", "utr"};
  std::set<std::string> std_three_obj = {"index", "lol", "utr"};

  jokerooo7::set<std::string> jokerooo7_four_obj = {"1", "2", "3", "4", "5",
                                        "6", "7", "8", "9", "10"};
  std::set<std::string> std_four_obj = {"1", "2", "3", "4", "5",
                                        "6", "7", "8", "9", "10"};

  jokerooo7::set<std::string> jokerooo7_five_obj = {"A", "2", "3", "B",  "C", "6",
                                        "7", "8", "9", "10", "1", "4"};
  std::set<std::string> std_five_obj = {"A", "2", "3", "B",  "C", "6",
                                        "7", "8", "9", "10", "1", "4"};

  jokerooo7::set<std::string> jokerooo7_six_obj = {"1", "2", "3", "4", "5",
                                       "1", "1", "3", "5", "10"};
  std::set<std::string> std_six_obj = {"1", "2", "3", "4", "5",
                                       "1", "1", "3", "5", "10"};

  jokerooo7::set<std::string> jokerooo7_seven_obj = {"apple",
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
                                         "god"};

  std::set<std::string> std_seven_obj = {"apple",
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
                                         "god"};
};

template <typename K>
void ComparingTwoObjects(jokerooo7::set<K> obj_one, std::set<K> obj_two) {
  typename jokerooo7::set<K>::iterator iter_one = obj_one.begin();
  typename std::set<K>::iterator iter_two = obj_two.begin();
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
void TestSetIntFuncionOne(jokerooo7::set<K> obj_one, std::set<K> obj_two) {
  ComparingTwoObjects(obj_one, obj_two);
}

template <typename K>
void TestSetIntFuncionTwo(jokerooo7::set<K> obj_one, std::set<K> obj_two) {
  typename jokerooo7::set<K>::iterator iter_one = obj_one.begin();
  typename std::set<K>::iterator iter_two = obj_two.begin();
  if (!obj_one.empty()) {
    obj_one.erase(iter_one);
    obj_two.erase(iter_two);
  }
  ComparingTwoObjects(obj_one, obj_two);
}

template <typename K>
void TestSetIntFuncionThree(jokerooo7::set<K> obj_one, std::set<K> obj_two) {
  typename jokerooo7::set<K>::iterator iter_one = obj_one.begin();
  typename std::set<K>::iterator iter_two = obj_two.begin();
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
void TestSetIntFuncionFour(jokerooo7::set<K> obj_one, std::set<K> obj_two) {
  typename jokerooo7::set<K>::iterator iter_one = obj_one.begin();
  typename std::set<K>::iterator iter_two = obj_two.begin();
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
void TestSetIntFuncionFive(jokerooo7::set<K> obj_one, std::set<K> obj_two) {
  typename jokerooo7::set<K>::iterator iter_one = obj_one.begin();
  typename std::set<K>::iterator iter_two = obj_two.begin();
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
void TestSetIntFuncionSix(jokerooo7::set<K> obj_one, std::set<K> obj_two) {
  typename jokerooo7::set<K>::iterator iter_one = obj_one.begin();
  typename std::set<K>::iterator iter_two = obj_two.begin();
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
void TestSetIntFuncionSeven(jokerooo7::set<K> obj_one, std::set<K> obj_two) {
  typename jokerooo7::set<K>::iterator iter_one = obj_one.begin();
  typename std::set<K>::iterator iter_two = obj_two.begin();
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
void TestSetIntFuncionEight(jokerooo7::set<K> obj_one, std::set<K> obj_two) {
  typename jokerooo7::set<K>::iterator iter_one = obj_one.begin();
  typename std::set<K>::iterator iter_two = obj_two.begin();
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
void TestSetIntFuncionNine(jokerooo7::set<K> obj_one, std::set<K> obj_two) {
  typename jokerooo7::set<K> copy_obj_one(obj_one);
  typename std::set<K> copy_obj_two(obj_two);
  typename jokerooo7::set<K>::iterator iter_one = obj_one.begin();
  typename jokerooo7::set<K>::iterator iter_copy_one = copy_obj_one.begin();
  typename std::set<K>::iterator iter_two = obj_two.begin();
  typename std::set<K>::iterator iter_copy_two = copy_obj_two.begin();
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
void TestSetIntFuncionTen(jokerooo7::set<K> obj_one, std::set<K> obj_two) {
  typename jokerooo7::set<K> copy_obj_one = std::move(obj_one);
  typename std::set<K> copy_obj_two = std::move(obj_two);
  ComparingTwoObjects(obj_one, obj_two);
  ComparingTwoObjects(copy_obj_one, copy_obj_two);
}

template <typename K>
void TestSetIntFuncionEleven(jokerooo7::set<K> obj_one, std::set<K> obj_two) {
  typename jokerooo7::set<K> copy_obj_one;
  typename std::set<K> copy_obj_two;
  copy_obj_one = obj_one;
  copy_obj_two = obj_two;
  typename jokerooo7::set<K>::iterator iter_one = obj_one.begin();
  typename jokerooo7::set<K>::iterator iter_copy_one = copy_obj_one.begin();
  typename std::set<K>::iterator iter_two = obj_two.begin();
  typename std::set<K>::iterator iter_copy_two = copy_obj_two.begin();
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
void TestSetIntFuncionTwelve(jokerooo7::set<K> obj_one, std::set<K> obj_two) {
  typename jokerooo7::set<K> copy_obj_one;
  typename std::set<K> copy_obj_two;
  copy_obj_one = std::move(obj_one);
  copy_obj_two = std::move(obj_two);
  ComparingTwoObjects(obj_one, obj_two);
  ComparingTwoObjects(copy_obj_one, copy_obj_two);
}

template <typename K>
void TestSetIntFuncionThirteen(jokerooo7::set<K> obj_one, std::set<K> obj_two) {
  EXPECT_EQ(obj_one.size(), obj_two.size());
  if (!obj_one.empty()) obj_one.erase(obj_one.begin());
  if (!obj_two.empty()) obj_two.erase(obj_two.begin());
  EXPECT_EQ(obj_one.size(), obj_two.size());
}

template <typename K>
void TestSetIntFuncionFourteen(jokerooo7::set<K> obj_one, std::set<K> obj_two) {
  typename jokerooo7::set<K>::iterator iter_one = obj_one.end();
  typename std::set<K>::iterator iter_two = obj_two.end();
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
  // iter_one = obj_one.end();make test_set

  // iter_two = obj_two.end();
  // for (; iter_two != obj_two.begin(); --iter_one, --iter_two) {
  //    EXPECT_EQ(*iter_one--, *iter_two--);
  // }
}

template <typename K>
void TestSetIntFuncionClear(jokerooo7::set<K> obj_one, std::set<K> obj_two) {
  obj_one.clear();
  obj_two.clear();
  ComparingTwoObjects(obj_one, obj_two);
}

template <typename K>
void TestSetIntFunctionSwap(jokerooo7::set<K> obj_one, jokerooo7::set<K> obj_two,
                            typename std::set<K> std_one, std::set<K> std_two) {
  obj_one.swap(obj_two);
  std_one.swap(std_two);
  ComparingTwoObjects(obj_one, std_one);
  ComparingTwoObjects(obj_two, std_two);
}

template <typename K>
void TestSetIntFunctionFind(jokerooo7::set<K> obj_one, std::set<K> obj_two) {
  obj_two.find(-12);
  EXPECT_EQ(*obj_one.find(-12), 0);  // my_realization
}

template <typename K>
void TestSetStringFunctionFind(jokerooo7::set<K> obj_one, std::set<K> obj_two) {
  obj_two.find("-cat");
  EXPECT_EQ(*obj_one.find("-cat"), "");  // my_realization
}

template <typename K>
void TestSetIntFunctionFindTwo(jokerooo7::set<K> obj_one, std::set<K> obj_two) {
  if (!obj_one.empty()) {
    typename jokerooo7::set<K>::iterator iter_one = obj_one.begin();
    typename std::set<K>::iterator iter_two = obj_two.begin();
    EXPECT_EQ(*obj_one.find(*iter_one), *obj_two.find(*iter_two));
  }
}

template <typename K>
void TestSetIntFunctionMaxSize(jokerooo7::set<K> obj_one, std::set<K> obj_two) {
  EXPECT_EQ(obj_one.max_size(), obj_two.max_size());
}

template <typename K>
void TestSetIntFunctionConstIter(jokerooo7::set<K> obj_one, std::set<K> obj_two) {
  typename jokerooo7::set<K>::const_iterator iter_one = obj_one.begin();
  typename std::set<K>::const_iterator iter_two = obj_two.begin();
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
void TestSetIntFunctionMerge(jokerooo7::set<K> obj_one,
                             jokerooo7::set<K> obj_two) {  // my realization
  typename jokerooo7::set<K> copy_obj_one(obj_one);
  typename jokerooo7::set<K> copy_obj_two(obj_two);
  typename jokerooo7::set<K>::iterator iter_one = obj_two.begin();
  for (; iter_one != obj_two.end(); ++iter_one) {
    copy_obj_one.insert(*iter_one);
  }
  obj_one.merge(obj_two);

  typename jokerooo7::set<K>::iterator iter_two = obj_one.begin();
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
void TestSetIntFunctionEmplace(jokerooo7::set<K> obj_one, std::set<K> obj_two) {
  auto r = obj_one.insert_many(100.0, 200.0, 42.0, 400.0);
  //  auto pr1 = o.insert_many(100);
  //  auto pr2 = o.insert_many(200);
  auto pr3 = obj_two.emplace(42);
  //  auto pr4 = o.insert_many(400);
  EXPECT_EQ(*(r[2].first), *(pr3.first));
  EXPECT_EQ(r[2].second, pr3.second);
}

TEST_F(SetIntTests, Test1) {
  TestSetIntFuncionOne(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionOne(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionOne(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionOne(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionOne(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionOne(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionOne(jokerooo7_six_obj, std_six_obj);
  TestSetIntFuncionOne(jokerooo7_seven_obj, std_seven_obj);
  TestSetIntFuncionOne(jokerooo7_eight_obj, std_eight_obj);
  TestSetIntFuncionOne(jokerooo7_nine_obj, std_nine_obj);
  TestSetIntFuncionOne(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(SetIntTests, Test2) {
  TestSetIntFuncionTwo(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionTwo(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionTwo(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionTwo(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionTwo(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionTwo(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionTwo(jokerooo7_six_obj, std_six_obj);
  TestSetIntFuncionTwo(jokerooo7_seven_obj, std_seven_obj);
  TestSetIntFuncionTwo(jokerooo7_eight_obj, std_eight_obj);
  TestSetIntFuncionTwo(jokerooo7_nine_obj, std_nine_obj);
  TestSetIntFuncionTwo(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(SetIntTests, Test3) {
  TestSetIntFuncionThree(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionThree(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionThree(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionThree(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionThree(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionThree(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionThree(jokerooo7_six_obj, std_six_obj);
  TestSetIntFuncionThree(jokerooo7_seven_obj, std_seven_obj);
  TestSetIntFuncionThree(jokerooo7_eight_obj, std_eight_obj);
  TestSetIntFuncionThree(jokerooo7_nine_obj, std_nine_obj);
  TestSetIntFuncionThree(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(SetIntTests, Test4) {
  TestSetIntFuncionFour(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionFour(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionFour(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionFour(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionFour(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionFour(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionFour(jokerooo7_six_obj, std_six_obj);
  TestSetIntFuncionFour(jokerooo7_seven_obj, std_seven_obj);
  TestSetIntFuncionFour(jokerooo7_eight_obj, std_eight_obj);
  TestSetIntFuncionFour(jokerooo7_nine_obj, std_nine_obj);
  TestSetIntFuncionFour(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(SetIntTests, Test5) {
  TestSetIntFuncionFive(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionFive(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionFive(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionFive(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionFive(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionFive(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionFive(jokerooo7_six_obj, std_six_obj);
  TestSetIntFuncionFive(jokerooo7_seven_obj, std_seven_obj);
  TestSetIntFuncionFive(jokerooo7_eight_obj, std_eight_obj);
  TestSetIntFuncionFive(jokerooo7_nine_obj, std_nine_obj);
  TestSetIntFuncionFive(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(SetIntTests, Test6) {
  TestSetIntFuncionSix(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionSix(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionSix(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionSix(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionSix(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionSix(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionSix(jokerooo7_six_obj, std_six_obj);
  TestSetIntFuncionSix(jokerooo7_seven_obj, std_seven_obj);
  TestSetIntFuncionSix(jokerooo7_eight_obj, std_eight_obj);
  TestSetIntFuncionSix(jokerooo7_nine_obj, std_nine_obj);
  TestSetIntFuncionSix(jokerooo7_ten_obj, std_ten_obj);
}
TEST_F(SetIntTests, Test7) {
  TestSetIntFuncionSeven(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionSeven(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionSeven(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionSeven(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionSeven(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionSeven(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionSeven(jokerooo7_six_obj, std_six_obj);
  TestSetIntFuncionSeven(jokerooo7_seven_obj, std_seven_obj);
  TestSetIntFuncionSeven(jokerooo7_eight_obj, std_eight_obj);
  TestSetIntFuncionSeven(jokerooo7_nine_obj, std_nine_obj);
  TestSetIntFuncionSeven(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(SetIntTests, Test8) {
  TestSetIntFuncionEight(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionEight(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionEight(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionEight(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionEight(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionEight(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionEight(jokerooo7_six_obj, std_six_obj);
  TestSetIntFuncionEight(jokerooo7_seven_obj, std_seven_obj);
  TestSetIntFuncionEight(jokerooo7_eight_obj, std_eight_obj);
  TestSetIntFuncionEight(jokerooo7_nine_obj, std_nine_obj);
  TestSetIntFuncionEight(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(SetIntTests, Test9) {
  TestSetIntFuncionNine(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionNine(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionNine(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionNine(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionNine(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionNine(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionNine(jokerooo7_six_obj, std_six_obj);
  TestSetIntFuncionNine(jokerooo7_seven_obj, std_seven_obj);
  TestSetIntFuncionNine(jokerooo7_eight_obj, std_eight_obj);
  TestSetIntFuncionNine(jokerooo7_nine_obj, std_nine_obj);
  TestSetIntFuncionNine(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(SetIntTests, Test10) {
  TestSetIntFuncionTen(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionTen(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionTen(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionTen(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionTen(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionTen(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionTen(jokerooo7_six_obj, std_six_obj);
  TestSetIntFuncionTen(jokerooo7_seven_obj, std_seven_obj);
  TestSetIntFuncionTen(jokerooo7_eight_obj, std_eight_obj);
  TestSetIntFuncionTen(jokerooo7_nine_obj, std_nine_obj);
  TestSetIntFuncionTen(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(SetIntTests, Test11) {
  TestSetIntFuncionEleven(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionEleven(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionEleven(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionEleven(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionEleven(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionEleven(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionEleven(jokerooo7_six_obj, std_six_obj);
  TestSetIntFuncionEleven(jokerooo7_seven_obj, std_seven_obj);
  TestSetIntFuncionEleven(jokerooo7_eight_obj, std_eight_obj);
  TestSetIntFuncionEleven(jokerooo7_nine_obj, std_nine_obj);
  TestSetIntFuncionEleven(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(SetIntTests, Test12) {
  TestSetIntFuncionTwelve(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionTwelve(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionTwelve(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionTwelve(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionTwelve(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionTwelve(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionTwelve(jokerooo7_six_obj, std_six_obj);
  TestSetIntFuncionTwelve(jokerooo7_seven_obj, std_seven_obj);
  TestSetIntFuncionTwelve(jokerooo7_eight_obj, std_eight_obj);
  TestSetIntFuncionTwelve(jokerooo7_nine_obj, std_nine_obj);
  TestSetIntFuncionTwelve(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(SetIntTests, Test13) {
  TestSetIntFuncionThirteen(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionThirteen(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionThirteen(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionThirteen(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionThirteen(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionThirteen(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionThirteen(jokerooo7_six_obj, std_six_obj);
  TestSetIntFuncionThirteen(jokerooo7_seven_obj, std_seven_obj);
  TestSetIntFuncionThirteen(jokerooo7_eight_obj, std_eight_obj);
  TestSetIntFuncionThirteen(jokerooo7_nine_obj, std_nine_obj);
  TestSetIntFuncionThirteen(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(SetIntTests, Test14) {
  TestSetIntFuncionFourteen(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionFourteen(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionFourteen(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionFourteen(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionFourteen(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionFourteen(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionFourteen(jokerooo7_six_obj, std_six_obj);
  TestSetIntFuncionFourteen(jokerooo7_seven_obj, std_seven_obj);
  TestSetIntFuncionFourteen(jokerooo7_eight_obj, std_eight_obj);
  TestSetIntFuncionFourteen(jokerooo7_nine_obj, std_nine_obj);
  TestSetIntFuncionFourteen(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(SetIntTests, Test15) {
  TestSetIntFuncionClear(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionClear(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionClear(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionClear(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionClear(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionClear(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionClear(jokerooo7_six_obj, std_six_obj);
  TestSetIntFuncionClear(jokerooo7_seven_obj, std_seven_obj);
  TestSetIntFuncionClear(jokerooo7_eight_obj, std_eight_obj);
  TestSetIntFuncionClear(jokerooo7_nine_obj, std_nine_obj);
  TestSetIntFuncionClear(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(SetIntTests, Test16) {
  TestSetIntFunctionSwap(jokerooo7_empty_obj, jokerooo7_first_obj, std_empty_obj,
                         std_first_obj);
  TestSetIntFunctionSwap(jokerooo7_first_obj, jokerooo7_second_obj, std_first_obj,
                         std_second_obj);
  TestSetIntFunctionSwap(jokerooo7_second_obj, jokerooo7_three_obj, std_second_obj,
                         std_three_obj);
  TestSetIntFunctionSwap(jokerooo7_three_obj, jokerooo7_four_obj, std_three_obj,
                         std_four_obj);
  TestSetIntFunctionSwap(jokerooo7_four_obj, jokerooo7_five_obj, std_four_obj,
                         std_five_obj);
  TestSetIntFunctionSwap(jokerooo7_five_obj, jokerooo7_six_obj, std_five_obj, std_six_obj);
  TestSetIntFunctionSwap(jokerooo7_six_obj, jokerooo7_seven_obj, std_six_obj,
                         std_seven_obj);
  TestSetIntFunctionSwap(jokerooo7_seven_obj, jokerooo7_eight_obj, std_seven_obj,
                         std_eight_obj);
  TestSetIntFunctionSwap(jokerooo7_eight_obj, jokerooo7_nine_obj, std_eight_obj,
                         std_nine_obj);
  TestSetIntFunctionSwap(jokerooo7_nine_obj, jokerooo7_ten_obj, std_nine_obj, std_ten_obj);
  TestSetIntFunctionSwap(jokerooo7_ten_obj, jokerooo7_empty_obj, std_ten_obj,
                         std_empty_obj);
}

TEST_F(SetIntTests, Test17) {
  TestSetIntFunctionMerge(jokerooo7_empty_obj, jokerooo7_first_obj);
  TestSetIntFunctionMerge(jokerooo7_first_obj, jokerooo7_second_obj);
  TestSetIntFunctionMerge(jokerooo7_second_obj, jokerooo7_three_obj);
  TestSetIntFunctionMerge(jokerooo7_three_obj, jokerooo7_four_obj);
  TestSetIntFunctionMerge(jokerooo7_four_obj, jokerooo7_five_obj);
  TestSetIntFunctionMerge(jokerooo7_five_obj, jokerooo7_six_obj);
  TestSetIntFunctionMerge(jokerooo7_six_obj, jokerooo7_seven_obj);
  TestSetIntFunctionMerge(jokerooo7_seven_obj, jokerooo7_eight_obj);
  TestSetIntFunctionMerge(jokerooo7_eight_obj, jokerooo7_nine_obj);
  TestSetIntFunctionMerge(jokerooo7_nine_obj, jokerooo7_ten_obj);
  TestSetIntFunctionMerge(jokerooo7_ten_obj, jokerooo7_empty_obj);
}

TEST_F(SetIntTests, Test18) {
  TestSetIntFunctionFind(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFunctionFind(jokerooo7_first_obj, std_first_obj);
  TestSetIntFunctionFind(jokerooo7_second_obj, std_second_obj);
  TestSetIntFunctionFind(jokerooo7_three_obj, std_three_obj);
  TestSetIntFunctionFind(jokerooo7_four_obj, std_four_obj);
  TestSetIntFunctionFind(jokerooo7_five_obj, std_five_obj);
  TestSetIntFunctionFind(jokerooo7_six_obj, std_six_obj);
  TestSetIntFunctionFind(jokerooo7_seven_obj, std_seven_obj);
  TestSetIntFunctionFind(jokerooo7_eight_obj, std_eight_obj);
  TestSetIntFunctionFind(jokerooo7_nine_obj, std_nine_obj);
  TestSetIntFunctionFind(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(SetIntTests, Test19) {
  TestSetIntFunctionFindTwo(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFunctionFindTwo(jokerooo7_first_obj, std_first_obj);
  TestSetIntFunctionFindTwo(jokerooo7_second_obj, std_second_obj);
  TestSetIntFunctionFindTwo(jokerooo7_three_obj, std_three_obj);
  TestSetIntFunctionFindTwo(jokerooo7_four_obj, std_four_obj);
  TestSetIntFunctionFindTwo(jokerooo7_five_obj, std_five_obj);
  TestSetIntFunctionFindTwo(jokerooo7_six_obj, std_six_obj);
  TestSetIntFunctionFindTwo(jokerooo7_seven_obj, std_seven_obj);
  TestSetIntFunctionFindTwo(jokerooo7_eight_obj, std_eight_obj);
  TestSetIntFunctionFindTwo(jokerooo7_nine_obj, std_nine_obj);
  TestSetIntFunctionFindTwo(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(SetIntTests, Test20) {
  TestSetIntFunctionMaxSize(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFunctionMaxSize(jokerooo7_first_obj, std_first_obj);
  TestSetIntFunctionMaxSize(jokerooo7_second_obj, std_second_obj);
  TestSetIntFunctionMaxSize(jokerooo7_three_obj, std_three_obj);
  TestSetIntFunctionMaxSize(jokerooo7_four_obj, std_four_obj);
  TestSetIntFunctionMaxSize(jokerooo7_five_obj, std_five_obj);
  TestSetIntFunctionMaxSize(jokerooo7_six_obj, std_six_obj);
  TestSetIntFunctionMaxSize(jokerooo7_seven_obj, std_seven_obj);
  TestSetIntFunctionMaxSize(jokerooo7_eight_obj, std_eight_obj);
  TestSetIntFunctionMaxSize(jokerooo7_nine_obj, std_nine_obj);
  TestSetIntFunctionMaxSize(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(SetIntTests, Test21) {
  TestSetIntFunctionConstIter(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFunctionConstIter(jokerooo7_first_obj, std_first_obj);
  TestSetIntFunctionConstIter(jokerooo7_second_obj, std_second_obj);
  TestSetIntFunctionConstIter(jokerooo7_three_obj, std_three_obj);
  TestSetIntFunctionConstIter(jokerooo7_four_obj, std_four_obj);
  TestSetIntFunctionConstIter(jokerooo7_five_obj, std_five_obj);
  TestSetIntFunctionConstIter(jokerooo7_six_obj, std_six_obj);
  TestSetIntFunctionConstIter(jokerooo7_seven_obj, std_seven_obj);
  TestSetIntFunctionConstIter(jokerooo7_eight_obj, std_eight_obj);
  TestSetIntFunctionConstIter(jokerooo7_nine_obj, std_nine_obj);
  TestSetIntFunctionConstIter(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(SetIntTests, Test22) {
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

TEST_F(SetDoubleTests, Test1) {
  TestSetIntFuncionOne(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionOne(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionOne(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionOne(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionOne(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionOne(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionOne(jokerooo7_six_obj, std_six_obj);
}

TEST_F(SetDoubleTests, Test2) {
  TestSetIntFuncionTwo(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionTwo(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionTwo(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionTwo(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionTwo(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionTwo(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionTwo(jokerooo7_six_obj, std_six_obj);
}

TEST_F(SetDoubleTests, Test3) {
  TestSetIntFuncionThree(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionThree(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionThree(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionThree(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionThree(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionThree(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionThree(jokerooo7_six_obj, std_six_obj);
}

TEST_F(SetDoubleTests, Test4) {
  TestSetIntFuncionFour(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionFour(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionFour(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionFour(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionFour(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionFour(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionFour(jokerooo7_six_obj, std_six_obj);
}

TEST_F(SetDoubleTests, Test5) {
  TestSetIntFuncionFive(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionFive(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionFive(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionFive(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionFive(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionFive(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionFive(jokerooo7_six_obj, std_six_obj);
}

TEST_F(SetDoubleTests, Test6) {
  TestSetIntFuncionSix(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionSix(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionSix(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionSix(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionSix(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionSix(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionSix(jokerooo7_six_obj, std_six_obj);
}

TEST_F(SetDoubleTests, Test7) {
  TestSetIntFuncionSeven(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionSeven(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionSeven(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionSeven(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionSeven(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionSeven(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionSeven(jokerooo7_six_obj, std_six_obj);
}

TEST_F(SetDoubleTests, Test8) {
  TestSetIntFuncionEight(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionEight(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionEight(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionEight(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionEight(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionEight(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionEight(jokerooo7_six_obj, std_six_obj);
}

TEST_F(SetDoubleTests, Test9) {
  TestSetIntFuncionNine(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionNine(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionNine(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionNine(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionNine(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionNine(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionNine(jokerooo7_six_obj, std_six_obj);
}

TEST_F(SetDoubleTests, Test10) {
  TestSetIntFuncionTen(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionTen(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionTen(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionTen(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionTen(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionTen(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionTen(jokerooo7_six_obj, std_six_obj);
}

TEST_F(SetDoubleTests, Test11) {
  TestSetIntFuncionEleven(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionEleven(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionEleven(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionEleven(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionEleven(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionEleven(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionEleven(jokerooo7_six_obj, std_six_obj);
}

TEST_F(SetDoubleTests, Test12) {
  TestSetIntFuncionTwelve(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionTwelve(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionTwelve(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionTwelve(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionTwelve(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionTwelve(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionTwelve(jokerooo7_six_obj, std_six_obj);
}

TEST_F(SetDoubleTests, Test13) {
  TestSetIntFuncionThirteen(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionThirteen(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionThirteen(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionThirteen(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionThirteen(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionThirteen(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionThirteen(jokerooo7_six_obj, std_six_obj);
}

TEST_F(SetDoubleTests, Test14) {
  TestSetIntFuncionFourteen(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionFourteen(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionFourteen(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionFourteen(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionFourteen(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionFourteen(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionFourteen(jokerooo7_six_obj, std_six_obj);
}

TEST_F(SetDoubleTests, Test15) {
  TestSetIntFuncionClear(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionClear(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionClear(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionClear(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionClear(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionClear(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionClear(jokerooo7_six_obj, std_six_obj);
}

TEST_F(SetDoubleTests, Test16) {
  TestSetIntFunctionSwap(jokerooo7_empty_obj, jokerooo7_first_obj, std_empty_obj,
                         std_first_obj);
  TestSetIntFunctionSwap(jokerooo7_first_obj, jokerooo7_second_obj, std_first_obj,
                         std_second_obj);
  TestSetIntFunctionSwap(jokerooo7_second_obj, jokerooo7_three_obj, std_second_obj,
                         std_three_obj);
  TestSetIntFunctionSwap(jokerooo7_three_obj, jokerooo7_four_obj, std_three_obj,
                         std_four_obj);
  TestSetIntFunctionSwap(jokerooo7_four_obj, jokerooo7_five_obj, std_four_obj,
                         std_five_obj);
  TestSetIntFunctionSwap(jokerooo7_five_obj, jokerooo7_six_obj, std_five_obj, std_six_obj);
}

TEST_F(SetDoubleTests, Test17) {
  TestSetIntFunctionMerge(jokerooo7_empty_obj, jokerooo7_first_obj);
  TestSetIntFunctionMerge(jokerooo7_first_obj, jokerooo7_second_obj);
  TestSetIntFunctionMerge(jokerooo7_second_obj, jokerooo7_three_obj);
  TestSetIntFunctionMerge(jokerooo7_three_obj, jokerooo7_four_obj);
  TestSetIntFunctionMerge(jokerooo7_four_obj, jokerooo7_five_obj);
  TestSetIntFunctionMerge(jokerooo7_five_obj, jokerooo7_six_obj);
}

TEST_F(SetDoubleTests, Test18) {
  TestSetIntFunctionFind(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFunctionFind(jokerooo7_first_obj, std_first_obj);
  TestSetIntFunctionFind(jokerooo7_second_obj, std_second_obj);
  TestSetIntFunctionFind(jokerooo7_three_obj, std_three_obj);
  TestSetIntFunctionFind(jokerooo7_four_obj, std_four_obj);
  TestSetIntFunctionFind(jokerooo7_five_obj, std_five_obj);
  TestSetIntFunctionFind(jokerooo7_six_obj, std_six_obj);
}

TEST_F(SetDoubleTests, Test19) {
  TestSetIntFunctionFindTwo(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFunctionFindTwo(jokerooo7_first_obj, std_first_obj);
  TestSetIntFunctionFindTwo(jokerooo7_second_obj, std_second_obj);
  TestSetIntFunctionFindTwo(jokerooo7_three_obj, std_three_obj);
  TestSetIntFunctionFindTwo(jokerooo7_four_obj, std_four_obj);
  TestSetIntFunctionFindTwo(jokerooo7_five_obj, std_five_obj);
  TestSetIntFunctionFindTwo(jokerooo7_six_obj, std_six_obj);
}

// TEST_F(SetDoubleTests, Test20) {
//     TestSetIntFunctionMaxSize(jokerooo7_empty_obj, std_empty_obj);
//     TestSetIntFunctionMaxSize(jokerooo7_first_obj, std_first_obj);
//     TestSetIntFunctionMaxSize(jokerooo7_second_obj, std_second_obj);
//     TestSetIntFunctionMaxSize(jokerooo7_three_obj, std_three_obj);
//     TestSetIntFunctionMaxSize(jokerooo7_four_obj, std_four_obj);
//     TestSetIntFunctionMaxSize(jokerooo7_five_obj, std_five_obj);
//     TestSetIntFunctionMaxSize(jokerooo7_six_obj, std_six_obj);
// }

TEST_F(SetDoubleTests, Test21) {
  TestSetIntFunctionConstIter(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFunctionConstIter(jokerooo7_first_obj, std_first_obj);
  TestSetIntFunctionConstIter(jokerooo7_second_obj, std_second_obj);
  TestSetIntFunctionConstIter(jokerooo7_three_obj, std_three_obj);
  TestSetIntFunctionConstIter(jokerooo7_four_obj, std_four_obj);
  TestSetIntFunctionConstIter(jokerooo7_five_obj, std_five_obj);
  TestSetIntFunctionConstIter(jokerooo7_six_obj, std_six_obj);
}

TEST_F(SetDoubleTests, Test22) {
  EXPECT_EQ(jokerooo7_empty_obj.contains(-12), false);
  EXPECT_EQ(jokerooo7_first_obj.contains(-1), false);
  EXPECT_NEAR(jokerooo7_second_obj.contains(0.0002), true, 1e-9);
  EXPECT_EQ(jokerooo7_three_obj.contains(4), false);
  EXPECT_EQ(jokerooo7_four_obj.contains(-12), false);
  EXPECT_EQ(jokerooo7_five_obj.contains(-12), false);
  EXPECT_NEAR(jokerooo7_six_obj.contains(0.09999999999999), true, 1e-9);
}

TEST_F(SetDoubleTests, Test23) {
  TestSetIntFunctionEmplace(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFunctionEmplace(jokerooo7_first_obj, std_first_obj);
  TestSetIntFunctionEmplace(jokerooo7_second_obj, std_second_obj);
  TestSetIntFunctionEmplace(jokerooo7_three_obj, std_three_obj);
  TestSetIntFunctionEmplace(jokerooo7_four_obj, std_four_obj);
  TestSetIntFunctionEmplace(jokerooo7_five_obj, std_five_obj);
  TestSetIntFunctionEmplace(jokerooo7_six_obj, std_six_obj);
}

TEST_F(SetStringTests, Test1) {
  TestSetIntFuncionOne(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionOne(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionOne(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionOne(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionOne(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionOne(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionOne(jokerooo7_six_obj, std_six_obj);
  TestSetIntFuncionOne(jokerooo7_seven_obj, std_seven_obj);
}

TEST_F(SetStringTests, Test2) {
  TestSetIntFuncionTwo(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionTwo(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionTwo(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionTwo(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionTwo(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionTwo(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionTwo(jokerooo7_six_obj, std_six_obj);
  TestSetIntFuncionTwo(jokerooo7_seven_obj, std_seven_obj);
}

TEST_F(SetStringTests, Test3) {
  TestSetIntFuncionThree(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionThree(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionThree(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionThree(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionThree(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionThree(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionThree(jokerooo7_six_obj, std_six_obj);
  TestSetIntFuncionThree(jokerooo7_seven_obj, std_seven_obj);
}

TEST_F(SetStringTests, Test9) {
  TestSetIntFuncionNine(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionNine(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionNine(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionNine(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionNine(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionNine(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionNine(jokerooo7_six_obj, std_six_obj);
  TestSetIntFuncionNine(jokerooo7_seven_obj, std_seven_obj);
}

TEST_F(SetStringTests, Test10) {
  TestSetIntFuncionTen(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionTen(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionTen(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionTen(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionTen(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionTen(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionTen(jokerooo7_six_obj, std_six_obj);
  TestSetIntFuncionTen(jokerooo7_seven_obj, std_seven_obj);
}

TEST_F(SetStringTests, Test11) {
  TestSetIntFuncionEleven(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionEleven(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionEleven(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionEleven(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionEleven(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionEleven(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionEleven(jokerooo7_six_obj, std_six_obj);
  TestSetIntFuncionEleven(jokerooo7_seven_obj, std_seven_obj);
}

TEST_F(SetStringTests, Test12) {
  TestSetIntFuncionTwelve(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionTwelve(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionTwelve(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionTwelve(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionTwelve(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionTwelve(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionTwelve(jokerooo7_six_obj, std_six_obj);
  TestSetIntFuncionTwelve(jokerooo7_seven_obj, std_seven_obj);
}

TEST_F(SetStringTests, Test13) {
  TestSetIntFuncionThirteen(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionThirteen(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionThirteen(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionThirteen(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionThirteen(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionThirteen(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionThirteen(jokerooo7_six_obj, std_six_obj);
  TestSetIntFuncionThirteen(jokerooo7_seven_obj, std_seven_obj);
}

TEST_F(SetStringTests, Test14) {
  TestSetIntFuncionFourteen(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionFourteen(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionFourteen(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionFourteen(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionFourteen(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionFourteen(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionFourteen(jokerooo7_six_obj, std_six_obj);
  TestSetIntFuncionFourteen(jokerooo7_seven_obj, std_seven_obj);
}

TEST_F(SetStringTests, Test15) {
  TestSetIntFuncionClear(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFuncionClear(jokerooo7_first_obj, std_first_obj);
  TestSetIntFuncionClear(jokerooo7_second_obj, std_second_obj);
  TestSetIntFuncionClear(jokerooo7_three_obj, std_three_obj);
  TestSetIntFuncionClear(jokerooo7_four_obj, std_four_obj);
  TestSetIntFuncionClear(jokerooo7_five_obj, std_five_obj);
  TestSetIntFuncionClear(jokerooo7_six_obj, std_six_obj);
  TestSetIntFuncionClear(jokerooo7_seven_obj, std_seven_obj);
}

TEST_F(SetStringTests, Test16) {
  TestSetIntFunctionSwap(jokerooo7_empty_obj, jokerooo7_first_obj, std_empty_obj,
                         std_first_obj);
  TestSetIntFunctionSwap(jokerooo7_first_obj, jokerooo7_second_obj, std_first_obj,
                         std_second_obj);
  TestSetIntFunctionSwap(jokerooo7_second_obj, jokerooo7_three_obj, std_second_obj,
                         std_three_obj);
  TestSetIntFunctionSwap(jokerooo7_three_obj, jokerooo7_four_obj, std_three_obj,
                         std_four_obj);
  TestSetIntFunctionSwap(jokerooo7_four_obj, jokerooo7_five_obj, std_four_obj,
                         std_five_obj);
  TestSetIntFunctionSwap(jokerooo7_five_obj, jokerooo7_six_obj, std_five_obj, std_six_obj);
  TestSetIntFunctionSwap(jokerooo7_seven_obj, jokerooo7_empty_obj, std_seven_obj,
                         std_empty_obj);
}

TEST_F(SetStringTests, Test17) {
  TestSetIntFunctionMerge(jokerooo7_empty_obj, jokerooo7_first_obj);
  TestSetIntFunctionMerge(jokerooo7_first_obj, jokerooo7_second_obj);
  TestSetIntFunctionMerge(jokerooo7_second_obj, jokerooo7_three_obj);
  TestSetIntFunctionMerge(jokerooo7_three_obj, jokerooo7_four_obj);
  TestSetIntFunctionMerge(jokerooo7_four_obj, jokerooo7_five_obj);
  TestSetIntFunctionMerge(jokerooo7_five_obj, jokerooo7_six_obj);
  TestSetIntFunctionMerge(jokerooo7_seven_obj, jokerooo7_empty_obj);
}

TEST_F(SetStringTests, Test18) {
  TestSetStringFunctionFind(jokerooo7_empty_obj, std_empty_obj);
  TestSetStringFunctionFind(jokerooo7_first_obj, std_first_obj);
  TestSetStringFunctionFind(jokerooo7_second_obj, std_second_obj);
  TestSetStringFunctionFind(jokerooo7_three_obj, std_three_obj);
  TestSetStringFunctionFind(jokerooo7_four_obj, std_four_obj);
  TestSetStringFunctionFind(jokerooo7_five_obj, std_five_obj);
  TestSetStringFunctionFind(jokerooo7_six_obj, std_six_obj);
  TestSetStringFunctionFind(jokerooo7_seven_obj, std_seven_obj);
}

TEST_F(SetStringTests, Test19) {
  TestSetIntFunctionFindTwo(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFunctionFindTwo(jokerooo7_first_obj, std_first_obj);
  TestSetIntFunctionFindTwo(jokerooo7_second_obj, std_second_obj);
  TestSetIntFunctionFindTwo(jokerooo7_three_obj, std_three_obj);
  TestSetIntFunctionFindTwo(jokerooo7_four_obj, std_four_obj);
  TestSetIntFunctionFindTwo(jokerooo7_five_obj, std_five_obj);
  TestSetIntFunctionFindTwo(jokerooo7_six_obj, std_six_obj);
  TestSetIntFunctionFindTwo(jokerooo7_seven_obj, std_seven_obj);
}

// TEST_F(SetStringTests, Test20) {
//     TestSetIntFunctionMaxSize(jokerooo7_empty_obj, std_empty_obj);
//     TestSetIntFunctionMaxSize(jokerooo7_first_obj, std_first_obj);
//     TestSetIntFunctionMaxSize(jokerooo7_second_obj, std_second_obj);
//     TestSetIntFunctionMaxSize(jokerooo7_three_obj, std_three_obj);
//     TestSetIntFunctionMaxSize(jokerooo7_four_obj, std_four_obj);
//     TestSetIntFunctionMaxSize(jokerooo7_five_obj, std_five_obj);
//     TestSetIntFunctionMaxSize(jokerooo7_six_obj, std_six_obj);
// }

TEST_F(SetStringTests, Test21) {
  TestSetIntFunctionConstIter(jokerooo7_empty_obj, std_empty_obj);
  TestSetIntFunctionConstIter(jokerooo7_first_obj, std_first_obj);
  TestSetIntFunctionConstIter(jokerooo7_second_obj, std_second_obj);
  TestSetIntFunctionConstIter(jokerooo7_three_obj, std_three_obj);
  TestSetIntFunctionConstIter(jokerooo7_four_obj, std_four_obj);
  TestSetIntFunctionConstIter(jokerooo7_five_obj, std_five_obj);
  TestSetIntFunctionConstIter(jokerooo7_six_obj, std_six_obj);
  TestSetIntFunctionConstIter(jokerooo7_seven_obj, std_seven_obj);
}

TEST_F(SetStringTests, Test22) {
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

// template<typename K>
// void TestSetIntFunctionMerge(jokerooo7::set<K> obj_one, jokerooo7::set<K> obj_two,
//     std::set<K> std_one, std::set<K> std_two) {
//         jokerooo7::set<int> copy_obj_one;
//     obj_one.merge(obj_two);
//     std_one.merge(std_two);
//     ComparingTwoObjects(obj_one, std_one);
//     ComparingTwoObjects(obj_two, std_two);
// }

// TEST_F(SetIntTests, Test16) {
// TestSetIntFunctionMerge(jokerooo7_empty_obj, jokerooo7_first_obj, std_empty_obj,
// std_first_obj); TestSetIntFunctionMerge(jokerooo7_first_obj, jokerooo7_second_obj,
// std_first_obj, std_second_obj); TestSetIntFunctionMerge(jokerooo7_second_obj,
// jokerooo7_three_obj, std_second_obj, std_three_obj);
// TestSetIntFunctionMerge(jokerooo7_three_obj, jokerooo7_four_obj, std_three_obj,
// std_four_obj); TestSetIntFunctionMerge(jokerooo7_four_obj, jokerooo7_five_obj,
// std_four_obj, std_five_obj); TestSetIntFunctionMerge(jokerooo7_five_obj,
// jokerooo7_six_obj, std_five_obj, std_six_obj); TestSetIntFunctionMerge(jokerooo7_six_obj,
// jokerooo7_seven_obj, std_six_obj, std_seven_obj);
// TestSetIntFunctionMerge(jokerooo7_seven_obj, jokerooo7_eight_obj, std_seven_obj,
// std_eight_obj); TestSetIntFunctionMerge(jokerooo7_eight_obj, jokerooo7_nine_obj,
// std_eight_obj, std_nine_obj); TestSetIntFunctionMerge(jokerooo7_nine_obj,
// jokerooo7_ten_obj, std_nine_obj, std_ten_obj); TestSetIntFunctionMerge(jokerooo7_ten_obj,
// jokerooo7_empty_obj, std_ten_obj, std_empty_obj);
// }

// int main(int argc, char** argv) {
//     testing::InitGoogleTest(&argc, argv);
//     return RUN_ALL_TESTS();
// }