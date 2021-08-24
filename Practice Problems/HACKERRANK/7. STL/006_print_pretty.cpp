#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
        
        // LINE 1 
        // Strip its decimal (i.e., truncate it) and print its hexadecimal representation (including the 0x  prefix) in lower case letters.
        /*
        hex (which will output the number in hexadecimal format), left (which will align the number to the left), showbase (which will make sure the hexadecimal number has a '0x' at the beginning), and nouppercase (which converts all alphabetic hexadecimal values to lowercase).
        */
        cout << hex << left << showbase << nouppercase; // formatting
        cout << (long long) A << endl; // actual printed part

        // LINE 2
        // Print it to a scale of 2 decimal places, preceded by a + or - sign (indicating if it's positive or negative), right justified, and left-padded with underscores so that the printed result is exactly 15 characters wide.
        /*
        dec: switches numbers from hexadecimal back to decimal.
right: aligns values to the right instead of the left
setw(15): sets a fixed width of 15, as the effect from the initial code only impacts the first printed line.
setfill('_'): by default, when you have a fixed width, if your printed value doesn't fill up the entire length (for example, if you have a width of 15 and only print 7 characters), the extra characters used to pad are whitespaces. This function lets you change the padding to whatever character you want.
showpos: Makes sure there is a plus sign before any positive numbers
fixed: ensures that number is printed out entirely and that scientific notation isn't used for larger numbers
setprecision(2): sets the number of decimal places to 2.
*/
        cout << dec << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2); // formatting
        cout << B << endl; // actual printed part

        // LINE 3
        // Print it to a scale of exactly nine decimal places, expressed in scientific notation using upper case.
        /*
        cientific: Prints output in scientific notation format
uppercase: Undoes previous nouppercase manipulator and ensures that the 'E' in the scientific notation is capitalised
noshowpos: Undoes previous showpos manipulator and gets rid of the plus at the start of positive values
setprecision: Changes the number of digits after the decimal place from 2 to 9.
*/
        cout << scientific << uppercase << noshowpos << setprecision(9); // formatting
        cout << C << endl; // actual printed part
	}
	return 0;

}
