#include <iostream>
#include <fstream>

int main()
{
	const int WIDTH = 200;
	const int HEIGHT = 100;

	std::ofstream file;
	file.open("output.ppm");

	file << "P3\n" << WIDTH << " " << HEIGHT << "\n255\n";

	for (int y = 0; y < HEIGHT; y++)
	{
		for (int x = 0; x < WIDTH; x++)
		{
			int r = 255;
			int g = 255;
			int b = 255;
			file << r << " " << g << " " << b << "\n";
		}
	}

	file.close();

	return 0;
}