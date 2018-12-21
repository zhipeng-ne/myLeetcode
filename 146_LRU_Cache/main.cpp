#include <iostream>
#include <list>
#include <utility>
#include <unordered_map>
using namespace std;
class LRUCache
{
public:
        LRUCache(int capacity):m_capacity(capacity)
        {
        }

        int get(int key)
        {
                auto iter = lruMap.find(key);
                if (iter != lruMap.end())
                {
                        lruList.splice(lruList.begin(),lruList,iter->second);
                        return iter->second->second;
                }
                return -1;
        }

        void put(int key, int value)
        {
                auto iter = lruMap.find(key);
                if(iter!=lruMap.end())
                {
                        lruList.splice(lruList.begin(),lruList,iter->second);
                        iter->second->second = value;
                        return;
                }
                if (lruMap.size() >= m_capacity)
                {
                        int k = lruList.back().first;
                        lruList.pop_back();
                        lruMap.erase(k);
                }
                lruList.push_front({key, value});
                lruMap.insert({key, lruList.begin()});
        }
private:
        list<pair<int, int>> lruList;
        unordered_map<int, list<pair<int, int>>::iterator> lruMap;
        int m_capacity;
};
int main()
{
        LRUCache *obj=new LRUCache(2);
        obj->put(2,1);
        obj->put(1,1);
        cout<<obj->get(2)<<endl;;
        obj->put(4,1);
        cout<<obj->get(1)<<endl;;
        cout<<obj->get(2)<<endl;;
        return 0;
}
