//实现一个 Trie (前缀树)，包含 insert, search, 和 startsWith 这三个操作。
class Trie {
private:
    bool end;
    Trie* next[26];
public:
    /** Initialize your data structure here. */
    Trie() {
        end = false;
        for(int i = 0; i < 26; ++i)
        {
            next[i] = nullptr;
        }
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        Trie* node = this;
        for (char c : word) {
            if (node->next[c-'a'] == nullptr) 
            {
                node->next[c-'a'] = new Trie();
            }
            node = node->next[c-'a'];
        }
        node->end = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        Trie* node = this;
        for (char c : word) {
            node = node->next[c - 'a'];
            if (node == nullptr) 
            {
                return false;
            }
        }
        return node->end;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Trie* node = this;
        for (char c : prefix)
        {
            node = node->next[c-'a'];
            if (node == nullptr) 
            {
                return false;
            }
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
