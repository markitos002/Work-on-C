/********************************************************
 * words -- scan a file and print out a list of words   *
 *              in ASCII order.                         *
 *                                                      *
 * Usage:                                               *
 *      words <file>                                    *
 ********************************************************/
#include <iostream.h>
#include <fstream.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

class tree {
    private:
	// The basic node of a tree
	class node {
	    private:
		node    *right;      // tree to the right 
		node    *left;       // tree to the left 
	    public:
		char    *word;       // word for this tree 

	    friend class tree;	    
	};

	// the top of the tree 
	node *root;

	// Enter a new node into a tree or sub-tree
	void enter_one(node *&node, char *word);

	// Print a single node
	void print_one(node *top);
    public:
	tree(void) { root = NULL;}

	// Add a new word to our tree
        void enter(char *word) {
	    enter_one(root, word);
	}

	// Print the tree
	void print(void) {
	    print_one(root);
	}
};

static tree words;	// List of words we are looking for
	
/********************************************************
 * scan -- scan the file for words                      *
 *                                                      *
 * Parameters                                           *
 *      name -- name of the file to scan                *
 ********************************************************/
void scan(char *name)
{
    char word[100];     // word we are working on 
    int  index;         // index into the word 
    int  ch;            // current character 
    ifstream in_file;   // input file 

    in_file.open(name, ios::in);
    if (in_file.bad()) {
        cerr << "Error:Unable to open " << name << '\n';
        exit(8);
    }
    while (1) {
        // scan past the whitespace 
        while (1) {
            ch = in_file.get();

            if (isalpha(ch) || (ch == EOF))
                break;
        }

        if (ch == EOF)
            break;

        word[0] = ch;
        for (index = 1; index < sizeof(word); ++index) {
            ch = in_file.get();
            if (!isalpha(ch))
                break;
            word[index] = ch;
        }
        // put a null on the end 
        word[index] = '\0';

        words.enter(word);
    }
}


main(int argc, char *argv[])
{
    if (argc != 2) {
        cerr <<  "Error:Wrong number of parameters\n";
        cerr <<  "      on the command line\n";
        cerr <<  "Usage is:\n";
        cerr <<  "    words 'file'\n";
        exit(8);
    }
    scan(argv[1]);
    words.print();
    return (0);
}

/********************************************************
 * tree::enter_one -- enter a word into the tree        *
 *                                                      *
 * Parameters                                           *
 *      new_node -- current node we are looking at      *
 *      word -- word to enter                           *
 ********************************************************/
void tree::enter_one(node *&new_node, char *word)
{
    int  result;        // result of strcmp 

    // see if we have reached the end 
    if (new_node == NULL) {
        new_node = new node;

        new_node->left = NULL;
        new_node->right = NULL;
        new_node->word = strdup(word);
    }
    result = strcmp(new_node->word, word);
    if (result == 0)
        return;

    if (result < 0)
        enter_one(new_node->right, word);
    else
        enter_one(new_node->left, word);
}

/********************************************************
 * tree::print_one -- print out the words in a tree    	*
 *                                                      *
 * Parameters                                           *
 *      top -- the root of the tree to print            *
 ********************************************************/
void tree::print_one(node *top)
{
    if (top == NULL)
        return;                 // short tree 

    print_one(top->left);
    cout << top->word << '\n';
    print_one(top->right);
}
