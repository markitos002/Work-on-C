#include <iostream.h>

int seven_count;    // number of sevens in the data
int data[5];        // the data to count 3 and 7 in 
int three_count;    // the number of threes in the data 
int index;  	    // index into the data 

main() {
    seven_count = 0;
    three_count = 0;

    cout << "Enter 5 numbers\n";
    cin >> data[1] >> data[2] >> data[3] >>
           data[4] >> data[5];

    for (index = 1; index <= 5; ++index) {

        if (data[index] == 3)
            ++three_count;

        if (data[index] == 7)
	    ++seven_count;
    }
    cout << "Threes " << three_count << " Sevens " << seven_count << '\n';
    return (0);
}
