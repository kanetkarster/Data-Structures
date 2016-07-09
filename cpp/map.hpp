#include <iostream>
#include <vector>

template<class K, class V> class HashMap {
    private:
        int size;
        std::vector<K>* keys;
        std::vector<V>* vals;
    public:
        HashMap<K, V>(int size) {
            this->size = size;
            keys = new std::vector<K>[size];
            vals = new std::vector<V>[size];
        }
        
        void add(K key, V val) {
            int which = get_hash(key) % size;
            keys[which].push_back(key);
            vals[which].push_back(val);
        }

        V find(K key) {
            int which = get_hash(key) % size;

            int i = 0;
            for (K it : keys[which]) {
                std::cout << it << std::endl;
                if (it == key) {
                    return vals[which][i];
                }
                i++;
            }

            return V();
        }
};

