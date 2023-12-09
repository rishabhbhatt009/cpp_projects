#ifndef TEMPLATE_H
#define TEMPLATE_H

template <typename K, typename V>
class my_dict {
private :
    K key;
    V value;
public: 
    my_dict(K key, V value);
    V get_val() const;
    K get_key() const;
};

#endif

template<typename K, typename V>
V my_dict<K,V>::get_val() const{
    return this->value;
}

template<typename K, typename V>
K my_dict<K,V>::get_key() const{
    return this->key;
}

template <typename K, typename V>
my_dict<K, V>::my_dict(K key, V value){
    this->key=key;
    this->value=value;
}
