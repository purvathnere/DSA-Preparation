#include<iostream>
using namespace std;

class TrieNode {
public:
    char data;
    TrieNode* children[26];
    bool isterminal;

    TrieNode(char ch) {
        data = ch;
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        isterminal = false;
    }
};

class Trie {
public:
    TrieNode* root;

    Trie() {
        root = new TrieNode('\0');
    }

    void insertutil(TrieNode* root, string word) {
        if (word.length() == 0) {
            root->isterminal = true;
            return;
        }
        int index = word[0] - 'A';
        TrieNode* child;
        if (root->children[index] != NULL) {
            child = root->children[index];
        }
        else {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }
        insertutil(child, word.substr(1));
    }

    void insertword(string word) {
        insertutil(root, word);
    }

    bool searchutil(TrieNode* root, string word) {
        if (word.length() == 0) {
            root->isterminal = true;
            return true;  // Corrected to return true when the word is found
        }
        int index = word[0] - 'A';
        TrieNode* child;
        if (root->children[index] != NULL) {
            child = root->children[index];
        }
        else {
            return false;
        }
        return searchutil(child, word.substr(1));
    }

    bool search(string word) {
        return searchutil(root, word);
    }
};

int main() {
    Trie* t = new Trie();
    t->insertword("ARM");
    t->insertword("DO");
    t->insertword("TIME");
    cout << "Present or not: " << t->search("ARMf") << endl;
    return 0;
}

