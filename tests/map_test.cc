#include <gtest/gtest.h>

#include <map>
#include <string>

#include "map.h"

class MapIntDoubleTests : public ::testing::Test {
 protected:
  jokerooo7::map<int, double> jokerooo7_empty_obj;
  std::map<int, double> std_empty_obj;

  jokerooo7::map<int, double> jokerooo7_first_obj = {{1, 3.14}};
  std::map<int, double> std_first_obj = {{1, 3.14}};

  jokerooo7::map<int, double> jokerooo7_second_obj = {{1, 3.14}, {2, 6.28}};
  std::map<int, double> std_second_obj = {{1, 3.14}, {2, 6.28}};

  jokerooo7::map<int, double> jokerooo7_three_obj = {{1, 3.14}, {2, 6.28}, {3, 9.42}};
  std::map<int, double> std_three_obj = {{1, 3.14}, {2, 6.28}, {3, 9.42}};

  jokerooo7::map<int, double> jokerooo7_four_obj = {
      {1, 3.14}, {2, 6.28}, {3, 9.42}, {4, 3.14}};
  std::map<int, double> std_four_obj = {
      {1, 3.14}, {2, 6.28}, {3, 9.42}, {4, 3.14}};

  jokerooo7::map<int, double> jokerooo7_five_obj = {
      {1, 3.14}, {2, 6.28}, {3, 9.42}, {4, 3.14}, {5, 6.28}};
  std::map<int, double> std_five_obj = {
      {1, 3.14}, {2, 6.28}, {3, 9.42}, {4, 3.14}, {5, 6.28}};

  jokerooo7::map<int, double> jokerooo7_six_obj = {{2, 6.28}, {1, 3.14}, {3, 9.42},
                                       {5, 6.28}, {4, 3.14}, {6, 3.14},
                                       {8, 9.42}, {7, 6.28}};
  std::map<int, double> std_six_obj = {{2, 6.28}, {1, 3.14}, {3, 9.42},
                                       {5, 6.28}, {4, 3.14}, {6, 3.14},
                                       {8, 9.42}, {7, 6.28}};

  jokerooo7::map<int, double> jokerooo7_seven_obj = {{1, 3.14}, {2, 6.28}, {3, 9.42},
                                         {4, 3.14}, {5, 6.28}, {6, 3.14},
                                         {7, 9.42}, {8, 9.42}, {9, 6.28}};
  std::map<int, double> std_seven_obj = {{1, 3.14}, {2, 6.28}, {3, 9.42},
                                         {4, 3.14}, {5, 6.28}, {6, 3.14},
                                         {7, 9.42}, {8, 9.42}, {9, 6.28}};

  jokerooo7::map<int, double> jokerooo7_eight_obj = {
      {1, 3.14}, {2, 6.28}, {3, 9.42}, {4, 3.14}, {5, 6.28},
      {6, 3.14}, {7, 9.42}, {8, 9.42}, {9, 6.28}, {10, 0.13}};
  std::map<int, double> std_eight_obj = {
      {1, 3.14}, {2, 6.28}, {3, 9.42}, {4, 3.14}, {5, 6.28},
      {6, 3.14}, {7, 9.42}, {8, 9.42}, {9, 6.28}, {10, 0.13}};

  jokerooo7::map<int, double> jokerooo7_nine_obj = {
      {354, 0.0001}, {-100, 0.009},  {50, 0.008}, {1, 3.14}, {2, 6.28},
      {3, 9.42},     {124, 0.00009}, {5, 6.28},   {6, 3.14}, {-199, 0.909},
      {7, 9.42},     {8, 9.42},      {9, 6.28},   {0, 0.0},  {10, 0.13}};
  std::map<int, double> std_nine_obj = {
      {354, 0.0001}, {-100, 0.009},  {50, 0.008}, {1, 3.14}, {2, 6.28},
      {3, 9.42},     {124, 0.00009}, {5, 6.28},   {6, 3.14}, {-199, 0.909},
      {7, 9.42},     {8, 9.42},      {9, 6.28},   {0, 0.0},  {10, 0.13}};

  jokerooo7::map<int, double> jokerooo7_ten_obj = {
      {1, 3.14}, {1, 0.14}, {1, 1.14}, {2, 6.28}, {1, 4.14},
      {2, 6.98}, {1, 1.14}, {3, 9.42}, {4, 3.14}, {1, 3.1415}};
  std::map<int, double> std_ten_obj = {
      {1, 3.14}, {1, 0.14}, {1, 1.14}, {2, 6.28}, {1, 4.14},
      {2, 6.98}, {1, 1.14}, {3, 9.42}, {4, 3.14}, {1, 3.1415}};
};

class MapDoubleBoolTests : public ::testing::Test {
 protected:
  jokerooo7::map<double, bool> jokerooo7_empty_obj;
  std::map<double, bool> std_empty_obj;

  jokerooo7::map<double, bool> jokerooo7_first_obj = {{0.992, true}};
  std::map<double, bool> std_first_obj = {{0.992, true}};

  jokerooo7::map<double, bool> jokerooo7_second_obj = {{0.001, false}, {0.0002, true}};
  std::map<double, bool> std_second_obj = {{0.001, false}, {0.0002, true}};
  jokerooo7::map<double, bool> jokerooo7_three_obj = {
      {0.001, false}, {0.0002, true}, {0.003, false}};
  std::map<double, bool> std_three_obj = {
      {0.001, false}, {0.0002, true}, {0.003, false}};

  jokerooo7::map<double, bool> jokerooo7_four_obj = {
      {0.001, true}, {0.002, false}, {0.003, true}, {0.004, false}};
  std::map<double, bool> std_four_obj = {
      {0.001, true}, {0.002, false}, {0.003, true}, {0.004, false}};

  jokerooo7::map<double, bool> jokerooo7_five_obj = {{0.001, true},
                                         {0.002, false},
                                         {0.003, true},
                                         {0.004, false},
                                         {0.005, false}};
  std::map<double, bool> std_five_obj = {{0.001, true},
                                         {0.002, false},
                                         {0.003, true},
                                         {0.004, false},
                                         {0.005, false}};

  jokerooo7::map<double, bool> jokerooo7_six_obj = {{0.0000009, false},
                                        {0.00000004, false},
                                        {-0.00000001999, false},
                                        {0.09999999999999, true}};
  std::map<double, bool> std_six_obj = {{0.0000009, false},
                                        {0.00000004, false},
                                        {-0.00000001999, false},
                                        {0.09999999999999, true}};
};

class MapStringBoolTests : public ::testing::Test {
 protected:
  jokerooo7::map<std::string, bool> jokerooo7_empty_obj;
  std::map<std::string, bool> std_empty_obj;

  jokerooo7::map<std::string, bool> jokerooo7_first_obj = {{"", false}};
  std::map<std::string, bool> std_first_obj = {{"", false}};

  jokerooo7::map<std::string, bool> jokerooo7_second_obj = {{"pop", false},
                                                {"12345", true}};
  std::map<std::string, bool> std_second_obj = {{"pop", false},
                                                {"12345", true}};

  jokerooo7::map<std::string, bool> jokerooo7_three_obj = {
      {"index", false}, {"lol", true}, {"utr", true}};
  std::map<std::string, bool> std_three_obj = {
      {"index", false}, {"lol", true}, {"utr", true}};

  jokerooo7::map<std::string, bool> jokerooo7_four_obj = {
      {"1", false}, {"2", false}, {"3", false}, {"4", true},  {"5", true},
      {"6", true},  {"7", false}, {"8", false}, {"9", false}, {"10", true}};
  std::map<std::string, bool> std_four_obj = {
      {"1", false}, {"2", false}, {"3", false}, {"4", true},  {"5", true},
      {"6", true},  {"7", false}, {"8", false}, {"9", false}, {"10", true}};

  jokerooo7::map<std::string, bool> jokerooo7_five_obj = {
      {"A", false}, {"2", true},  {"3", false}, {"B", true},
      {"C", true},  {"6", false}, {"7", true},  {"8", false},
      {"9", false}, {"10", true}, {"1", false}, {"4", true}};
  std::map<std::string, bool> std_five_obj = {
      {"A", false}, {"2", true},  {"3", false}, {"B", true},
      {"C", true},  {"6", false}, {"7", true},  {"8", false},
      {"9", false}, {"10", true}, {"1", false}, {"4", true}};

  jokerooo7::map<std::string, bool> jokerooo7_six_obj = {
      {"1", false}, {"2", false}, {"3", false}, {"4", true}, {"5", true},
      {"1", false}, {"1", false}, {"3", false}, {"5", true}, {"10", true}};
  std::map<std::string, bool> std_six_obj = {
      {"1", false}, {"2", false}, {"3", false}, {"4", true}, {"5", true},
      {"1", false}, {"1", false}, {"3", false}, {"5", true}, {"10", true}};

  jokerooo7::map<std::string, bool> jokerooo7_seven_obj = {
      {"apple", true},    {"banana", true},   {"car", false},
      {"cat", false},     {"dogs", true},     {"lower", false},
      {"skeleton", true}, {"public", false},  {"main", false},
      {"bag", false},     {"DoDo", true},     {"pass", false},
      {"yoda", false},    {"bar", false},     {"array", true},
      {"cool", false},    {"private", false}, {"dooble", false},
      {"sisi", true},     {"none", false},    {"mall", true},
      {"pasta", false},   {"god", true}};

  std::map<std::string, bool> std_seven_obj = {
      {"apple", true},    {"banana", true},   {"car", false},
      {"cat", false},     {"dogs", true},     {"lower", false},
      {"skeleton", true}, {"public", false},  {"main", false},
      {"bag", false},     {"DoDo", true},     {"pass", false},
      {"yoda", false},    {"bar", false},     {"array", true},
      {"cool", false},    {"private", false}, {"dooble", false},
      {"sisi", true},     {"none", false},    {"mall", true},
      {"pasta", false},   {"god", true}};
};

template <typename K, typename T>
void ComparingTwoObjects(jokerooo7::map<K, T> obj_one, std::map<K, T> obj_two) {
  typename jokerooo7::map<K, T>::iterator iter_one = obj_one.begin();
  typename std::map<K, T>::iterator iter_two = obj_two.begin();
  for (; iter_one != obj_one.end(); ++iter_one, ++iter_two) {
    if constexpr (std::is_arithmetic<K>::value) {
      EXPECT_NEAR((*iter_one).first, (*iter_two).first, 1e-9);
      EXPECT_EQ((*iter_one).second, (*iter_two).second);
    } else {
      EXPECT_EQ((*iter_one).first, (*iter_two).first);
      EXPECT_EQ((*iter_one).second, (*iter_two).second);
    }
    EXPECT_EQ(obj_one.size(), obj_two.size());
  }
  EXPECT_EQ(obj_one.empty(), obj_two.empty());
  iter_one = obj_one.begin();
  iter_two = obj_two.begin();
  for (; iter_two != obj_two.end(); ++iter_one, ++iter_two) {
    if constexpr (std::is_arithmetic<K>::value) {
      EXPECT_NEAR((*iter_one).first, (*iter_two).first, 1e-9);
      EXPECT_EQ((*iter_one).second, (*iter_two).second);
    } else {
      EXPECT_EQ((*iter_one).first, (*iter_two).first);
      EXPECT_EQ((*iter_one).second, (*iter_two).second);
    }
    EXPECT_EQ(obj_one.size(), obj_two.size());
  }
  EXPECT_EQ(obj_one.empty(), obj_two.empty());
}

template <typename K, typename T>
void TestMapIntFuncionOne(jokerooo7::map<K, T> obj_one, std::map<K, T> obj_two) {
  ComparingTwoObjects(obj_one, obj_two);
}

template <typename K, typename T>
void TestMapIntFuncionTwo(jokerooo7::map<K, T> obj_one, std::map<K, T> obj_two) {
  typename jokerooo7::map<K, T>::iterator iter_one = obj_one.begin();
  typename std::map<K, T>::iterator iter_two = obj_two.begin();
  if (!obj_one.empty()) {
    obj_one.erase(iter_one);
    obj_two.erase(iter_two);
  }
  ComparingTwoObjects(obj_one, obj_two);
}

template <typename K, typename T>
void TestMapIntFuncionThree(jokerooo7::map<K, T> obj_one, std::map<K, T> obj_two) {
  typename jokerooo7::map<K, T>::iterator iter_one = obj_one.begin();
  typename std::map<K, T>::iterator iter_two = obj_two.begin();
  for (; iter_one != obj_one.end();
       iter_one = obj_one.begin(), iter_two = obj_two.begin()) {
    if constexpr (std::is_arithmetic<K>::value) {
      EXPECT_NEAR((*iter_one).first, (*iter_two).first, 1e-9);
      EXPECT_EQ((*iter_one).second, (*iter_two).second);
    } else {
      EXPECT_EQ((*iter_one).first, (*iter_two).first);
      EXPECT_EQ((*iter_one).second, (*iter_two).second);
    }
    if (!obj_two.empty()) {
      obj_one.erase(iter_one);
      obj_two.erase(iter_two);
    }
  }
  EXPECT_EQ(obj_one.empty(), obj_two.empty());
}

template <typename K, typename T>
void TestMapIntFuncionFour(jokerooo7::map<K, T> obj_one, std::map<K, T> obj_two) {
  typename jokerooo7::map<K, T>::iterator iter_one = obj_one.begin();
  typename std::map<K, T>::iterator iter_two = obj_two.begin();
  for (int i = 0; i != 10;
       ++i, iter_one = obj_one.begin(), iter_two = obj_two.begin()) {
    if (!obj_two.empty()) {
      obj_one.erase(iter_one);
      obj_two.erase(iter_two);
    }
    obj_one.insert(std::make_pair(0.0 + i, 0.0 + i));
    obj_two.insert(std::make_pair(0.0 + i, 0.0 + i));
    ComparingTwoObjects(obj_one, obj_two);
  }
  EXPECT_EQ(obj_one.empty(), obj_two.empty());
}

template <typename K, typename T>
void TestMapIntFuncionFive(jokerooo7::map<K, T> obj_one, std::map<K, T> obj_two) {
  typename jokerooo7::map<K, T>::iterator iter_one = obj_one.begin();
  typename std::map<K, T>::iterator iter_two = obj_two.begin();
  for (int i = 0; i != 20;
       ++i, iter_one = obj_one.begin(), iter_two = obj_two.begin()) {
    if (!obj_two.empty() && i % 2 == 0) {
      obj_one.erase(iter_one);
      obj_two.erase(iter_two);
    }
    obj_one.insert(std::make_pair(0.0 + i, 0.0 + i));
    obj_two.insert(std::make_pair(0.0 + i, 0.0 + i));
    ComparingTwoObjects(obj_one, obj_two);
  }
  EXPECT_EQ(obj_one.empty(), obj_two.empty());
}

template <typename K, typename T>
void TestMapIntFuncionSix(jokerooo7::map<K, T> obj_one, std::map<K, T> obj_two) {
  typename jokerooo7::map<K, T>::iterator iter_one = obj_one.begin();
  typename std::map<K, T>::iterator iter_two = obj_two.begin();
  for (int i = 0; i != 100; ++i) {
    if (!obj_two.empty() && i % 2 == 0) {
      obj_one.erase(iter_one);
      obj_two.erase(iter_two);
    }
    iter_one = (obj_one.insert(std::make_pair(0.0 + i * 2, 0.0 + i))).first;
    iter_two = (obj_two.insert(std::make_pair(0.0 + i * 2, 0.0 + i))).first;
    ComparingTwoObjects(obj_one, obj_two);
  }
  EXPECT_EQ(obj_one.empty(), obj_two.empty());
}

template <typename K, typename T>
void TestMapIntFuncionSeven(jokerooo7::map<K, T> obj_one, std::map<K, T> obj_two) {
  typename jokerooo7::map<K, T>::iterator iter_one = obj_one.begin();
  typename std::map<K, T>::iterator iter_two = obj_two.begin();
  for (int i = 0; i != 100; ++i) {
    if (!obj_two.empty() && i % 3 == 0) {
      obj_one.erase(iter_one);
      obj_two.erase(iter_two);
    }
    iter_one = (obj_one.insert(std::make_pair(0.0 + i, 0.0 + i))).first;
    iter_two = (obj_two.insert(std::make_pair(0.0 + i, 0.0 + i))).first;
    ComparingTwoObjects(obj_one, obj_two);
  }
  EXPECT_EQ(obj_one.empty(), obj_two.empty());
}

template <typename K, typename T>
void TestMapIntFuncionEight(jokerooo7::map<K, T> obj_one, std::map<K, T> obj_two) {
  typename jokerooo7::map<K, T>::iterator iter_one = obj_one.begin();
  typename std::map<K, T>::iterator iter_two = obj_two.begin();
  for (int i = 0; i != 100; ++i) {
    if (!obj_two.empty() && i % 7 == 0) {
      obj_one.erase(iter_one);
      obj_two.erase(iter_two);
    }
    iter_one = (obj_one.insert(std::make_pair(0.0 + i, 0.0 + i))).first;
    iter_two = (obj_two.insert(std::make_pair(0.0 + i, 0.0 + i))).first;
    ComparingTwoObjects(obj_one, obj_two);
  }
  EXPECT_EQ(obj_one.empty(), obj_two.empty());
}

template <typename K, typename T>
void TestMapIntFuncionNine(jokerooo7::map<K, T> obj_one, std::map<K, T> obj_two) {
  typename jokerooo7::map<K, T> copy_obj_one(obj_one);
  typename std::map<K, T> copy_obj_two(obj_two);
  typename jokerooo7::map<K, T>::iterator iter_one = obj_one.begin();
  typename jokerooo7::map<K, T>::iterator iter_copy_one = copy_obj_one.begin();
  typename std::map<K, T>::iterator iter_two = obj_two.begin();
  typename std::map<K, T>::iterator iter_copy_two = copy_obj_two.begin();
  for (; iter_one != obj_one.end();
       ++iter_one, ++iter_copy_one, ++iter_two, ++iter_copy_two) {
    if constexpr (std::is_same<K, double>::value) {
      EXPECT_NEAR((*iter_one).first, (*iter_two).first, 1e-9);
      EXPECT_NEAR((*iter_one).second, (*iter_two).second, 1e-9);
      EXPECT_NEAR((*iter_one).first, (*iter_copy_one).first, 1e-9);
      EXPECT_NEAR((*iter_one).second, (*iter_copy_one).second, 1e-9);
      EXPECT_NEAR((*iter_copy_one).first, (*iter_copy_two).first, 1e-9);
      EXPECT_NEAR((*iter_copy_one).second, (*iter_copy_two).second, 1e-9);
    } else {
      EXPECT_EQ((*iter_one).first, (*iter_two).first);
      EXPECT_EQ((*iter_one).second, (*iter_two).second);
      EXPECT_EQ((*iter_one).first, (*iter_copy_one).first);
      EXPECT_EQ((*iter_one).second, (*iter_copy_one).second);
      EXPECT_EQ((*iter_copy_one).first, (*iter_copy_two).first);
      EXPECT_EQ((*iter_copy_one).second, (*iter_copy_two).second);
    }
  }
}

template <typename K, typename T>
void TestMapIntFuncionTen(jokerooo7::map<K, T> obj_one, std::map<K, T> obj_two) {
  typename jokerooo7::map<K, T> copy_obj_one = std::move(obj_one);
  typename std::map<K, T> copy_obj_two = std::move(obj_two);
  ComparingTwoObjects(obj_one, obj_two);
  ComparingTwoObjects(copy_obj_one, copy_obj_two);
}

template <typename K, typename T>
void TestMapIntFuncionEleven(jokerooo7::map<K, T> obj_one, std::map<K, T> obj_two) {
  typename jokerooo7::map<K, T> copy_obj_one;
  typename std::map<K, T> copy_obj_two;
  copy_obj_one = obj_one;
  copy_obj_two = obj_two;
  typename jokerooo7::map<K, T>::iterator iter_one = obj_one.begin();
  typename jokerooo7::map<K, T>::iterator iter_copy_one = copy_obj_one.begin();
  typename std::map<K, T>::iterator iter_two = obj_two.begin();
  typename std::map<K, T>::iterator iter_copy_two = copy_obj_two.begin();
  for (; iter_one != obj_one.end();
       ++iter_one, ++iter_copy_one, ++iter_two, ++iter_copy_two) {
    if constexpr (std::is_same<K, double>::value) {
      EXPECT_NEAR((*iter_one).first, (*iter_two).first, 1e-9);
      EXPECT_NEAR((*iter_one).second, (*iter_two).second, 1e-9);
      EXPECT_NEAR((*iter_one).first, (*iter_copy_one).first, 1e-9);
      EXPECT_NEAR((*iter_one).second, (*iter_copy_one).second, 1e-9);
      EXPECT_NEAR((*iter_copy_one).first, (*iter_copy_two).first, 1e-9);
      EXPECT_NEAR((*iter_copy_one).second, (*iter_copy_two).second, 1e-9);
    } else {
      EXPECT_EQ((*iter_one).first, (*iter_two).first);
      EXPECT_EQ((*iter_one).second, (*iter_two).second);
      EXPECT_EQ((*iter_one).first, (*iter_copy_one).first);
      EXPECT_EQ((*iter_one).second, (*iter_copy_one).second);
      EXPECT_EQ((*iter_copy_one).first, (*iter_copy_two).first);
      EXPECT_EQ((*iter_copy_one).second, (*iter_copy_two).second);
    }
  }
}

template <typename K, typename T>
void TestMapIntFuncionTwelve(jokerooo7::map<K, T> obj_one, std::map<K, T> obj_two) {
  typename jokerooo7::map<K, T> copy_obj_one;
  typename std::map<K, T> copy_obj_two;
  copy_obj_one = std::move(obj_one);
  copy_obj_two = std::move(obj_two);
  ComparingTwoObjects(obj_one, obj_two);
  ComparingTwoObjects(copy_obj_one, copy_obj_two);
}

template <typename K, typename T>
void TestMapIntFuncionThirteen(jokerooo7::map<K, T> obj_one, std::map<K, T> obj_two) {
  EXPECT_EQ(obj_one.size(), obj_two.size());
  if (!obj_one.empty()) obj_one.erase(obj_one.begin());
  if (!obj_two.empty()) obj_two.erase(obj_two.begin());
  EXPECT_EQ(obj_one.size(), obj_two.size());
}

template <typename K, typename T>
void TestMapIntFuncionFourteen(jokerooo7::map<K, T> obj_one, std::map<K, T> obj_two) {
  typename jokerooo7::map<K, T>::iterator iter_one = obj_one.end();
  typename std::map<K, T>::iterator iter_two = obj_two.end();
  if (!obj_one.empty()) {  // becose *iter (nullptr) in my realization == 0
    --iter_one;
    --iter_two;
  }
  for (int i = 1; iter_one != obj_one.begin(); --iter_one, --iter_two, ++i) {
    if constexpr (std::is_arithmetic<K>::value) {
      EXPECT_NEAR((*iter_one).first, (*iter_two).first, 1e-9);
      EXPECT_EQ((*iter_one).second, (*iter_two).second);
    } else {
      EXPECT_EQ((*iter_one).first, (*iter_two).first);
      EXPECT_EQ((*iter_one).second, (*iter_two).second);
    }
  }
}

template <typename K, typename T>
void TestMapIntFuncionFifteen(jokerooo7::map<K, T> obj_one, std::map<K, T> obj_two) {
  typename jokerooo7::map<K, T>::iterator iter_one = obj_one.begin();
  typename std::map<K, T>::iterator iter_two = obj_two.begin();
  bool flag_one;
  bool flag_two;
  for (int i = 0; i != 50; ++i) {
    flag_one = (obj_one.insert((*iter_one).first, (*iter_one).second)).second;
    flag_two =
        (obj_two.insert(std::make_pair((*iter_two).first, (*iter_two).second)))
            .second;
    EXPECT_EQ(flag_one, flag_two);
    ComparingTwoObjects(obj_one, obj_two);
  }
  EXPECT_EQ(obj_one.empty(), obj_two.empty());
}

template <typename K, typename T>
void TestMapIntFuncionSixteen(jokerooo7::map<K, T> obj_one, std::map<K, T> obj_two) {
  typename jokerooo7::map<K, T>::iterator iter_one = obj_one.begin();
  typename std::map<K, T>::iterator iter_two = obj_two.begin();
  bool flag_one;
  bool flag_two;
  for (int i = 0; i != 100;
       ++i, iter_one = obj_one.begin(), iter_two = obj_two.begin()) {
    if (!obj_two.empty() && i % 3 == 0) {
      obj_one.erase(iter_one);
      obj_two.erase(iter_two);
    }
    flag_one = (obj_one.insert_or_assign(0.0 + i, 0.0 + i)).second;
    flag_two = (obj_two.insert_or_assign(0.0 + i, 0.0 + i)).second;
    ComparingTwoObjects(obj_one, obj_two);
    EXPECT_EQ(flag_one, flag_two);
  }
  EXPECT_EQ(obj_one.empty(), obj_two.empty());
}

template <typename K, typename T>
void TestMapIntFuncionClear(jokerooo7::map<K, T> obj_one, std::map<K, T> obj_two) {
  obj_one.clear();
  obj_two.clear();
  ComparingTwoObjects(obj_one, obj_two);
}

template <typename K, typename T>
void TestMapIntFunctionSwap(jokerooo7::map<K, T> obj_one, jokerooo7::map<K, T> obj_two,
                            typename std::map<K, T> std_one,
                            std::map<K, T> std_two) {
  obj_one.swap(obj_two);
  std_one.swap(std_two);
  ComparingTwoObjects(obj_one, std_one);
  ComparingTwoObjects(obj_two, std_two);
}

template <typename K, typename T>
void TestMapIntFunctionAt(jokerooo7::map<K, T> obj_one, std::map<K, T> obj_two) {
  EXPECT_THROW(obj_one.at(-12), std::out_of_range);
  EXPECT_THROW(obj_two.at(-12), std::out_of_range);
}

template <typename K, typename T>
void TestMapStringFunctionAt(jokerooo7::map<K, T> obj_one, std::map<K, T> obj_two) {
  EXPECT_THROW(obj_one.at("-cat"), std::out_of_range);
  EXPECT_THROW(obj_two.at("-cat"), std::out_of_range);
}

template <typename K, typename T>
void TestMapIntFunctionAtTwo(jokerooo7::map<K, T> obj_one, std::map<K, T> obj_two) {
  if (!obj_one.empty()) {
    typename jokerooo7::map<K, T>::iterator iter_one = obj_one.begin();
    typename std::map<K, T>::iterator iter_two = obj_two.begin();
    EXPECT_EQ(obj_one.at((*iter_one).first), obj_two.at((*iter_two).first));
  }
}

template <typename K, typename T>
void TestMapIntFunctionMaxSize(jokerooo7::map<K, T> obj_one, std::map<K, T> obj_two) {
  EXPECT_EQ(obj_one.max_size(), obj_two.max_size());
}

template <typename K, typename T>
void TestMapIntFunctionConstIter(jokerooo7::map<K, T> obj_one,
                                 std::map<K, T> obj_two) {
  typename jokerooo7::map<K, T>::const_iterator iter_one = obj_one.cbegin();
  typename std::map<K, T>::const_iterator iter_two = obj_two.begin();
  if (!obj_one.empty()) {
    if constexpr (std::is_arithmetic<K>::value) {
      EXPECT_NEAR((*iter_one).first, (*iter_two).first, 1e-9);
      EXPECT_EQ((*iter_one).second, (*iter_two).second);
    } else {
      EXPECT_EQ((*iter_one).first, (*iter_two).first);
      EXPECT_EQ((*iter_one).second, (*iter_two).second);
    }
    EXPECT_EQ(obj_one.at((*iter_one).first), obj_two.at((*iter_two).first));
    if (obj_one.size() > 1) {
      ++iter_one;
      ++iter_two;
      if constexpr (std::is_arithmetic<K>::value) {
        EXPECT_NEAR((*iter_one).first, (*iter_two).first, 1e-9);
        EXPECT_EQ((*iter_one).second, (*iter_two).second);
      } else {
        EXPECT_EQ((*iter_one).first, (*iter_two).first);
        EXPECT_EQ((*iter_one).second, (*iter_two).second);
      }
    }
  }
}

template <typename K, typename T>
void TestMapIntFunctionMerge(jokerooo7::map<K, T> obj_one,
                             jokerooo7::map<K, T> obj_two) {  // my realization
  typename jokerooo7::map<K, T> copy_obj_one(obj_one);
  typename jokerooo7::map<K, T> copy_obj_two(obj_two);
  typename jokerooo7::map<K, T>::iterator iter_one = obj_two.begin();
  for (; iter_one != obj_two.end(); ++iter_one) {
    copy_obj_one.insert(*iter_one);
  }
  obj_one.merge(obj_two);

  typename jokerooo7::map<K, T>::iterator iter_two = obj_one.begin();
  iter_one = copy_obj_one.begin();
  for (; iter_one != copy_obj_one.end(); ++iter_one, ++iter_two) {
    if constexpr (std::is_arithmetic<K>::value) {
      EXPECT_NEAR((*iter_one).first, (*iter_two).first, 1e-9);
      EXPECT_EQ((*iter_one).second, (*iter_two).second);
    } else {
      EXPECT_EQ((*iter_one).first, (*iter_two).first);
      EXPECT_EQ((*iter_one).second, (*iter_two).second);
    }
  }
  EXPECT_EQ(copy_obj_one.size(), obj_one.size());

  iter_one = copy_obj_two.begin();
  iter_two = obj_two.begin();
  for (; iter_one != copy_obj_two.end(); ++iter_one, ++iter_two) {
    if constexpr (std::is_arithmetic<K>::value) {
      EXPECT_NEAR((*iter_one).first, (*iter_two).first, 1e-9);
      EXPECT_EQ((*iter_one).second, (*iter_two).second);
    } else {
      EXPECT_EQ((*iter_one).first, (*iter_two).first);
      EXPECT_EQ((*iter_one).second, (*iter_two).second);
    }
  }
  EXPECT_EQ(copy_obj_two.size(), obj_two.size());
}

template <typename K, typename T>
void TestMapStringFunctionEmplace(jokerooo7::map<K, T> obj_one,
                                  std::map<K, T> obj_two) {
  auto v = obj_one.insert_many(std::pair<std::string, int>{"eleven", 11},
                               std::pair<std::string, int>{"twelve", 12},
                               std::pair<std::string, int>{"nine", 13},
                               std::pair<std::string, int>{"thirteen", 13});
  obj_two.emplace("eleven", 11);
  obj_two.emplace("nine", 13);
  obj_two.emplace("thirteen", 13);
  auto p2 = obj_two.emplace("twelve", 12);

  EXPECT_EQ((*(v[1].first)).first, (*(p2.first)).first);
  EXPECT_EQ((*(v[1].first)).second, (*(p2.first)).second);
  EXPECT_EQ(v[1].second, p2.second);

  EXPECT_EQ(obj_one.size(), obj_two.size());
  EXPECT_EQ(obj_one.empty(), obj_two.empty());

  EXPECT_EQ(obj_one.size(), obj_two.size());
  EXPECT_EQ(obj_one.empty(), obj_two.empty());
}

template <typename K, typename T>
void TestMapIntOperatorElement(jokerooo7::map<K, T> obj_one, std::map<K, T> obj_two) {
  EXPECT_EQ(obj_one[1], obj_two[1]);
  EXPECT_EQ(obj_one[101], obj_two[101]);
  ComparingTwoObjects(obj_one, obj_two);
}

TEST_F(MapIntDoubleTests, Test1) {
  TestMapIntFuncionOne(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionOne(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionOne(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionOne(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionOne(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionOne(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionOne(jokerooo7_six_obj, std_six_obj);
  TestMapIntFuncionOne(jokerooo7_seven_obj, std_seven_obj);
  TestMapIntFuncionOne(jokerooo7_eight_obj, std_eight_obj);
  TestMapIntFuncionOne(jokerooo7_nine_obj, std_nine_obj);
  TestMapIntFuncionOne(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(MapIntDoubleTests, Test2) {
  TestMapIntFuncionTwo(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionTwo(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionTwo(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionTwo(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionTwo(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionTwo(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionTwo(jokerooo7_six_obj, std_six_obj);
  TestMapIntFuncionTwo(jokerooo7_seven_obj, std_seven_obj);
  TestMapIntFuncionTwo(jokerooo7_eight_obj, std_eight_obj);
  TestMapIntFuncionTwo(jokerooo7_nine_obj, std_nine_obj);
  TestMapIntFuncionTwo(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(MapIntDoubleTests, Test3) {
  TestMapIntFuncionThree(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionThree(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionThree(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionThree(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionThree(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionThree(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionThree(jokerooo7_six_obj, std_six_obj);
  TestMapIntFuncionThree(jokerooo7_seven_obj, std_seven_obj);
  TestMapIntFuncionThree(jokerooo7_eight_obj, std_eight_obj);
  TestMapIntFuncionThree(jokerooo7_nine_obj, std_nine_obj);
  TestMapIntFuncionThree(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(MapIntDoubleTests, Test4) {
  TestMapIntFuncionFour(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionFour(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionFour(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionFour(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionFour(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionFour(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionFour(jokerooo7_six_obj, std_six_obj);
  TestMapIntFuncionFour(jokerooo7_seven_obj, std_seven_obj);
  TestMapIntFuncionFour(jokerooo7_eight_obj, std_eight_obj);
  TestMapIntFuncionFour(jokerooo7_nine_obj, std_nine_obj);
  TestMapIntFuncionFour(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(MapIntDoubleTests, Test5) {
  TestMapIntFuncionFive(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionFive(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionFive(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionFive(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionFive(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionFive(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionFive(jokerooo7_six_obj, std_six_obj);
  TestMapIntFuncionFive(jokerooo7_seven_obj, std_seven_obj);
  TestMapIntFuncionFive(jokerooo7_eight_obj, std_eight_obj);
  TestMapIntFuncionFive(jokerooo7_nine_obj, std_nine_obj);
  TestMapIntFuncionFive(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(MapIntDoubleTests, Test6) {
  TestMapIntFuncionSix(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionSix(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionSix(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionSix(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionSix(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionSix(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionSix(jokerooo7_six_obj, std_six_obj);
  TestMapIntFuncionSix(jokerooo7_seven_obj, std_seven_obj);
  TestMapIntFuncionSix(jokerooo7_eight_obj, std_eight_obj);
  TestMapIntFuncionSix(jokerooo7_nine_obj, std_nine_obj);
  TestMapIntFuncionSix(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(MapIntDoubleTests, Test7) {
  TestMapIntFuncionSeven(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionSeven(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionSeven(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionSeven(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionSeven(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionSeven(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionSeven(jokerooo7_six_obj, std_six_obj);
  TestMapIntFuncionSeven(jokerooo7_seven_obj, std_seven_obj);
  TestMapIntFuncionSeven(jokerooo7_eight_obj, std_eight_obj);
  TestMapIntFuncionSeven(jokerooo7_nine_obj, std_nine_obj);
  TestMapIntFuncionSeven(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(MapIntDoubleTests, Test8) {
  TestMapIntFuncionEight(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionEight(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionEight(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionEight(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionEight(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionEight(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionEight(jokerooo7_six_obj, std_six_obj);
  TestMapIntFuncionEight(jokerooo7_seven_obj, std_seven_obj);
  TestMapIntFuncionEight(jokerooo7_eight_obj, std_eight_obj);
  TestMapIntFuncionEight(jokerooo7_nine_obj, std_nine_obj);
  TestMapIntFuncionEight(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(MapIntDoubleTests, Test9) {
  TestMapIntFuncionNine(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionNine(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionNine(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionNine(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionNine(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionNine(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionNine(jokerooo7_six_obj, std_six_obj);
  TestMapIntFuncionNine(jokerooo7_seven_obj, std_seven_obj);
  TestMapIntFuncionNine(jokerooo7_eight_obj, std_eight_obj);
  TestMapIntFuncionNine(jokerooo7_nine_obj, std_nine_obj);
  TestMapIntFuncionNine(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(MapIntDoubleTests, Test10) {
  TestMapIntFuncionTen(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionTen(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionTen(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionTen(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionTen(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionTen(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionTen(jokerooo7_six_obj, std_six_obj);
  TestMapIntFuncionTen(jokerooo7_seven_obj, std_seven_obj);
  TestMapIntFuncionTen(jokerooo7_eight_obj, std_eight_obj);
  TestMapIntFuncionTen(jokerooo7_nine_obj, std_nine_obj);
  TestMapIntFuncionTen(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(MapIntDoubleTests, Test11) {
  TestMapIntFuncionEleven(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionEleven(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionEleven(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionEleven(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionEleven(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionEleven(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionEleven(jokerooo7_six_obj, std_six_obj);
  TestMapIntFuncionEleven(jokerooo7_seven_obj, std_seven_obj);
  TestMapIntFuncionEleven(jokerooo7_eight_obj, std_eight_obj);
  TestMapIntFuncionEleven(jokerooo7_nine_obj, std_nine_obj);
  TestMapIntFuncionEleven(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(MapIntDoubleTests, Test12) {
  TestMapIntFuncionTwelve(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionTwelve(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionTwelve(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionTwelve(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionTwelve(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionTwelve(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionTwelve(jokerooo7_six_obj, std_six_obj);
  TestMapIntFuncionTwelve(jokerooo7_seven_obj, std_seven_obj);
  TestMapIntFuncionTwelve(jokerooo7_eight_obj, std_eight_obj);
  TestMapIntFuncionTwelve(jokerooo7_nine_obj, std_nine_obj);
  TestMapIntFuncionTwelve(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(MapIntDoubleTests, Test13) {
  TestMapIntFuncionThirteen(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionThirteen(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionThirteen(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionThirteen(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionThirteen(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionThirteen(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionThirteen(jokerooo7_six_obj, std_six_obj);
  TestMapIntFuncionThirteen(jokerooo7_seven_obj, std_seven_obj);
  TestMapIntFuncionThirteen(jokerooo7_eight_obj, std_eight_obj);
  TestMapIntFuncionThirteen(jokerooo7_nine_obj, std_nine_obj);
  TestMapIntFuncionThirteen(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(MapIntDoubleTests, Test14) {
  TestMapIntFuncionFourteen(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionFourteen(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionFourteen(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionFourteen(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionFourteen(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionFourteen(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionFourteen(jokerooo7_six_obj, std_six_obj);
  TestMapIntFuncionFourteen(jokerooo7_seven_obj, std_seven_obj);
  TestMapIntFuncionFourteen(jokerooo7_eight_obj, std_eight_obj);
  TestMapIntFuncionFourteen(jokerooo7_nine_obj, std_nine_obj);
  TestMapIntFuncionFourteen(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(MapIntDoubleTests, Test23) {
  TestMapIntFuncionFifteen(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionFifteen(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionFifteen(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionFifteen(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionFifteen(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionFifteen(jokerooo7_six_obj, std_six_obj);
  TestMapIntFuncionFifteen(jokerooo7_seven_obj, std_seven_obj);
  TestMapIntFuncionFifteen(jokerooo7_eight_obj, std_eight_obj);
  TestMapIntFuncionFifteen(jokerooo7_nine_obj, std_nine_obj);
  TestMapIntFuncionFifteen(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(MapIntDoubleTests, Test24) {
  TestMapIntFuncionSixteen(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionSixteen(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionSixteen(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionSixteen(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionSixteen(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionSixteen(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionSixteen(jokerooo7_six_obj, std_six_obj);
  TestMapIntFuncionSixteen(jokerooo7_seven_obj, std_seven_obj);
  TestMapIntFuncionSixteen(jokerooo7_eight_obj, std_eight_obj);
  TestMapIntFuncionSixteen(jokerooo7_nine_obj, std_nine_obj);
  TestMapIntFuncionSixteen(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(MapIntDoubleTests, Test15) {
  TestMapIntFuncionClear(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionClear(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionClear(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionClear(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionClear(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionClear(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionClear(jokerooo7_six_obj, std_six_obj);
  TestMapIntFuncionClear(jokerooo7_seven_obj, std_seven_obj);
  TestMapIntFuncionClear(jokerooo7_eight_obj, std_eight_obj);
  TestMapIntFuncionClear(jokerooo7_nine_obj, std_nine_obj);
  TestMapIntFuncionClear(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(MapIntDoubleTests, Test16) {
  TestMapIntFunctionSwap(jokerooo7_empty_obj, jokerooo7_first_obj, std_empty_obj,
                         std_first_obj);
  TestMapIntFunctionSwap(jokerooo7_first_obj, jokerooo7_second_obj, std_first_obj,
                         std_second_obj);
  TestMapIntFunctionSwap(jokerooo7_second_obj, jokerooo7_three_obj, std_second_obj,
                         std_three_obj);
  TestMapIntFunctionSwap(jokerooo7_three_obj, jokerooo7_four_obj, std_three_obj,
                         std_four_obj);
  TestMapIntFunctionSwap(jokerooo7_four_obj, jokerooo7_five_obj, std_four_obj,
                         std_five_obj);
  TestMapIntFunctionSwap(jokerooo7_five_obj, jokerooo7_six_obj, std_five_obj, std_six_obj);
  TestMapIntFunctionSwap(jokerooo7_six_obj, jokerooo7_seven_obj, std_six_obj,
                         std_seven_obj);
  TestMapIntFunctionSwap(jokerooo7_seven_obj, jokerooo7_eight_obj, std_seven_obj,
                         std_eight_obj);
  TestMapIntFunctionSwap(jokerooo7_eight_obj, jokerooo7_nine_obj, std_eight_obj,
                         std_nine_obj);
  TestMapIntFunctionSwap(jokerooo7_nine_obj, jokerooo7_ten_obj, std_nine_obj, std_ten_obj);
  TestMapIntFunctionSwap(jokerooo7_ten_obj, jokerooo7_empty_obj, std_ten_obj,
                         std_empty_obj);
}

TEST_F(MapIntDoubleTests, Test17) {
  TestMapIntFunctionMerge(jokerooo7_empty_obj, jokerooo7_first_obj);
  TestMapIntFunctionMerge(jokerooo7_first_obj, jokerooo7_second_obj);
  TestMapIntFunctionMerge(jokerooo7_second_obj, jokerooo7_three_obj);
  TestMapIntFunctionMerge(jokerooo7_three_obj, jokerooo7_four_obj);
  TestMapIntFunctionMerge(jokerooo7_four_obj, jokerooo7_five_obj);
  TestMapIntFunctionMerge(jokerooo7_five_obj, jokerooo7_six_obj);
  TestMapIntFunctionMerge(jokerooo7_six_obj, jokerooo7_seven_obj);
  TestMapIntFunctionMerge(jokerooo7_seven_obj, jokerooo7_eight_obj);
  TestMapIntFunctionMerge(jokerooo7_eight_obj, jokerooo7_nine_obj);
  TestMapIntFunctionMerge(jokerooo7_nine_obj, jokerooo7_ten_obj);
  TestMapIntFunctionMerge(jokerooo7_ten_obj, jokerooo7_empty_obj);
}

TEST_F(MapIntDoubleTests, Test18) {
  TestMapIntFunctionAt(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFunctionAt(jokerooo7_first_obj, std_first_obj);
  TestMapIntFunctionAt(jokerooo7_second_obj, std_second_obj);
  TestMapIntFunctionAt(jokerooo7_three_obj, std_three_obj);
  TestMapIntFunctionAt(jokerooo7_four_obj, std_four_obj);
  TestMapIntFunctionAt(jokerooo7_five_obj, std_five_obj);
  TestMapIntFunctionAt(jokerooo7_six_obj, std_six_obj);
  TestMapIntFunctionAt(jokerooo7_seven_obj, std_seven_obj);
  TestMapIntFunctionAt(jokerooo7_eight_obj, std_eight_obj);
  TestMapIntFunctionAt(jokerooo7_nine_obj, std_nine_obj);
  TestMapIntFunctionAt(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(MapIntDoubleTests, Test19) {
  TestMapIntFunctionAtTwo(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFunctionAtTwo(jokerooo7_first_obj, std_first_obj);
  TestMapIntFunctionAtTwo(jokerooo7_second_obj, std_second_obj);
  TestMapIntFunctionAtTwo(jokerooo7_three_obj, std_three_obj);
  TestMapIntFunctionAtTwo(jokerooo7_four_obj, std_four_obj);
  TestMapIntFunctionAtTwo(jokerooo7_five_obj, std_five_obj);
  TestMapIntFunctionAtTwo(jokerooo7_six_obj, std_six_obj);
  TestMapIntFunctionAtTwo(jokerooo7_seven_obj, std_seven_obj);
  TestMapIntFunctionAtTwo(jokerooo7_eight_obj, std_eight_obj);
  TestMapIntFunctionAtTwo(jokerooo7_nine_obj, std_nine_obj);
  TestMapIntFunctionAtTwo(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(MapIntDoubleTests, Test21) {
  TestMapIntFunctionConstIter(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFunctionConstIter(jokerooo7_first_obj, std_first_obj);
  TestMapIntFunctionConstIter(jokerooo7_second_obj, std_second_obj);
  TestMapIntFunctionConstIter(jokerooo7_three_obj, std_three_obj);
  TestMapIntFunctionConstIter(jokerooo7_four_obj, std_four_obj);
  TestMapIntFunctionConstIter(jokerooo7_five_obj, std_five_obj);
  TestMapIntFunctionConstIter(jokerooo7_six_obj, std_six_obj);
  TestMapIntFunctionConstIter(jokerooo7_seven_obj, std_seven_obj);
  TestMapIntFunctionConstIter(jokerooo7_eight_obj, std_eight_obj);
  TestMapIntFunctionConstIter(jokerooo7_nine_obj, std_nine_obj);
  TestMapIntFunctionConstIter(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(MapIntDoubleTests, Test22) {
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

TEST_F(MapIntDoubleTests, Test25) {
  TestMapIntOperatorElement(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntOperatorElement(jokerooo7_first_obj, std_first_obj);
  TestMapIntOperatorElement(jokerooo7_second_obj, std_second_obj);
  TestMapIntOperatorElement(jokerooo7_three_obj, std_three_obj);
  TestMapIntOperatorElement(jokerooo7_four_obj, std_four_obj);
  TestMapIntOperatorElement(jokerooo7_five_obj, std_five_obj);
  TestMapIntOperatorElement(jokerooo7_six_obj, std_six_obj);
  TestMapIntOperatorElement(jokerooo7_seven_obj, std_seven_obj);
  TestMapIntOperatorElement(jokerooo7_eight_obj, std_eight_obj);
  TestMapIntOperatorElement(jokerooo7_nine_obj, std_nine_obj);
  TestMapIntOperatorElement(jokerooo7_ten_obj, std_ten_obj);
}

TEST_F(MapDoubleBoolTests, Test1) {
  TestMapIntFuncionOne(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionOne(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionOne(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionOne(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionOne(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionOne(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionOne(jokerooo7_six_obj, std_six_obj);
}

TEST_F(MapDoubleBoolTests, Test2) {
  TestMapIntFuncionTwo(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionTwo(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionTwo(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionTwo(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionTwo(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionTwo(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionTwo(jokerooo7_six_obj, std_six_obj);
}

TEST_F(MapDoubleBoolTests, Test3) {
  TestMapIntFuncionThree(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionThree(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionThree(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionThree(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionThree(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionThree(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionThree(jokerooo7_six_obj, std_six_obj);
}

TEST_F(MapDoubleBoolTests, Test4) {
  TestMapIntFuncionFour(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionFour(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionFour(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionFour(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionFour(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionFour(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionFour(jokerooo7_six_obj, std_six_obj);
}

TEST_F(MapDoubleBoolTests, Test5) {
  TestMapIntFuncionFive(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionFive(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionFive(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionFive(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionFive(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionFive(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionFive(jokerooo7_six_obj, std_six_obj);
}

TEST_F(MapDoubleBoolTests, Test6) {
  TestMapIntFuncionSix(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionSix(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionSix(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionSix(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionSix(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionSix(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionSix(jokerooo7_six_obj, std_six_obj);
}

TEST_F(MapDoubleBoolTests, Test7) {
  TestMapIntFuncionSeven(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionSeven(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionSeven(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionSeven(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionSeven(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionSeven(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionSeven(jokerooo7_six_obj, std_six_obj);
}

TEST_F(MapDoubleBoolTests, Test8) {
  TestMapIntFuncionEight(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionEight(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionEight(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionEight(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionEight(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionEight(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionEight(jokerooo7_six_obj, std_six_obj);
}

TEST_F(MapDoubleBoolTests, Test9) {
  TestMapIntFuncionNine(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionNine(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionNine(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionNine(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionNine(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionNine(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionNine(jokerooo7_six_obj, std_six_obj);
}

TEST_F(MapDoubleBoolTests, Test10) {
  TestMapIntFuncionTen(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionTen(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionTen(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionTen(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionTen(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionTen(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionTen(jokerooo7_six_obj, std_six_obj);
}

TEST_F(MapDoubleBoolTests, Test11) {
  TestMapIntFuncionEleven(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionEleven(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionEleven(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionEleven(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionEleven(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionEleven(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionEleven(jokerooo7_six_obj, std_six_obj);
}

TEST_F(MapDoubleBoolTests, Test12) {
  TestMapIntFuncionTwelve(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionTwelve(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionTwelve(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionTwelve(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionTwelve(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionTwelve(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionTwelve(jokerooo7_six_obj, std_six_obj);
}

TEST_F(MapDoubleBoolTests, Test13) {
  TestMapIntFuncionThirteen(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionThirteen(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionThirteen(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionThirteen(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionThirteen(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionThirteen(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionThirteen(jokerooo7_six_obj, std_six_obj);
}

TEST_F(MapDoubleBoolTests, Test14) {
  TestMapIntFuncionFourteen(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionFourteen(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionFourteen(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionFourteen(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionFourteen(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionFourteen(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionFourteen(jokerooo7_six_obj, std_six_obj);
}

TEST_F(MapDoubleBoolTests, Test15) {
  TestMapIntFuncionClear(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionClear(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionClear(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionClear(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionClear(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionClear(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionClear(jokerooo7_six_obj, std_six_obj);
}

TEST_F(MapDoubleBoolTests, Test16) {
  TestMapIntFunctionSwap(jokerooo7_empty_obj, jokerooo7_first_obj, std_empty_obj,
                         std_first_obj);
  TestMapIntFunctionSwap(jokerooo7_first_obj, jokerooo7_second_obj, std_first_obj,
                         std_second_obj);
  TestMapIntFunctionSwap(jokerooo7_second_obj, jokerooo7_three_obj, std_second_obj,
                         std_three_obj);
  TestMapIntFunctionSwap(jokerooo7_three_obj, jokerooo7_four_obj, std_three_obj,
                         std_four_obj);
  TestMapIntFunctionSwap(jokerooo7_four_obj, jokerooo7_five_obj, std_four_obj,
                         std_five_obj);
  TestMapIntFunctionSwap(jokerooo7_five_obj, jokerooo7_six_obj, std_five_obj, std_six_obj);
}

TEST_F(MapDoubleBoolTests, Test17) {
  TestMapIntFunctionMerge(jokerooo7_empty_obj, jokerooo7_first_obj);
  TestMapIntFunctionMerge(jokerooo7_first_obj, jokerooo7_second_obj);
  TestMapIntFunctionMerge(jokerooo7_second_obj, jokerooo7_three_obj);
  TestMapIntFunctionMerge(jokerooo7_three_obj, jokerooo7_four_obj);
  TestMapIntFunctionMerge(jokerooo7_four_obj, jokerooo7_five_obj);
  TestMapIntFunctionMerge(jokerooo7_five_obj, jokerooo7_six_obj);
}

TEST_F(MapDoubleBoolTests, Test18) {
  TestMapIntFunctionAt(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFunctionAt(jokerooo7_first_obj, std_first_obj);
  TestMapIntFunctionAt(jokerooo7_second_obj, std_second_obj);
  TestMapIntFunctionAt(jokerooo7_three_obj, std_three_obj);
  TestMapIntFunctionAt(jokerooo7_four_obj, std_four_obj);
  TestMapIntFunctionAt(jokerooo7_five_obj, std_five_obj);
  TestMapIntFunctionAt(jokerooo7_six_obj, std_six_obj);
}

TEST_F(MapDoubleBoolTests, Test19) {
  TestMapIntFunctionAtTwo(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFunctionAtTwo(jokerooo7_first_obj, std_first_obj);
  TestMapIntFunctionAtTwo(jokerooo7_second_obj, std_second_obj);
  TestMapIntFunctionAtTwo(jokerooo7_three_obj, std_three_obj);
  TestMapIntFunctionAtTwo(jokerooo7_four_obj, std_four_obj);
  TestMapIntFunctionAtTwo(jokerooo7_five_obj, std_five_obj);
  TestMapIntFunctionAtTwo(jokerooo7_six_obj, std_six_obj);
}

TEST_F(MapDoubleBoolTests, Test21) {
  TestMapIntFunctionConstIter(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFunctionConstIter(jokerooo7_first_obj, std_first_obj);
  TestMapIntFunctionConstIter(jokerooo7_second_obj, std_second_obj);
  TestMapIntFunctionConstIter(jokerooo7_three_obj, std_three_obj);
  TestMapIntFunctionConstIter(jokerooo7_four_obj, std_four_obj);
  TestMapIntFunctionConstIter(jokerooo7_five_obj, std_five_obj);
  TestMapIntFunctionConstIter(jokerooo7_six_obj, std_six_obj);
}

TEST_F(MapDoubleBoolTests, Test22) {
  EXPECT_EQ(jokerooo7_empty_obj.contains(-12), false);
  EXPECT_EQ(jokerooo7_first_obj.contains(-1), false);
  EXPECT_NEAR(jokerooo7_second_obj.contains(0.0002), true, 1e-9);
  EXPECT_EQ(jokerooo7_three_obj.contains(4), false);
  EXPECT_EQ(jokerooo7_four_obj.contains(-12), false);
  EXPECT_EQ(jokerooo7_five_obj.contains(-12), false);
  EXPECT_NEAR(jokerooo7_six_obj.contains(0.09999999999999), true, 1e-9);
}

TEST_F(MapStringBoolTests, Test1) {
  TestMapIntFuncionOne(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionOne(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionOne(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionOne(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionOne(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionOne(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionOne(jokerooo7_six_obj, std_six_obj);
  TestMapIntFuncionOne(jokerooo7_seven_obj, std_seven_obj);
}

TEST_F(MapStringBoolTests, Test2) {
  TestMapIntFuncionTwo(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionTwo(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionTwo(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionTwo(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionTwo(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionTwo(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionTwo(jokerooo7_six_obj, std_six_obj);
  TestMapIntFuncionTwo(jokerooo7_seven_obj, std_seven_obj);
}

TEST_F(MapStringBoolTests, Test3) {
  TestMapIntFuncionThree(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionThree(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionThree(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionThree(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionThree(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionThree(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionThree(jokerooo7_six_obj, std_six_obj);
  TestMapIntFuncionThree(jokerooo7_seven_obj, std_seven_obj);
}

TEST_F(MapStringBoolTests, Test9) {
  TestMapIntFuncionNine(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionNine(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionNine(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionNine(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionNine(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionNine(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionNine(jokerooo7_six_obj, std_six_obj);
  TestMapIntFuncionNine(jokerooo7_seven_obj, std_seven_obj);
}

TEST_F(MapStringBoolTests, Test10) {
  TestMapIntFuncionTen(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionTen(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionTen(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionTen(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionTen(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionTen(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionTen(jokerooo7_six_obj, std_six_obj);
  TestMapIntFuncionTen(jokerooo7_seven_obj, std_seven_obj);
}

TEST_F(MapStringBoolTests, Test11) {
  TestMapIntFuncionEleven(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionEleven(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionEleven(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionEleven(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionEleven(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionEleven(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionEleven(jokerooo7_six_obj, std_six_obj);
  TestMapIntFuncionEleven(jokerooo7_seven_obj, std_seven_obj);
}

TEST_F(MapStringBoolTests, Test12) {
  TestMapIntFuncionTwelve(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionTwelve(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionTwelve(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionTwelve(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionTwelve(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionTwelve(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionTwelve(jokerooo7_six_obj, std_six_obj);
  TestMapIntFuncionTwelve(jokerooo7_seven_obj, std_seven_obj);
}

TEST_F(MapStringBoolTests, Test13) {
  TestMapIntFuncionThirteen(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionThirteen(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionThirteen(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionThirteen(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionThirteen(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionThirteen(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionThirteen(jokerooo7_six_obj, std_six_obj);
  TestMapIntFuncionThirteen(jokerooo7_seven_obj, std_seven_obj);
}

TEST_F(MapStringBoolTests, Test14) {
  TestMapIntFuncionFourteen(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionFourteen(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionFourteen(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionFourteen(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionFourteen(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionFourteen(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionFourteen(jokerooo7_six_obj, std_six_obj);
  TestMapIntFuncionFourteen(jokerooo7_seven_obj, std_seven_obj);
}

TEST_F(MapStringBoolTests, Test15) {
  TestMapIntFuncionClear(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFuncionClear(jokerooo7_first_obj, std_first_obj);
  TestMapIntFuncionClear(jokerooo7_second_obj, std_second_obj);
  TestMapIntFuncionClear(jokerooo7_three_obj, std_three_obj);
  TestMapIntFuncionClear(jokerooo7_four_obj, std_four_obj);
  TestMapIntFuncionClear(jokerooo7_five_obj, std_five_obj);
  TestMapIntFuncionClear(jokerooo7_six_obj, std_six_obj);
  TestMapIntFuncionClear(jokerooo7_seven_obj, std_seven_obj);
}

TEST_F(MapStringBoolTests, Test16) {
  TestMapIntFunctionSwap(jokerooo7_empty_obj, jokerooo7_first_obj, std_empty_obj,
                         std_first_obj);
  TestMapIntFunctionSwap(jokerooo7_first_obj, jokerooo7_second_obj, std_first_obj,
                         std_second_obj);
  TestMapIntFunctionSwap(jokerooo7_second_obj, jokerooo7_three_obj, std_second_obj,
                         std_three_obj);
  TestMapIntFunctionSwap(jokerooo7_three_obj, jokerooo7_four_obj, std_three_obj,
                         std_four_obj);
  TestMapIntFunctionSwap(jokerooo7_four_obj, jokerooo7_five_obj, std_four_obj,
                         std_five_obj);
  TestMapIntFunctionSwap(jokerooo7_five_obj, jokerooo7_six_obj, std_five_obj, std_six_obj);
  TestMapIntFunctionSwap(jokerooo7_seven_obj, jokerooo7_empty_obj, std_seven_obj,
                         std_empty_obj);
}

TEST_F(MapStringBoolTests, Test17) {
  TestMapIntFunctionMerge(jokerooo7_empty_obj, jokerooo7_first_obj);
  TestMapIntFunctionMerge(jokerooo7_first_obj, jokerooo7_second_obj);
  TestMapIntFunctionMerge(jokerooo7_second_obj, jokerooo7_three_obj);
  TestMapIntFunctionMerge(jokerooo7_three_obj, jokerooo7_four_obj);
  TestMapIntFunctionMerge(jokerooo7_four_obj, jokerooo7_five_obj);
  TestMapIntFunctionMerge(jokerooo7_five_obj, jokerooo7_six_obj);
  TestMapIntFunctionMerge(jokerooo7_seven_obj, jokerooo7_empty_obj);
}

TEST_F(MapStringBoolTests, Test18) {
  TestMapStringFunctionAt(jokerooo7_empty_obj, std_empty_obj);
  TestMapStringFunctionAt(jokerooo7_first_obj, std_first_obj);
  TestMapStringFunctionAt(jokerooo7_second_obj, std_second_obj);
  TestMapStringFunctionAt(jokerooo7_three_obj, std_three_obj);
  TestMapStringFunctionAt(jokerooo7_four_obj, std_four_obj);
  TestMapStringFunctionAt(jokerooo7_five_obj, std_five_obj);
  TestMapStringFunctionAt(jokerooo7_six_obj, std_six_obj);
  TestMapStringFunctionAt(jokerooo7_seven_obj, std_seven_obj);
}

TEST_F(MapStringBoolTests, Test19) {
  TestMapIntFunctionAtTwo(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFunctionAtTwo(jokerooo7_first_obj, std_first_obj);
  TestMapIntFunctionAtTwo(jokerooo7_second_obj, std_second_obj);
  TestMapIntFunctionAtTwo(jokerooo7_three_obj, std_three_obj);
  TestMapIntFunctionAtTwo(jokerooo7_four_obj, std_four_obj);
  TestMapIntFunctionAtTwo(jokerooo7_five_obj, std_five_obj);
  TestMapIntFunctionAtTwo(jokerooo7_six_obj, std_six_obj);
  TestMapIntFunctionAtTwo(jokerooo7_seven_obj, std_seven_obj);
}

// TEST_F(MapStringBoolTests, Test20) {
//     TestMapIntFunctionMaxSize(jokerooo7_empty_obj, std_empty_obj);
//     TestMapIntFunctionMaxSize(jokerooo7_first_obj, std_first_obj);
//     TestMapIntFunctionMaxSize(jokerooo7_second_obj, std_second_obj);
//     TestMapIntFunctionMaxSize(jokerooo7_three_obj, std_three_obj);
//     TestMapIntFunctionMaxSize(jokerooo7_four_obj, std_four_obj);
//     TestMapIntFunctionMaxSize(jokerooo7_five_obj, std_five_obj);
//     TestMapIntFunctionMaxSize(jokerooo7_six_obj, std_six_obj);
// }

TEST_F(MapStringBoolTests, Test21) {
  TestMapIntFunctionConstIter(jokerooo7_empty_obj, std_empty_obj);
  TestMapIntFunctionConstIter(jokerooo7_first_obj, std_first_obj);
  TestMapIntFunctionConstIter(jokerooo7_second_obj, std_second_obj);
  TestMapIntFunctionConstIter(jokerooo7_three_obj, std_three_obj);
  TestMapIntFunctionConstIter(jokerooo7_four_obj, std_four_obj);
  TestMapIntFunctionConstIter(jokerooo7_five_obj, std_five_obj);
  TestMapIntFunctionConstIter(jokerooo7_six_obj, std_six_obj);
  TestMapIntFunctionConstIter(jokerooo7_seven_obj, std_seven_obj);
}

TEST_F(MapStringBoolTests, Test22) {
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

TEST_F(MapStringBoolTests, Test23) {
  TestMapStringFunctionEmplace(jokerooo7_empty_obj, std_empty_obj);
  TestMapStringFunctionEmplace(jokerooo7_first_obj, std_first_obj);
  TestMapStringFunctionEmplace(jokerooo7_second_obj, std_second_obj);
  TestMapStringFunctionEmplace(jokerooo7_three_obj, std_three_obj);
  TestMapStringFunctionEmplace(jokerooo7_four_obj, std_four_obj);
  TestMapStringFunctionEmplace(jokerooo7_five_obj, std_five_obj);
  TestMapStringFunctionEmplace(jokerooo7_six_obj, std_six_obj);
  TestMapStringFunctionEmplace(jokerooo7_seven_obj, std_seven_obj);
}

// int main(int argc, char** argv) {
//     testing::InitGoogleTest(&argc, argv);
//     return RUN_ALL_TESTS();
// }
