/********************************************************
 * token -- token handling module			*
 *							*
 * Functions:						*
 *	next_token -- get the next token from the input	*
 ********************************************************/

/*
 * A list of tokens
 *	Note, how this list is used depends on defining the macro T.
 *	This macro is used for defining the tokens types themselves
 *	as well as the string version of the tokens.
 */
#define TOKEN_LIST \
   T(T_NUMBER),		/* Simple number (floating point or integer) */	\
   T(T_STRING),		/* String or character constant */ 		\
   T(T_COMMENT),	/* Comment */					\
   T(T_NEWLINE),	/* Newline character */				\
   T(T_OPERATOR),	/* Arithmetic operator */			\
   T(T_L_PAREN),	/* Character "(" */				\
   T(T_R_PAREN),	/* Character ")" */				\
   T(T_L_CURLY),	/* Character "{" */				\
   T(T_R_CURLY),	/* Character "}" */				\
   T(T_ID),		/* Identifier */				\
   T(T_EOF)		/* End of File */

/*
 * Define the enumerated list of tokens.  
 *	This makes use of a trick using the T macro
 *	and our TOKEN_LIST
 */
#define T(x) x		// Define T() as the name
enum TOKEN_TYPE {
   TOKEN_LIST
};
#undef T		// Remove old temporary macro

// A list of the names of the tokens
extern const char *const TOKEN_NAMES[];

const int LINE_MAX = 500;	// Longest possible line

/********************************************************
 * input_file -- data from the input file		*
 *							*
 * The current two characters are store in 		*
 *	cur_char and next_char				*
 *							*
 * The member function read_char moves eveyone up 	*
 * one character.					*
 *							*
 * The line is buffered and output everytime a newline	*
 * is passed.						*
 ********************************************************/
class input_file: public ifstream {
    private:
	char line[LINE_MAX];	// Current line
	char *char_ptr;		// Current character on the line
    public:
        int cur_char;	// Current character (can be EOF)
        int next_char;	// Next character (can be EOF)

	/*
	 * Initialize the input file and read the first 2 
	 * characters.
	 */
	input_file(const char *const name) : ifstream(name) {
	    if (bad())
		return;
	    cur_char = get();
	    next_char = get();
	    char_ptr = line;
	}

	/*
	 * Write the line to the screen
	 */
	void flush_line() {
	   *char_ptr = '\0';
	   cout << line;
	   cout.flush();
	   char_ptr = line;
        }
	/*
	 * Advance one character
	 */
	void read_char(void) {
	   *char_ptr = cur_char;
	   ++char_ptr;

	   cur_char = next_char;
	   next_char = get();
	}
};

#ifndef TRUE
#define TRUE 1		// Define a simple TRUE/FALSE values
#define FALSE 0
#endif /* TRUE */

/********************************************************
 * token class						*
 *							*
 *	Reads the next token in the input stream	*
 *	and returns its type.  				*
 ********************************************************/
class token {
    private:
	// True if we are in the middle of a comment
	int in_comment;	

	// True if we need to read a character
	// (This hack is designed to get the new lines right)
	int need_to_read_one;

	// Read a /* */ style comment
	TOKEN_TYPE read_comment(input_file &in_file);
    public:
	token(void) { 
	    in_comment = FALSE;
	    need_to_read_one = 0;
	}

	// Return the next token in the stream
	TOKEN_TYPE next_token(input_file &in_file);
};
