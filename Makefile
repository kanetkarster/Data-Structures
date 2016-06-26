all: tree list map trie

tree: tree.cpp tree.hpp
	g++ tree.cpp -o tree -g

trie: trie.cpp trie.hpp
	g++ trie.cpp -o trie -g

list: list.cpp list.hpp
	g++ list.cpp -o list -g

map: map.cpp map.hpp
	g++ map.cpp -o map -g

run: tree list
	./list
	./tree

clean:
	-rm ./list ./tree ./map ./trie

