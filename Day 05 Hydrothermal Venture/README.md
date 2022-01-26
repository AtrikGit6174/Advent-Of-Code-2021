<h1>Day 05 Hydrothermal Venture</h1>

Logic used: 
```
for (each line segment)
{
	for (each point in segment)
	{
		store in map, point: no of times it is crossed.
	}
}
output the number of points which are crossed more than once.
```
Better logic (unused): <br />
`note only the common points by calculating the lines and noting the line segments conditions. Requires lots of code.`

1. For 5-1, notice that the input contains horizontal, vertical and diagonal lines.
2. Using
```
while (std::cin) 
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
}
```

makes the code insensitive to the ending newlines.

3. Using 
```
while (getline(cin, str1))
{
    stringstream sstr;
    sstr << str1;
    char ch;
    int x1, y1, x2, y2;
    sstr >> x1 >> ch >> y1 >> ch >> ch >> x2 >> ch >> y2 ;
}
```
makes the code sensitive to ending newlines in the standard input.

Like, CodeChef IDE with C++14 GCC 6.3 and C++17 GCC 9.1 requires a newline for every getline.
<br />JDoodle IDE with GCC 11.1.0 does not.

While using this second piece of code for input, make sure to re-declare the stringstream object with every iteration. 
<br />Else, as I had encountered, due to some buffer facilities, only one line of input is being accepted.

4. Modified input (unsupported).txt is for optionally checking the inputs on [desmos.com](https://www.desmos.com/calculator)
