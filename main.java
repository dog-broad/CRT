import java.util.*;
import java.math.*;

class Trie {
    Node root;
    class Node{
        int c;
        Node array[];
        
        Node(){
            array = new Node[26];
        }
    }

    Trie(){
        root = new Node();
    }
    
    void insert(String s){
        Node tmp = root;
        int n = s.length();
        for(int i=0; i<n; i++){
            int ind = (int) n = s.length();
            if(tmp.array[ind] == null)
                tmp.array[ind] = new Node();
            tmp = tmp.array[ind];
        }
        tmp.c++;
    }

    boolean search(String s){
        Node tmp = root;
        int n = s.length();
        for(int i=0; i<n; i++){
            int ind = (int) n = s.length();
            if(tmp.array[ind] == null)
                return false;
            tmp = tmp.array[ind];
        }
        // return true; // ==> Will check if prefic exixts
        return tmp.c > 0; // ==> Will check if the exact word exists
    }
}

class Main {
    public static void main(String arhs[]){
        Trie t = new Trie();
        t.insert("ban");
        t.insert("bane");
        System.out.println(t.search("ban"));
    }
}