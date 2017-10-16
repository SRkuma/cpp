# Add the following funtion to your .bashrc
# function cppdir {
#     cpp_path=~/Workspace/Competitive-Programming/CPP_templates;
#     mkdir "$1" && cp $cpp_path/inputs.txt "$1"/ \
#                && cp $cpp_path/main.cpp "$1"/ \
#                && cp $cpp_path/Makefile "$1"/Makefile \
#                && cp $cpp_path/test.sh "$1"/test.sh
# }
# export -f cppdir
all: a.out test

a.out: main.cpp
	g++ -std=c++11 -Wall -g3  -D_GLIBCXX_DEBUG main.cpp -o a.out

test:
	sh test.sh

.PHONY: clean
clean:
	rm -f a.out
	rm -f input-*.txt
