/* Grant McLain
Lab 1: STL Map
Map.cpp
*/

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	// Create a map that uses two strings. Name it colors.
	map<string, string> colors;

	// Populate several colors and their hex codes
	// red = FF0000, green = 00FF00, blue = 0000FF
	// magenta = FF00FF, yellow = FFFF00, cyan = 00FFFF

	colors["red"] = "FF0000";
	colors["blue"] = "000FF";
	colors["green"] = "00FF00";
	colors["magenta"] = "FF00FF";
	colors["yellow"] = "FFFF00";
	colors["cyan"] = "00FFFF";

	string color;
	cout << "Enter a color: ";
	cin >> color;

	// Display the hex value of the color, using the user's input as a key.
	cout << " The hex value is " << colors[color] << endl;

	return 0;
}

/* Test Results:
Enter a color: red
The hex value is FF0000

Test 2:
Enter a color: magenta
The hex value is FF00FF

Enter a color: cyan
The hex value is 00FFFF
*/