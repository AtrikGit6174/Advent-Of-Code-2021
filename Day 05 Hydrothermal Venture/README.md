Day 05 Hydrothermal Venture
1. For 5-1, 
`while (std::cin) 
{
	int x1, y1, x2, y2;
	std::cin >> x1;
	if (!std::cin)
		break;
	std::cin.ignore(1); // ","
	std::cin >> y1;
	std::cin.ignore(4); // " -> "
	std::cin >> x2;
	std::cin.ignore(1); // ","
	std::cin >> y2;
}`

This will make it insensitive to the ending newlines.

2. Using 
`while (getline(cin, str1))
{
    stringstream sstr;
    sstr << str1;
    char ch;
    int x1, y1, x2, y2;
    sstr >> x1 >> ch >> y1 >> ch >> ch >> x2 >> ch >> y2 ;
}`
makes the code sensitive to ending newlines in the standard input.

Like, CodeChef IDE with C++14 GCC 6.3 and C++17 GCC 9.1 requires a newline for every getline.
JDoodle IDE with GCC 11.1.0 does not.

While using this second piece of code for input, make sure to keep the re-declare the stringstream object with every iteration. Else, as I had encountered, due to some buffer facilities, only one line of input is being accepted.