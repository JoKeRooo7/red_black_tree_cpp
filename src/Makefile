GCC = gcc -Wall -Werror -Wextra -std=c++17 -g
GTF = -lstdc++ -lgtest -lgtest_main 
GCOVF = -fprofile-arcs -ftest-coverage
LF = -lrt -lm -lsubunit -lpthread


OS := $(shell uname)
ifeq ($(OS), Linux)
	LIB = $(GTF) $(LF)
else
	LIB = $(GTF)
endif

all: clean test

test:
	$(GCC) ../tests/*.cc -o res_test $(LIB) -I.
	./res_test

test_set:
	$(GCC) ../tests/set_test.cc -o res_set_test  $(LIB) -I.
	./res_set_test

test_map:
	$(GCC) ../tests/map_test.cc -o res_map_test $(LIB) -I.
	./res_map_test

test_multiset:
	$(GCC) ../tests/multiset_test.cc -o res_multiset_test  $(LIB) -I.
	./res_multiset_test

gcov_report:
	$(GCC) $(GCOVF) ../tests/*.cc -o res_test $(LIB) -I.
	./res_test
	gcov *.cc
	lcov --capture --directory . --output-file test.info #--ignore-errors mismatch
	genhtml test.info --output-directory report
	open report/index.html

clang_format:
	cp ../materials/linters/.clang-format ../src
	clang-format -n headers/*.h patterns/*.tpp tests/*.cc
	clang-format -i headers/*.h patterns/*.tpp tests/*.cc

clang-format: clang_format

clean: 
	rm -rf *.a *.out *.o *.gcno *.gcda *.info *.dSYM *report *.txt
	rm -rf res_test  res_set_test res_map_test res_multiset_test .clang_format

clear: clean

valgrind: test
	CK_FORK=no valgrind --vgdb=no --leak-check=full --show-leak-kinds=all --track-origins=yes --verbose --log-file=RESULT_VALGRIND.txt ./res_test

leaks: test
	leaks -atExit -- ./res_test

rebuild: all
