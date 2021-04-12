#pragma once
#include <map>
#include <memory>

using namespace std;

class Cache_err : exception {};
class DuplicateKeyException : Cache_err {};
class ObjectNotExistException : Cache_err {};


template<class K , class V>
class ChacheMemory
{
private:
    map<K, shared_ptr> _shared;
    map<V, weak_ptr> _cache;
public:
    ChacheMemory() {};
    ~ChacheMemory() {};

    void add(const K& key, const V& value);
    void erase(const K& key);
    shared_ptr<V> get(const K &key);
};
template<class K , class V>
void ChacheMemory<K,V>::add(const K& key, const V& value) 
{
    if(_shared.find(key) == _shared.end)
    {
        _shared[key] = value;
    } else {

        throw DuplicateKeyException();
    }

}

template<class K , class V>
void ChacheMemory<K,V>::erase(const K& key) 
{
    if(_shared.find(key) == _shared.end)
    {
        throw ObjectNotExistException();
    } else {

        _shared.erase(_shared.find(key));
    }
}

template<class K , class V>
shared_ptr<V> ChacheMemory<K,V>::get(const K &key) 
{
    if(_cache.end != _cache.find(key))
    {
        if (_cache[key].expired())
        {
            _cache.erase(key);
			return nullptr;
        } else {
            return _shared[key];
        }
    } else {

        if(_shared.end() !=_shared.find(key))
        {
            cache[key] = weak_ptr<V>(_shared[key]);
		    return _shared[key];
        } else {
            return nullptr;
        }
    }
}
