INCLUDES=-I includes/
CXXFLAGS=-std=c++20 -stdlib=libc++ -lc++abi -g -O0 -Wall -Wextra -Werror -pedantic $(INCLUDES)
CXX=clang++

tests: bin/tests.out
	- $<

exec: bin/main.out
	$<

clean:
	rm -f bin/*

bin/main.out: src/main.cc src/factorial.cc
	$(CXX) $(CXXFLAGS) $^ -o $@

bin/tests.out: tests/tests.cc src/factorial.cc
	$(CXX) $(CXXFLAGS) $^ -o $@

src/%.cc: includes/%.hpp
	touch $@

.DEFAULT_GOAL := exec
.PHONY: clean exec