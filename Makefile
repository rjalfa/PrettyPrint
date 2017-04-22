CXXFLAGS=-g -Wall -Wextra -pedantic -std=c++14 -Wshadow -Wformat=2 -Wfloat-equal -Wconversion -Wlogical-op -Wcast-qual -Wcast-align -D_GLIBCXX_DEBUG -D_GLIBCXX_DEBUG_PEDANTIC -D_FORTIFY_SOURCE=2 -fsanitize=address -fsanitize=undefined -fno-sanitize-recover -fstack-protector

all: libpretty_print.a test

lib: libpretty_print.a

libpretty_print.a: pretty_print.o
	ar rcs $@ $^
	ranlib $@
	rm $^

test: libpretty_print.a
	$(CXX) $(CXXFLAGS) -o $@ $@.cpp -L. -lpretty_print

clean:
	@rm test
	@rm libpretty_print.a

.PHONY: all clean lib